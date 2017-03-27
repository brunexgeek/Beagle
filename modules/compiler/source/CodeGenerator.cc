#include "CodeGenerator.hh"
#include <beagle-compiler/Compiler.hh>
#include <beagle-compiler/Parser.hh>
#include <iostream>
#include <stdarg.h>
#include <cassert>


extern unsigned int HEADER_TEMPLATE_LENGTH;
extern unsigned char HEADER_TEMPLATE[];


namespace beagle {
namespace compiler {


using namespace std;


CodeGenerator::CodeGenerator(
    NameGenerator &context) : context(context), guard(printer), variable(printer),
    structure(printer), out(printer.getStream())
{
    // nothing to do
}

CodeGenerator::~CodeGenerator()
{
    // nothing to do
}


void CodeGenerator::reset()
{
    printer.getStream().clear();
}


CodePrinter &CodeGenerator::getCodePrinter()
{
    return printer;
}


void CodeGenerator::printInternalStructures()
{
    const string GUARD_NAME = "BEAGLE_STRUCTURES";

    printer.getStream() << "#include <stdint.h>\n#include <stdio.h>\n\n";

    printer.comment("This file is auto-generated! Do not edit! "
        "This program is distributed in the hope that it will be useful, but WITHOUT"
        "ANY WARRANTY; without even the implied warranty ofMERCHANTABILITY or FITNESS"
        "FOR A PARTICULAR PURPOSE.");

    printer.section("Beagle internal structures");

    guard.open(GUARD_NAME);

    // generate object reference C struct
    structure.open(NameGenerator::OBJECT_REFERENCE);
    structure.addPrimitive(CodePrinter::POINTER | CodePrinter::CONST, "void" , "object");
    structure.addPrimitive(0, "uint32_t" , "size");
    structure.close();

    // generate class member meta-information C struct
    structure.open(NameGenerator::MEMBER_METAINFO);
    printer.comment("member modifiers");
    structure.addPrimitive(CodePrinter::CONST, "uint32_t" , "modifiers");
    printer.comment("number of member annotations");
    structure.addPrimitive(CodePrinter::CONST, "uint32_t" , "attributeCount");
    printer.comment("pointer to the member annotations");
    structure.addPrimitive(CodePrinter::CONST | CodePrinter::POINTER | CodePrinter::STRUCT,
        NameGenerator::TYPE_METAINFO,
        "attributes");
    printer.comment("member prototype");
    structure.addPrimitive(CodePrinter::POINTER | CodePrinter::CONST,
        "char" ,
        "prototype");
    printer.comment("member name");
    structure.addPrimitive(CodePrinter::POINTER | CodePrinter::CONST,
        "char" ,
        "name");
    structure.close();

    // generate the type (class or interface) meta-information C struct
    structure.open(NameGenerator::TYPE_METAINFO);
    structure.addPrimitive(0, "uint32_t", "signature");
    structure.addPrimitive(0, "uint32_t", "hash");
    structure.addPrimitive(CodePrinter::CONST | CodePrinter::POINTER,
        "char",
        "canonicalName");
    structure.addPrimitive(CodePrinter::CONST | CodePrinter::POINTER,
        "char",
        "qualifiedName");
    structure.addPrimitive(CodePrinter::CONST | CodePrinter::POINTER,
        "char",
        "packageName");

    printer.comment("fields meta-information");
    structure.addPrimitive(0, "uint32_t", "fieldCount");
    structure.addStruct(CodePrinter::CONST | CodePrinter::POINTER,
        NameGenerator::MEMBER_METAINFO,
        "fields");

    printer.comment("methods meta-information");
    structure.addPrimitive(0, "uint32_t", "methodCount");
    structure.addStruct(CodePrinter::CONST | CodePrinter::POINTER,
        NameGenerator::MEMBER_METAINFO,
        "methods");

    printer.comment("amount of memory necessary for static fields");
    structure.addPrimitive(0, "uint32_t", "staticSize");

    printer.comment("amount of memory necessary for dynamic fields (objects)");
    structure.addPrimitive(0, "uint32_t", "dynamicSize");
    structure.close();

    // generate the module meta-information C struct
    structure.open(NameGenerator::MODULE_METAINFO);
    structure.addPrimitive(0, "uint32_t", "signature");
    structure.addPrimitive(0, "uint32_t", "hash");
    printer.comment("number of types contained in the module");
    structure.addPrimitive(CodePrinter::CONST, "uint32_t" , "typeCount");
    printer.comment("pointer to the type metainformation array");
    structure.addStruct(CodePrinter::POINTER | CodePrinter::CONST | CodePrinter::ARRAY,
        NameGenerator::TYPE_METAINFO ,
        "types");
    structure.close();

    guard.close(GUARD_NAME);
}


uint32_t CodeGenerator::getNativeModifiers(
    Node &modifiers )
{
    uint32_t mask = 0;

    if (modifiers.type != NID_MODIFIERS) return 0;

    for (int i = 0, n = modifiers.count(); i < n; ++i)
    {
        int shift = 0;

        switch (modifiers[i].type)
        {
            case NID_PUBLIC:
                break;
            case NID_PRIVATE:
                shift = 1;
                break;
            case NID_PROTECTED:
                shift = 2;
                break;
            case NID_STATIC:
                shift = 3;
                break;
            case NID_ABSTRACT:
                shift = 4;
                break;
            case NID_FINAL:
                shift = 5;
                break;
            case NID_NATIVE:
                shift = 6;
                break;
            case NID_READLOCK:
                shift = 7;
                break;
            case NID_WRITELOCK:
                shift = 8;
                break;
            case NID_TRANSIENT:
                shift = 9;
                break;
            case NID_VOLATILE:
                shift = 10;
                break;
        }

        mask |= (1 << shift);
    }

    return mask;
}


void CodeGenerator::printClassStructures(
	Node &package,
	Node &type )
{
	if ( (package.type != NID_NAME && package.type != NID_QNAME) ||
	     (type.type != NID_CLASS && type.type != NID_INTERFACE) )
	     return;

    string qualifiedName = type[2];
    string nativeName = context.getNativeName(type[2]);

    string dynamicFields = context.getNativeTypeName(type, false);
    string staticFields = context.getNativeTypeName(type, true);

    string vtableName = "vtable__" + nativeName;
    string fieldList = "field_list__" + nativeName;
    string methodList = "method_list__" + nativeName;
    int fieldCount = 0;
    int methodCount = 0;

    printer.section("Structures and meta-information for " + qualifiedName);

    // create the structure to hold the dynamic fields
    printer.comment("dynamic fields of " + qualifiedName);
	structure.open(dynamicFields);
    structure.addPrimitive(0, "void*", "vtable_" + nativeName);
    for (int i = 0, n = type[5].count(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type == NID_FIELD && member[1].findByType(NID_STATIC) == NULL)
        {
            const string memberType = context.getNativeType(member[2]);
            string &memberName = nativeName;
            memberName += "_";
            memberName += member[3].text;

            structure.addPrimitive(0, memberType, memberName);
        }
    }
	structure.close();

	// create the structure to hold the static fields
	printer.comment("static fields of " + qualifiedName);
    structure.open( staticFields );
    for (int i = 0, n = type[5].count(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type == NID_FIELD && member[1].findByType(NID_STATIC) != NULL)
        {
            const string memberType = context.getNativeType(member[2]);
            const string &memberName = member[3].text;

            structure.addPrimitive(0, memberType, memberName);
        }
    }
	structure.close();

    // create the variable with fields meta-information
	printer.comment("fields list of " + qualifiedName);
    variable.open(CodePrinter::CONST | CodePrinter::STRUCT | CodePrinter::ARRAY,
        NameGenerator::MEMBER_METAINFO,
        fieldList);
    for (int i = 0, n = type[5].count(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type == NID_FIELD)
        {
            const string memberType = getPrototypeType(member[2]);
            const string &memberName = member[3].text;

            variable.openBlock();
            variable.addPrimitive( getNativeModifiers(member[1]) );
            variable.addPrimitive(0);
            variable.addNull();
            variable.addString(memberType);
            variable.addString(memberName);
            variable.closeBlock();
            ++fieldCount;
        }
    }
	variable.close();

    // create the variable with methods meta-information
    printer.comment("method list of " + qualifiedName);
	variable.open(CodePrinter::CONST | CodePrinter::STRUCT | CodePrinter::ARRAY,
        NameGenerator::MEMBER_METAINFO,
        methodList);
    for (int i = 0, n = type[5].count(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type == NID_METHOD)
        {
            const string memberType = context.getNativeType(member[2]);
            const string &memberName = member[3].text;

            variable.openBlock();
            variable.addPrimitive( getNativeModifiers(member[1]) );
            variable.addPrimitive(0);
            variable.addNull();
            variable.addString( getPrototype(member) );
            variable.addString(memberName);
            variable.closeBlock();
            ++methodCount;
        }
    }
	variable.close();

    // create the variable with methods pointers (virtual method table)
    printer.comment("virtual method table of " + qualifiedName);
	variable.open(CodePrinter::CONST | CodePrinter::ARRAY,
        "void*",
        vtableName);
    for (int i = 0, n = type[5].count(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type == NID_METHOD)
        {
            printer.comment(member[3].text);

            variable.addNull();
            ++methodCount;
        }
    }
	variable.close();

    // create the variable with type meta-information
    printer.comment("type meta-information of " + qualifiedName);
	variable.open(CodePrinter::CONST | CodePrinter::STRUCT,
        NameGenerator::TYPE_METAINFO,
        "type__" + context.getNativeName(type[2]) );
    variable.addPlain("0xCAFEBABE");
    variable.addPrimitive(0);
    variable.addString(type[2].text);
    variable.addString(qualifiedName);
    variable.addString(package.text);
    variable.addPrimitive(fieldCount);
    variable.addPlain(fieldList);
    variable.addPrimitive(methodCount);
    variable.addPlain(methodList);
	variable.close();
}


stringstream &CodeGenerator::getStream()
{
    return printer.getStream();
}

/*
void CodeGenerator::printHeader(
    Node &root )
{
    out << "#include <stdint.h>" << endl;
	out << "#include <stdio.h>" << endl << endl;

    printer.comment("This file is auto-generated! Do not edit!\n"
        "This program is distributed in the hope that it will be useful,"
        "but WITHOUT ANY WARRANTY; without even the implied warranty of"
        "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.");

    printInternalStructures();
}
*/

void CodeGenerator::writeFooter(
    map<string, CompilationUnit> &units )
{
    printer.section("Module meta-information");

    printer.comment("Module class list");

    // create the variable containing the list of classes in the library
    variable.open(CodePrinter::CONST | CodePrinter::CONST | CodePrinter::STRUCT | CodePrinter::ARRAY,
        NameGenerator::TYPE_METAINFO + "*",
        "class_list");
    map<string, CompilationUnit>::iterator it = units.begin();
    for (; it != units.end(); ++it)
    {
        if ((*it).second.root == NULL) continue;

        Node &root = *(*it).second.root;
        Node &type = root[2];

        printer.comment( root[2][2].text );
        variable.addAddress( "type__" + context.getNativeName(type[2]) );
    }
    variable.close();

    printer.comment("Module meta-information public variable");

    // create the module meta-information variable
    variable.open(CodePrinter::CONST | CodePrinter::CONST | CodePrinter::STRUCT,
        NameGenerator::MODULE_METAINFO,
        "module_metainfo");
    variable.addPlain("0xFEE1600D"); // feel good! :)
    variable.addPrimitive(0);
    variable.addPrimitive(units.size());
    variable.addPlain("class_list");
    variable.close();
}


void CodeGenerator::visitCompulationUnit(
	Node &root )
{
    this->root = &root;

    // visit the available type declaration
    visitType(root[2]);

    this->root = NULL;
}


void CodeGenerator::visitType(
	Node &type )
{
    assert(root != NULL);

    Node &package = (*root)[0];

	printClassStructures(package, type);

    if (type.type != NID_CLASS || type[5].type != NID_BODY)
        return;

    // iterate the methods
    for (int i = 0, n = type[5].count(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type != NID_METHOD) continue;

        visitMethod(type, member);
    }
}


void CodeGenerator::visitMethod(
    Node &type,
    Node &method )
{
    bool isAbstract = method[1].findByType(NID_ABSTRACT) != NULL;

    if (isAbstract) out << "// ABSTRACT: ";

    const string &returnType = context.getNativeType(method[2]);
    const string &methodName = context.getMethodNativeName(type, method);

    // write method header
    out << returnType << ' ' << methodName << "(\n";
    printer.incIndent();
    if (method[1].findByType(NID_STATIC) != NULL)
    {
        printer.indent();
        out << "struct " << NameGenerator::OBJECT_REFERENCE << " *__this_ptr";
        if (method[4].count() != 0)
            out << ", \n";
    }
    visitParameterList(method, method[4]);
    out << ")\n";
    printer.decIndent();

    // write method body, if any
    if (isAbstract) return;
    out << "{\n";
    visitMethodBody(method, method[6]);
    out << "}\n\n";
}


void CodeGenerator::visitMethodBody(
    Node &method,
    Node &body )
{
    assert(root != NULL);

    printer.incIndent();
    // generate the variable to hold the pointer for the 'this' object
    if (method[1].findByType(NID_STATIC) == NULL)
    {
        Node &type = (*root)[2];
        string typeName = context.getNativeTypeName(type, false);
        printer.indent();
        out << "struct " << typeName << " *__this = (struct " << typeName << "*) __this_ptr->object;\n";
    }

    // generate each method statement
    for (int i = 0, n = body.count(); i < n; ++i)
    {
        Node &stmt = body[i];
        printer.indent();
        switch (stmt.type)
        {
            case NID_LOCAL:
                visitLocalVariable(stmt);
                break;
            default:
                out << "// " << Node::name(stmt.type) << "\n";
        }
    }

    printer.decIndent();
}


void CodeGenerator::visitParameterList(
    Node &parent,
    Node &params )
{
    for (int i = 0, n = params.count(); i < n; ++i)
    {
        printer.indent();
        visitParameter(params, params[i]);
        if (i + 1 < n) out << ",\n";
    }
}

void CodeGenerator::visitParameter(
    Node &parent,
    Node &parameter )
{
    out << context.getNativeType(parameter[0]) <<
        ' ' <<
        context.getNativeName(parameter[1]);
}


void CodeGenerator::visitAnnotation(
	Node &parent,
    Node &node )
{

}


string CodeGenerator::getPrototypeType(
    Node &type )
{
    if (type.type == NID_TYPE_ARRAY)
    {
        string result = getPrototypeType(type[0]);
        for (int i = 0; i < type.counter; ++i)
            result += '[';
        return result;
    }
    else
    if (type.type == NID_TYPE_CLASS)
        return "T" + type[0].text + ";";
    else
    {
        switch (type.type)
        {
            case NID_CHAR:
                return "C";
            case NID_BOOLEAN:
                return "O";
            case NID_UINT8:
                return "1";
            case NID_UINT16:
                return "2";
            case NID_UINT32:
                return "4";
            case NID_UINT64:
                return "8";
            case NID_INT8:
                return "B";
            case NID_INT16:
                return "S";
            case NID_INT32:
            default:
                return "I";
            case NID_INT64:
                return "L";
            case NID_FLOAT:
                return "F";
            case NID_DOUBLE:
                return "D";
        }
    }
}


string CodeGenerator::getPrototype(
    Node &method )
{
    if (method.type != NID_METHOD) return "";

    stringstream ss;

    ss << getPrototypeType(method[2]) << '(';
    for (int i = 0, n = method[4].count(); i < n; ++i)
    {
        Node &parameter = method[4][i];
        if (parameter.type == NID_TYPE_CLASS)
            ss << "T" << getPrototypeType(parameter[0]) << ";";
        else
            ss << getPrototypeType(parameter[0]);
    }
    ss << ')';

    return ss.str();
}


void CodeGenerator::writeHeader()
{
    /*for (size_t i = 0; i < HEADER_TEMPLATE_LENGTH; ++i)
        out << (char) HEADER_TEMPLATE[i];*/

    printInternalStructures();
}


void CodeGenerator::visitLocalVariable(
    Node &variable )
{
    assert(variable.type == NID_LOCAL);

    string nativeType = context.getNativeType(variable[0]);

    out << nativeType << ' ' << variable[1].text << ";\n";
}


void CodeGenerator::visitImports(
    Node &imports )
{

}


void CodeGenerator::visitField(
    Node &type,
    Node &field )
{

}


} // namespace compiler
} // namespace beagle

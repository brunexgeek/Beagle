#include "CodeGenerator.hh"
#include <beagle-compiler/Compiler.hh>
#include <iostream>
#include <stdarg.h>
#include "beagle.y.hh"
#include <cassert>


extern unsigned int HEADER_TEMPLATE_LENGTH;
extern unsigned char HEADER_TEMPLATE[];


namespace beagle {
namespace compiler {


using namespace std;


const string CodeGenerator::CLASS_ENTRY = "__class_entry";
const string CodeGenerator::MODULE_METAINFO = "__module_metainfo";
const string CodeGenerator::TYPE_METAINFO = "__type_metainfo";
const string CodeGenerator::FIELD_METAINFO = "__field_metainfo";
const string CodeGenerator::METHOD_METAINFO = "__method_metainfo";


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

/*
void CodeGenerator::printInternalStructures()
{
    const string GUARD_NAME = "BEAGLE_STRUCTURES";

    printer.section("Beagle internal structures");

    guard.open(GUARD_NAME);

    // generate the field meta-information C struct
    structure.open(FIELD_METAINFO);
    structure.addPrimitive(CONST, "uint32_t" , "modifiers");
    structure.addPrimitive(POINTER | CONST, "char" , "type");
    structure.addPrimitive(POINTER | CONST, "char" , "name");
    structure.close();

    // generate the method meta-information C struct
    structure.open(METHOD_METAINFO);
    structure.addPrimitive(CONST, "uint32_t" , "modifiers");
    structure.addPrimitive(POINTER | CONST, "char" , "prototype");
    structure.addPrimitive(POINTER | CONST, "char" , "name");
    structure.close();

    // generate the type (class or interface) meta-information C struct
    structure.open(TYPE_METAINFO);
    structure.addPrimitive(0, "uint32_t", "signature");
    structure.addPrimitive(0, "uint32_t", "hash");
    structure.addPrimitive(CONST | POINTER, "char", "canonicalName");
    structure.addPrimitive(CONST | POINTER, "char", "qualifiedName");
    structure.addPrimitive(CONST | POINTER, "char", "packageName");

    printer.comment("fields meta-information");
    structure.addPrimitive(0, "uint32_t", "fieldCount");
    structure.addStruct(CONST | POINTER, "__field_metainfo", "fields");

    printer.comment("methods meta-information");
    structure.addPrimitive(0, "uint32_t", "methodCount");
    structure.addStruct(CONST | POINTER, "__method_metainfo", "methods");

    printer.comment("amount of memory necessary for static fields");
    structure.addPrimitive(0, "uint32_t", "staticSize");

    printer.comment("amount of memory necessary for dynamic fields (objects)");
    structure.addPrimitive(0, "uint32_t", "dynamicSize");
    structure.close();

    // generate the C struct for class list entries
    structure.open(CLASS_ENTRY);
    printer.comment("canonical name");
    structure.addPrimitive(POINTER | CONST, "char" , "name");
    printer.comment("pointer to type metainformation");
    structure.addStruct(POINTER | CONST, TYPE_METAINFO , "info");
    structure.close();

    // generate the module meta-information C struct
    structure.open(MODULE_METAINFO);
    structure.addPrimitive(0, "uint32_t", "signature");
    structure.addPrimitive(0, "uint32_t", "hash");
    printer.comment("number of types contained in the module");
    structure.addPrimitive(CONST, "uint32_t" , "typeCount");
    printer.comment("pointer to the type metainformation array");
    structure.addStruct(POINTER | CONST, CLASS_ENTRY , "types");
    structure.close();

    guard.close(GUARD_NAME);
}
*/



uint32_t CodeGenerator::getNativeModifiers(
    Node &modifiers )
{
    uint32_t mask = 0;

    if (modifiers.type != TOK_MODIFIERS) return 0;

    for (int i = 0, n = modifiers.getChildCount(); i < n; ++i)
    {
        int shift = 0;

        switch (modifiers[i].type)
        {
            case TOK_PUBLIC:
                break;
            case TOK_PRIVATE:
                shift = 1;
                break;
            case TOK_PROTECTED:
                shift = 2;
                break;
            case TOK_STATIC:
                shift = 3;
                break;
            case TOK_ABSTRACT:
                shift = 4;
                break;
            case TOK_FINAL:
                shift = 5;
                break;
            case TOK_NATIVE:
                shift = 6;
                break;
            case TOK_READLOCK:
                shift = 7;
                break;
            case TOK_WRITELOCK:
                shift = 8;
                break;
            case TOK_TRANSIENT:
                shift = 9;
                break;
            case TOK_VOLATILE:
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
	if ( (package.type != TOK_NAME && package.type != TOK_QNAME) ||
	     (type.type != TOK_CLASS && type.type != TOK_INTERFACE) )
	     return;

    string qualifiedName = type[2];

    string dynamicFields = context.getNativeTypeName(type, false);
    string staticFields = context.getNativeTypeName(type, true);

    string fieldList = "field_list" + context.getNativeName(type[2]);
    string methodList = "method_list" + context.getNativeName(type[2]);
    int fieldCount = 0;
    int methodCount = 0;

    printer.section("Structures and meta-information for " + qualifiedName);

    // create the structure to hold the dynamic fields
    printer.comment("dynamic fields of " + qualifiedName);
	structure.open(dynamicFields);
    for (int i = 0, n = type[5].getChildCount(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type == TOK_FIELD && !member[1].hasChild(TOK_STATIC))
        {
            const string memberType = context.getNativeType(member[2]);
            const string &memberName = member[3].text;

            structure.addPrimitive(0, memberType, memberName);
        }
    }
	structure.close();

	// create the structure to hold the static fields
	printer.comment("static fields of " + qualifiedName);
    structure.open( staticFields );
    for (int i = 0, n = type[5].getChildCount(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type == TOK_FIELD && member[1].hasChild(TOK_STATIC))
        {
            const string memberType = context.getNativeType(member[2]);
            const string &memberName = member[3].text;

            structure.addPrimitive(0, memberType, memberName);
        }
    }
	structure.close();

    // create the variable with fields meta-information
	printer.comment("fields list of " + qualifiedName);
    variable.open(CONST | ARRAY, true, FIELD_METAINFO, fieldList);
    for (int i = 0, n = type[5].getChildCount(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type == TOK_FIELD)
        {
            const string memberType = getPrototypeType(member[2]);
            const string &memberName = member[3].text;

            variable.openBlock();
            variable.addPrimitive( getNativeModifiers(member[1]) );
            variable.addString(memberType);
            variable.addString(memberName);
            variable.closeBlock();
            ++fieldCount;
        }
    }
	variable.close();

    // create the variable with methods meta-information
    printer.comment("method list of " + qualifiedName);
	variable.open(CONST | ARRAY, true, METHOD_METAINFO, methodList);
    for (int i = 0, n = type[5].getChildCount(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type == TOK_METHOD)
        {
            const string memberType = context.getNativeType(member[2]);
            const string &memberName = member[3].text;

            variable.openBlock();
            variable.addPrimitive( getNativeModifiers(member[1]) );
            variable.addString( getPrototype(member) );
            variable.addString(memberName);
            variable.closeBlock();
            ++methodCount;
        }
    }
	variable.close();

    // create the variable with type meta-information
    printer.comment("type meta-information of " + qualifiedName);
	variable.open(CONST, true, TYPE_METAINFO, "type__" + context.getNativeName(type[2]) );
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
    variable.open(CONST | ARRAY, true, CLASS_ENTRY, "class_list");
    map<string, CompilationUnit>::iterator it = units.begin();
    for (; it != units.end(); ++it)
    {
        if ((*it).second.root == NULL) continue;

        Node &root = *(*it).second.root;
        Node &type = root[2];

        variable.openBlock();
        variable.addString( root[2][2].text );
        variable.addAddress( "type__" + context.getNativeName(type[2]) );
        variable.closeBlock();
    }
    variable.close();

    printer.comment("Module meta-information public variable");

    // create the module meta-information variable
    variable.open(CONST | PUBLIC, true, MODULE_METAINFO, "module_metainfo");
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

    if (type.type != TOK_CLASS || type[5].type != TOK_BODY)
        return;

    // iterate the methods
    for (int i = 0, n = type[5].getChildCount(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type != TOK_METHOD) continue;

        visitMethod(type, member);
    }
}


void CodeGenerator::visitMethod(
    Node &type,
    Node &method )
{
    bool isAbstract = method[1].hasChild(TOK_ABSTRACT);

    if (isAbstract) out << "// ABSTRACT: ";

    const string &returnType = context.getNativeType(method[2]);
    const string &methodName = context.getMethodNativeName(type, method);

    // write method header
    out << returnType << ' ' << methodName << "(\n";
    printer.incIndent();
    if (!method[1].hasChild(TOK_STATIC))
    {
        printer.indent();
        out << "struct " << NameGenerator::OBJECT_REFERENCE << " *__this_ptr";
        if (method[4].getChildCount() != 0)
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
    if (!method[1].hasChild(TOK_STATIC))
    {
        Node &type = (*root)[2];
        string typeName = context.getNativeTypeName(type, false);
        printer.indent();
        out << "struct " << typeName << " *__this = (struct " << typeName << "*) __this_ptr->instance;\n";
    }

    // generate each method statement
    for (int i = 0, n = body.getChildCount(); i < n; ++i)
    {
        Node &stmt = body[i];
        printer.indent();
        switch (stmt.type)
        {
            case TOK_LOCAL:
                visitLocalVariable(stmt);
                break;
            default:
                out << "// " << Parser::name(stmt.type) << "\n";
        }
    }

    printer.decIndent();
}


void CodeGenerator::visitParameterList(
    Node &parent,
    Node &params )
{
    for (int i = 0, n = params.getChildCount(); i < n; ++i)
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
    if (type.type == TOK_TYPE_ARRAY)
    {
        string result = getPrototypeType(type[0]);
        for (int i = 0; i < type.counter; ++i)
            result += '[';
        return result;
    }
    else
    if (type.type == TOK_TYPE_CLASS)
        return "T" + type[0].text + ";";
    else
    {
        switch (type.type)
        {
            case TOK_CHAR:
                return "C";
            case TOK_BOOLEAN:
                return "O";
            case TOK_UINT8:
                return "1";
            case TOK_UINT16:
                return "2";
            case TOK_UINT32:
                return "4";
            case TOK_UINT64:
                return "8";
            case TOK_INT8:
                return "B";
            case TOK_INT16:
                return "S";
            case TOK_INT32:
            default:
                return "I";
            case TOK_INT64:
                return "L";
            case TOK_FLOAT:
                return "F";
            case TOK_DOUBLE:
                return "D";
        }
    }
}


string CodeGenerator::getPrototype(
    Node &method )
{
    if (method.type != TOK_METHOD) return "";

    stringstream ss;

    ss << getPrototypeType(method[2]) << '(';
    for (int i = 0, n = method[4].getChildCount(); i < n; ++i)
    {
        Node &parameter = method[4][i];
        if (parameter.type == TOK_TYPE_CLASS)
            ss << "T" << getPrototypeType(parameter[0]) << ";";
        else
            ss << getPrototypeType(parameter[0]);
    }
    ss << ')';

    return ss.str();
}


void CodeGenerator::writeHeader()
{
    for (size_t i = 0; i < HEADER_TEMPLATE_LENGTH; ++i)
        out << (char) HEADER_TEMPLATE[i];
}


void CodeGenerator::visitLocalVariable(
    Node &variable )
{
    assert(variable.type == TOK_LOCAL);

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

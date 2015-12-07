#include "CodeGenerator.hh"
#include <iostream>
#include <stdarg.h>
#include "beagle.y.hh"


extern unsigned int HEADER_TEMPLATE_LENGTH;
extern unsigned char HEADER_TEMPLATE[];


namespace beagle {
namespace compiler {


const std::string CodeGenerator::CLASS_ENTRY = "__class_entry";
const std::string CodeGenerator::MODULE_METAINFO = "__module_metainfo";
const std::string CodeGenerator::TYPE_METAINFO = "__type_metainfo";
const std::string CodeGenerator::FIELD_METAINFO = "__field_metainfo";
const std::string CodeGenerator::METHOD_METAINFO = "__method_metainfo";


CodeGenerator::CodeGenerator(
    Node &root,
    int context ) : TreeVisitor(root, context), guard(printer),
        variable(printer), structure(printer), out(printer.getStream())
{
    // nothing to do
}

CodeGenerator::~CodeGenerator()
{
    // nothing to do
}

/*
void CodeGenerator::printInternalStructures()
{
    const std::string GUARD_NAME = "BEAGLE_STRUCTURES";

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

/**
 * Append the name to a std::stringstream instance. If the name is full qualified,
 * each dot character will be replaced by an underline.
 */
void CodeGenerator::appendName(
	std::stringstream &ss,
	const std::string &name )
{
	char current = '_';

	for (size_t i = 0; i < name.length(); ++i)
	{
		current = name[i];
		if (current == '.') current = '_';
		ss << current;
	}
}

/*
std::string CodeGenerator::createName(
	int count,
	const std::string &... )
{
	va_list args;

	if (count <= 0) return "";

	std::stringstream ss;

	va_start(args, count);
	for (int i = 0; i < count; ++i)
	{
		std::string *current = va_arg(args, std::string*);
		appendName(ss, *current);
		if (i < count - 1) ss << '_';
	}
	va_end(args);

	return ss.str();
}*/


void CodeGenerator::getNativeName(
	std::stringstream &ss,
	Node &name )
{
    std::string &value = name.text;
	if (name.type != TOK_NAME && name.type != TOK_QNAME) return;

	for (size_t i = 0, n = value.length(); i < n; ++i)
        if (value.at(i) == '.')
            ss << '_';
        else
            ss << value.at(i);
}


std::string CodeGenerator::getNativeName(
	Node &name )
{
	std::stringstream ss;

	getNativeName(ss, name);

	return ss.str();
}


std::string CodeGenerator::getMethodNativeName(
	Node &package,
	Node &type,
	Node &method )
{
	std::stringstream ss;

	if ( (package.type != TOK_NAME && package.type != TOK_QNAME) ||
	     method.type  != TOK_METHOD ||
	     (type.type != TOK_CLASS && type.type != TOK_INTERFACE) )
	     return "";

    if (hasModifier(method[0], TOK_STATIC))
        ss << "static__";
    else
        ss << "dynamic__";
    ss << getNativeName(package) << '_';
	ss << getNativeName(type[2]) << '_' << getNativeName(method[3]);

	return ss.str();
}


std::string CodeGenerator::getTypeName(
	Node &package,
	Node &type )
{
	std::stringstream ss;

	if ( (package.type != TOK_NAME && package.type != TOK_QNAME) ||
	     (type.type != TOK_CLASS && type.type != TOK_INTERFACE) )
	     return "";

	ss << package.text << '.' << type[2].text;

	return ss.str();
}


std::string CodeGenerator::getNativeTypeName(
	const std::string &prefix,
	Node &package,
	Node &type,
    char separator )
{
	std::stringstream ss;

	if ( (package.type != TOK_NAME && package.type != TOK_QNAME) ||
	     (type.type != TOK_CLASS && type.type != TOK_INTERFACE) )
	     return "";

	ss << prefix <<
        separator <<
        separator <<
        getNativeName(package) <<
        separator <<
        getNativeName(type[2]);

	return ss.str();
}


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


bool CodeGenerator::hasModifier(
    Node &node,
    int modifier )
{
    if (node.type != TOK_MODIFIERS) return false;

    for (int i = 0, n = node.getChildCount(); i < n; ++i)
        if (node[i].type == modifier) return true;

    return false;
}


std::string CodeGenerator::getNativeType(
    Node &type )
{
    if (type.type == TOK_TYPE_CLASS)
        return "field_dynamic__" + getNativeName(type[0]) + "*";
    else
    {
        switch (type.type)
        {
            case TOK_BOOLEAN:
            case TOK_UINT8:
                return "uint8_t";
            case TOK_UINT16:
            case TOK_CHAR:
                return "uint16_t";
            case TOK_UINT32:
                return "uint32_t";
            case TOK_UINT64:
                return "uint64_t";
            case TOK_INT8:
                return "int8_t";
            case TOK_INT16:
                return "int16_t";
            case TOK_INT32:
            default:
                return "int32_t";
            case TOK_INT64:
                return "int64_t";
            case TOK_FLOAT:
                return "float";
            case TOK_DOUBLE:
                return "double";
            case TOK_VOID:
                return "void";
        }
    }
}


void CodeGenerator::printClassStructures(
	Node &package,
	Node &type )
{
	if ( (package.type != TOK_NAME && package.type != TOK_QNAME) ||
	     (type.type != TOK_CLASS && type.type != TOK_INTERFACE) )
	     return;

    std::string qualifiedName = getTypeName(package, type);

    std::string dynamicFields = getNativeTypeName("fields_dynamic", package, type );
    std::string staticFields = getNativeTypeName("fields_static", package, type );

    std::string fieldList = getNativeTypeName("field_list", package, type );
    std::string methodList = getNativeTypeName("method_list", package, type );
    int fieldCount = 0;
    int methodCount = 0;

    printer.section("Structures and meta-information for " + qualifiedName);

    // create the structure to hold the dynamic fields
    printer.comment("dynamic fields of " + qualifiedName);
	structure.open(dynamicFields);
    for (int i = 0, n = type[5].getChildCount(); i < n; ++i)
    {
        Node &member = type[5][i];
        if (member.type == TOK_FIELD && !hasModifier(member[1], TOK_STATIC))
        {
            const std::string memberType = getNativeType(member[2]);
            const std::string &memberName = member[3].text;

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
        if (member.type == TOK_FIELD && hasModifier(member[1], TOK_STATIC))
        {
            const std::string memberType = getNativeType(member[2]);
            const std::string &memberName = member[3].text;

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
            const std::string memberType = getPrototypeType(member[2]);
            const std::string &memberName = member[3].text;

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
            const std::string memberType = getNativeType(member[2]);
            const std::string &memberName = member[3].text;

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
	variable.open(CONST, true, TYPE_METAINFO, getNativeTypeName("type", package, type ) );
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


std::stringstream &CodeGenerator::getStream()
{
    return printer.getStream();
}

/*
void CodeGenerator::printHeader(
    Node &root )
{
    out << "#include <stdint.h>" << std::endl;
	out << "#include <stdio.h>" << std::endl << std::endl;

    printer.comment("This file is auto-generated! Do not edit!\n"
        "This program is distributed in the hope that it will be useful,"
        "but WITHOUT ANY WARRANTY; without even the implied warranty of"
        "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.");

    printInternalStructures();
}
*/

void CodeGenerator::writeFooter()
{
    Node &root = getRoot();

    printer.section("Module meta-information");

    printer.comment("Module class list");

    // create the variable containing the list of classes in the library
    variable.open(CONST | ARRAY, true, CLASS_ENTRY, "class_list");
    variable.openBlock();
    variable.addString( getNativeName(root[0]) + "." + root[2][2].text);
    variable.addNull();
    variable.closeBlock();
    variable.close();

    printer.comment("Module meta-information public variable");

    // create the module meta-information variable
    variable.open(CONST | PUBLIC, true, MODULE_METAINFO, "module_metainfo");
    variable.addPlain("0xFEE1600D"); // feel good! :)
    variable.addPrimitive(0);
    variable.addPrimitive(1);
    variable.addPlain("class_list");
    variable.close();
}


void CodeGenerator::visitCompulationUnit(
	Node &root )
{
    //printHeader(root);

    // visit the available type declaration
    visitTypeDeclaration(root[2]);

    //printFooter(root);
}


void CodeGenerator::visitPackageDeclaration(
	Node &node )
{

}


void CodeGenerator::visitTypeDeclaration(
	Node &type )
{
    Node &package = getRoot()[0];
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
    Node &parent,
    Node &method )
{
    Node &package = getRoot()[0];
    bool isAbstract = hasModifier(method[1], TOK_ABSTRACT);

    if (isAbstract) out << "// ABSTRACT: ";

    // write method header
    out << getNativeType(method[2]) <<
        ' ' <<
        getMethodNativeName(package, parent, method) <<
        '(';
    visitParameterList(method, method[4]);
    out << ")\n";

    // write method body, if any
    if (isAbstract) return;
    out << "{\n";
    visitMethodBody(method, method[6]);
    out << "}\n";
}


void CodeGenerator::visitMethodBody(
    Node &method,
    Node &body )
{
    for (int i = 0, n = body.getChildCount(); i < n; ++i)
    {
        Node &stmt = body[i];
        out << "// " << Parser::name(stmt.type) << "\n";
    }
}


void CodeGenerator::visitParameterList(
    Node &parent,
    Node &params )
{
    for (int i = 0, n = params.getChildCount(); i < n; ++i)
    {
        visitParameter(params, params[i]);
        if (i + 1 < n) out << ", ";
    }
}

void CodeGenerator::visitParameter(
    Node &parent,
    Node &parameter )
{
    out << getNativeType(parameter[0]) <<
        ' ' <<
        getNativeName(parameter[1]);
}


void CodeGenerator::visitAnnotationDeclaration(
	Node &parent,
    Node &node )
{

}


std::string CodeGenerator::getPrototypeType(
    Node &type )
{
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


std::string CodeGenerator::getPrototype(
    Node &method )
{
    if (method.type != TOK_METHOD) return "";

    std::stringstream ss;

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


} // namespace compiler
} // namespace beagle

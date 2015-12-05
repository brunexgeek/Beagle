#include <beagle-parser/CodeGenerator.hh>
#include <beagle-parser/CodePrinter.hh>
#include <iostream>
#include <stdarg.h>
#include "beagle.y.hh"


namespace beagle {


CodeGenerator::CodeGenerator(
    Node &root,
    int context ) : TreeVisitor(root, context), structPrinter(printer)
{
    // nothing to do
}

CodeGenerator::~CodeGenerator()
{
    // nothing to do
}


void CodeGenerator::printCommomTypeStructures()
{
    // generate the C struct for class list entries
    printer.openSentinel("CLASS_METAINFO_STRUCT");
    structPrinter.open("__class__metainfo");
    structPrinter.addPrimitive(POINTER | CONST, "char" , "name");
    structPrinter.addPrimitive(POINTER | CONST, "char" , "symbol");
    structPrinter.close();
    printer.closeSentinel("CLASS_METAINFO_STRUCT");

    // generate the library meta-information C struct
    printer.openSentinel("LIBRARY_METAINFO_STRUCT");
    structPrinter.open("__module_metainfo");
    structPrinter.addPrimitive(CONST, "uint32_t" , "classCount");
    structPrinter.addStruct(POINTER | CONST, "__class_metainfo" , "classTable");
    structPrinter.close();
    printer.closeSentinel("LIBRARY_METAINFO_STRUCT");

    // generate the field meta-information C struct
    printer.openSentinel("FIELD_METAINFO_STRUCT");
    structPrinter.open("__field_metainfo");
    structPrinter.addPrimitive(POINTER | CONST, "char" , "type");
    structPrinter.addPrimitive(POINTER | CONST, "char" , "name");
    structPrinter.close();
    printer.closeSentinel("FIELD_METAINFO_STRUCT");

    // generate the method meta-information C struct
    printer.openSentinel("METHOD_METAINFO_STRUCT");
    structPrinter.open("__method_metainfo");
    structPrinter.addPrimitive(POINTER | CONST, "char" , "prototype");
    structPrinter.addPrimitive(POINTER | CONST, "char" , "name");
    structPrinter.close();
    printer.closeSentinel("METHOD_METAINFO_STRUCT");

    // generate the meta-information C struct
    printer.openSentinel("TYPE_METAINFO_STRUCT");
    structPrinter.open("__type_metainfo");
    structPrinter.addPrimitive(0, "uint32_t", "signature");
    structPrinter.addPrimitive(0, "uint32_t", "hash");
    structPrinter.addPrimitive(CONST | POINTER, "char", "canonicalName");
    structPrinter.addPrimitive(CONST | POINTER, "char", "qualifiedName");
    structPrinter.addPrimitive(CONST | POINTER, "char", "packageName");

    printer.comment("fields meta-information");
    structPrinter.addPrimitive(0, "uint32_t", "fieldCount");
    structPrinter.addStruct(CONST | POINTER, "__field_metainfo", "fields");

    printer.comment("methods meta-information");
    structPrinter.addPrimitive(0, "uint32_t", "methodCount");
    structPrinter.addStruct(CONST | POINTER, "__method_metainfo", "methods");

    printer.comment("amount of memory necessary for static fields");
    structPrinter.addPrimitive(0, "uint32_t", "staticSize");

    printer.comment("amount of memory necessary for dynamic fields (objects)");
    structPrinter.addPrimitive(0, "uint32_t", "dynamicSize");
    structPrinter.close();
    printer.closeSentinel("TYPE_METAINFO_STRUCT");
}


/**
 * Append the name to a std::stringstream instance. If the name is full qualified,
 * each dot character will be replaced by an underline.
 */
void CodeGenerator::appendName(
	std::stringstream &ss,
	const std::string &name )
{
	char current = '_';

	for (int i = 0; i < name.length(); ++i)
	{
		current = name[i];
		if (current == '.') current = '_';
		ss << current;
	}
}


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
}


void CodeGenerator::getName(
	std::stringstream &ss,
	Node &ident )
{
	if (ident.getType() != TOK_NAME) return;

	ss << ident.getText();
	for (int i = 0; i < ident.getChildCount(); ++i)
		ss << '_' << ident.getChild(i).getText();
}


std::string CodeGenerator::getName(
	Node &ident )
{
	std::stringstream ss;

	getName(ss, ident);

	return ss.str();
}


std::string CodeGenerator::getMethodName(
	Node &package,
	Node &type,
	Node &method )
{
	std::stringstream ss;

	if ( (package.getType() != TOK_PACKAGE && package.getType() != TOK_NULL) ||
	     method.getType()  != TOK_METHOD ||
	     (type.getType() != TOK_CLASS && type.getType() != TOK_INTERFACE) )
	     return "";

	ss << "__";
	if (package.getType() != TOK_NULL)
		ss << getName(package[0]) << '_';
	ss << getName(type[2]) << '_' << getName(method[0]);

	return ss.str();
}


std::string CodeGenerator::getStructName(
	const std::string &prefix,
	Node &package,
	Node &type )
{
	std::stringstream ss;

	if ( (package.getType() != TOK_PACKAGE && package.getType() != TOK_NULL) ||
	     (type.getType() != TOK_CLASS && type.getType() != TOK_INTERFACE) )
	     return "";

	ss << prefix << "__";
	if (package.getType() != TOK_NULL)
		ss << getName(package[0]) << '_';
	ss << getName(type[2]);

	return ss.str();
}


/*public static String genericName( String ...names )
{
	StringBuilder sb = new StringBuilder();
	sb.append("__");
	// append all names
	for (int c = 0; c < names.length; ++c)
	{
		appendName(sb, names[c]);
		if (c < names.length - 1) sb.append("_");
	}
	return sb.toString();
}*/



bool CodeGenerator::hasModifier(
    Node &node,
    int modifier )
{
    if (node.getType() != TOK_MODIFIERS) return false;

    for (int i = 0; i < node.getChildCount(); ++i)
        if (node[i].getType() == modifier) return true;

    return false;
}


std::string CodeGenerator::getNativeType(
    Node &type )
{
    if (type.getType() == TOK_TYPE_CLASS)
        return "field_dynamic__" + getName(type[0]) + "*";
    else
    {
        switch (type.getType())
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
        }
    }
}


void CodeGenerator::printClassStructures(
	Node &package,
	Node &type )
{
	if ( (package.getType() != TOK_PACKAGE && package.getType() != TOK_NULL) ||
	     (type.getType() != TOK_CLASS && type.getType() != TOK_INTERFACE) )
	     return;

	printer.comment("Object structures for " + (std::string)type[2]);

	// create the structure to hold the dynamic fields
	std::stringstream ss;
	appendName(ss, "fields");
	appendName(ss, "static");
	appendName(ss, getName(package));
	appendName(ss, getName(type));

	structPrinter.open( getStructName("fields_dynamic", package, type ) );
    for (int i = 0; i < type[5].getChildCount(); ++i)
    {
        Node &member = type[5][i];
        if (member.getType() == TOK_FIELD && !hasModifier(member[1], TOK_STATIC))
        {
            std::string memberType = getNativeType(member[2]);

            // iterate the variable list
            for (int v = 0; v < member[3].getChildCount(); ++v)
            {
                Node &variable = member[3][v];
                structPrinter.addPrimitive(0, memberType, variable[0].getText());
            }
        }
    }
    /*if (n.dynamicFields.size() > 0)
	{
		comment.comment("dynamic fields");
		for (FieldDeclaration entry : n.dynamicFields)
		{
			struct.addPrimitive(0, getNativeTypeName(entry.type), entry.name);
		}
	}*/
	structPrinter.close();

	// create the structure to hold the static fields
	structPrinter.open( getStructName( "fields_static", package, type ) );
	/*if (n.dynamicFields.size() > 0)
	{
		comment.comment("static fields");
		for (FieldDeclaration entry : n.staticFields)
		{
			struct.addPrimitive(0, getNativeTypeName(entry.type), entry.name);
		}
	}*/
	structPrinter.close();
}



std::stringstream &CodeGenerator::getStream()
{
    return printer.getStream();
}


void CodeGenerator::visitCompulationUnit(
	Node &node )
{
    printer.getStream() << "#include <stdint.h>" << std::endl;
	printer.getStream() << "#include <stdio.h>" << std::endl << std::endl;

    printer.comment("This file is auto-generated! Do not edit!\n"
        "This program is distributed in the hope that it will be useful,"
        "but WITHOUT ANY WARRANTY; without even the implied warranty of"
        "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.");

    printCommomTypeStructures();

    // visit the available type declaration
    visitTypeDeclaration(node[2]);

    printer.comment("Module class list");
/*
    // create the variable containing the list of classes in the library
    varPrinter.open(CONST | ARRAY, classStructName, true, "class_list");
    for (TypeDeclaration entry : n.definitions)
    {
        varPrinter.openBlock();
        varPrinter.addValue(entry.packageName + '.' + entry.name);
        varPrinter.addValue( NameGenerator.variableName(entry.packageName, entry.name, "_type") );
        varPrinter.closeBlock();
    }
    varPrinter.close();

    comment.section("Module meta-information symbol");

    // create the library meta-information variable
    varPrinter.open(CONST | ARRAY | PUBLIC, moduleStructName, true, "module_metainfo");
    varPrinter.addValue(n.definitions.size());
    varPrinter.addPlain("types_metainfo");
    varPrinter.close();*/
}


void CodeGenerator::visitPackageDeclaration(
	Node &node )
{

}


void CodeGenerator::visitTypeDeclaration(
	Node &node )
{
    Node &package = getRoot()[0];
	printClassStructures(package, node);
}


void CodeGenerator::visitAnnotationDeclaration(
	Node &parent,
    Node &node )
{

}


} // namespace beagle

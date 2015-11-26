#include <beagle-parser/CodeGenerator.hh>
#include <beagle-parser/CodePrinter.hh>
#include <iostream>


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


void CodeGenerator::visitImportDeclaration(
	Node &node )
{

}


void CodeGenerator::visitClassDeclaration(
	Node &node )
{
	printer.writeName("__class_", node.getChild(2), "");
}


void CodeGenerator::visitAnnotationDeclaration(
	Node &parent,
    Node &node )
{

}


} // namespace beagle

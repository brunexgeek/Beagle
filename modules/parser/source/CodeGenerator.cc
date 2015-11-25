#include <beagle-parser/CodeGenerator.hh>
#include <iostream>


namespace beagle {


void CodeGenerator::visitCompulationUnit(
	Node &node )
{

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
	//std::cout << node.getText() << std::endl;
	node.print(std::cout);
}


void CodeGenerator::visitAnnotationDeclaration(
	Node &target,
	Node &annotation )
{

}


} // namespace beagle

#include "TreeVisitor.hh"
#include <cassert>


namespace beagle {
namespace compiler {


void TreeVisitor::visit(
	Node &root )
{
	assert(&root != 0);
	this->root = &root;
	visitCompulationUnit(root);
	this->root = NULL;
}


void TreeVisitor::visitCompulationUnit(
	Node &node )
{
	assert(node.getChildCount() == 3);

	visitPackage(node[0]);
	visitImportList(node[1]);
	visitType(node[2]);
}

void TreeVisitor::visitPackage(
	Node &package )
{
	// nothing to do
}


void TreeVisitor::visitImportList(
	Node &imports )
{
	for (int i = 0, n = imports.getChildCount(); i < n; ++i)
		visitImport(imports[i]);
}


void TreeVisitor::visitImport(
	Node &import )
{
	// nothing to do
}


void TreeVisitor::visitType(
	Node &type )
{
	assert(type.type == NID_CLASS ||
		type.type == NID_INTERFACE);

	Node &body = type[5];
	assert(body.type == NID_BODY);

	for (int i = 0, n = body.getChildCount(); i < n; ++i)
	{
		Node &member = body[i];

		assert(member.type == NID_METHOD ||
			member.type == NID_CONSTRUCTOR ||
			member.type == NID_FIELD);

		switch (member.type)
		{
			case NID_FIELD:
				visitField(type, member);
				break;
			case NID_METHOD:
				visitMethod(type, member);
				break;
			case NID_CONSTRUCTOR:
				visitConstructor(type, member);
				break;
		}
	}
}


void TreeVisitor::visitField(
	Node &type,
	Node &field )
{
	// nothing to do
}


void TreeVisitor::visitConstructor(
	Node &type,
	Node &method )
{
	visitAnnotationList(method, method[0]);
	visitParameterList(method, method[3]);
	visitMethodBody(method, method[5]);
}


void TreeVisitor::visitMethod(
	Node &type,
	Node &method )
{
	visitAnnotationList(method, method[0]);
	visitParameterList(method, method[4]);
	visitMethodBody(method, method[6]);
}


void TreeVisitor::visitParameterList(
	Node &method,
	Node &params )
{
	assert(params.type == NID_PARAMETERS ||
		params.type == NID_NULL);

	for (int i = 0, n = params.getChildCount(); i < n; ++i)
	{
		Node &param = params[i];
		visitParameter(method, param);
	}
}


void TreeVisitor::visitParameter(
	Node &method,
	Node &parameter )
{
	// nothing to do
}


void TreeVisitor::visitMethodBody(
	Node &method,
	Node &body )
{
	assert((method.type == NID_METHOD ||
		method.type == NID_CONSTRUCTOR) &&
		body.type == NID_BLOCK);

	for (int i = 0, n = body.getChildCount(); i < n; ++i)
	{
		Node &stmt = body[i];

		switch (stmt.type)
		{
			case NID_LOCAL:
				visitLocalVariable(stmt);
				break;
		}

	}
}


void TreeVisitor::visitAnnotationList(
	Node &parent,
	Node &annots )
{
	assert(annots.type == NID_ANNOTATIONS ||
		annots.type == NID_NULL);

	// iterate the annotations
	for (int i = 0, n = annots.getChildCount(); i < n; ++i)
		visitAnnotation(parent, annots[i]);
}


void TreeVisitor::visitAnnotation(
	Node &parent,
	Node &annot )
{
	// nothing to do
}


void TreeVisitor::visitLocalVariable(
	Node &variable )
{
	// nothing to do
}



} // namespace compiler
} // namespace beagle

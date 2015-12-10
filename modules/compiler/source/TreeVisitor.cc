#include "TreeVisitor.hh"
#include <cassert>
#include "beagle.y.hh"


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
    assert(type.type == TOK_CLASS ||
        type.type == TOK_INTERFACE);

    Node &body = type[5];
    assert(body.type == TOK_BODY);

    for (int i = 0, n = body.getChildCount(); i < n; ++i)
    {
        Node &member = body[i];

        assert(member.type == TOK_METHOD ||
            member.type == TOK_CONSTRUCTOR ||
            member.type == TOK_FIELD);

        if (member.type == TOK_FIELD)
            visitField(type, member);
        else
            visitMethod(type, member);
    }
}


void TreeVisitor::visitField(
    Node &type,
    Node &field )
{
    // nothing to do
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
    assert(params.type == TOK_PARAMETERS);

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
    assert((method.type == TOK_METHOD ||
        method.type == TOK_CONSTRUCTOR) &&
        body.type == TOK_BLOCK);

    for (int i = 0, n = body.getChildCount(); i < n; ++i)
    {
        Node &stmt = body[i];

        switch (stmt.type)
        {
            case TOK_LOCAL:
                visitLocalVariable(stmt);
                break;
        }

    }
}


void TreeVisitor::visitAnnotationList(
    Node &parent,
    Node &annots )
{
    assert(annots.type == TOK_ANNOTATIONS ||
        annots.type == TOK_NULL);

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

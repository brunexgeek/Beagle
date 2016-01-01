#ifndef BEAGLE_TREEVISITOR_HH
#define BEAGLE_TREEVISITOR_HH


#include <beagle-loader/Node.hh>
#include <cassert>

namespace beagle {
namespace compiler {


using namespace beagle::loader;


class TreeVisitor
{
	public:
		TreeVisitor()
		{
			// nothing to do
		}

		virtual ~TreeVisitor()
		{
			// nothing to do
		}

        void visit(
            Node &root );

    protected:
        Node *root;

		virtual void visitCompulationUnit(
			Node &node );

        virtual void visitPackage(
			Node &package );

		virtual void visitImportList(
			Node &imports );

		virtual void visitImport(
			Node &import );

		virtual void visitType(
			Node &type );

        virtual void visitField(
            Node &type,
            Node &field );

        virtual void visitMethod(
            Node &type,
            Node &method );

        virtual void visitParameterList(
            Node &method,
            Node &params );

        virtual void visitParameter(
            Node &method,
            Node &parameter );

        virtual void visitMethodBody(
            Node &method,
            Node &body );

        virtual void visitAnnotationList(
			Node &parent,
			Node &annots );

		virtual void visitAnnotation(
			Node &parent,
			Node &annot );

        virtual void visitLocalVariable(
            Node &variable );
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_TREEVISITOR_HH

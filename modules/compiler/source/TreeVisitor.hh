#ifndef BEAGLE_TREEVISITOR_HH
#define BEAGLE_TREEVISITOR_HH


#include <beagle-compiler/Node.hh>
#include <cassert>

namespace beagle {
namespace compiler {


template <typename T>
class TreeVisitor
{
	public:
		TreeVisitor(
            T &context )
		{
			// nothing to do
		}

		virtual ~TreeVisitor()
		{
			// nothing to do
		}

        T &getContext()
        {
            return context;
        }

        void visit(
            Node &root )
        {
            assert(&root != 0);
            this->root = &root;
            visitCompulationUnit(root);
            this->root = NULL;
        }

    protected:
        Node *root;
        T context;

		virtual void visitCompulationUnit(
			Node &node ) = 0;

		virtual void visitPackageDeclaration(
			Node &node ) = 0;

		virtual void visitTypeDeclaration(
			Node &node ) = 0;

        virtual void visitMethod(
            Node &parent,
            Node &method ) = 0;

        virtual void visitParameterList(
            Node &parent,
            Node &params ) = 0;

        virtual void visitParameter(
            Node &parent,
            Node &parameter ) = 0;

        virtual void visitMethodBody(
            Node &method,
            Node &body ) = 0;

		virtual void visitAnnotationDeclaration(
			Node &parent,
			Node &node ) = 0;

        virtual void visitLocalVariableDeclaration(
            Node &variable ) = 0;
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_TREEVISITOR_HH

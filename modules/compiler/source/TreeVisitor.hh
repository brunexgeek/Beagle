#ifndef BEAGLE_TREEVISITOR_HH
#define BEAGLE_TREEVISITOR_HH


#include <beagle-compiler/Node.hh>


namespace beagle {
namespace compiler {


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

        Node *getRoot()
        {
            return root;
        }

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

    protected:
        Node *root;
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_TREEVISITOR_HH

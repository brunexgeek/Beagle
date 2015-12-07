#ifndef BEAGLE_TREEVISITOR_HH
#define BEAGLE_TREEVISITOR_HH


#include <beagle-compiler/Node.hh>


namespace beagle {
namespace compiler {


template<typename T>
class TreeVisitor
{
	public:
		TreeVisitor(
			Node &root,
            T context ) : root(root)
		{
			// nothing to do
		}

		virtual ~TreeVisitor()
		{
			// nothing to do
		}

        T getContext()
        {
            return context;
        }

        Node &getRoot() const
        {
            return root;
        }

		void visit()
		{
			visitCompulationUnit(root);
			/*visitPackageDeclaration( root.getChild(0) );
			visitImportDeclaration( root.getChild(1) );

			// visit declared class or interface
			Node &clazz = root.getChild(2);
			visitClassDeclaration(clazz);

			// iterate the class annotation list
			Node &clazzAnnot = clazz.getChild(0);
			for (int i = 0; i < clazzAnnot.getChildCount(); ++i)
				visitAnnotationDeclaration(clazz, clazzAnnot.getChild(i));*/
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

	private:
		Node &root;
        T context;
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_TREEVISITOR_HH
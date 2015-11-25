#ifndef BEAGLE_TREEVISITOR_HH
#define BEAGLE_TREEVISITOR_HH


#include <beagle-parser/Node.hh>


namespace beagle {


class TreeVisitor
{
	public:
		TreeVisitor(
			Node &root ) : root(root)
		{
			// nothing to do
		}

		virtual ~TreeVisitor()
		{
			// nothing to do
		}

		void visit()
		{
			visitCompulationUnit(root);
			visitPackageDeclaration( root.getChild(0) );
			visitImportDeclaration( root.getChild(1) );

			// visit declared class or interface
			Node &clazz = root.getChild(2);
			visitClassDeclaration(clazz);

			// iterate the class annotation list
			Node &clazzAnnot = clazz.getChild(0);
			for (int i = 0; i < clazzAnnot.getChildCount(); ++i)
				visitAnnotationDeclaration(clazz, clazzAnnot.getChild(i));
		}

		virtual void visitCompulationUnit(
			Node &node ) = 0;

		virtual void visitPackageDeclaration(
			Node &node ) = 0;

		virtual void visitImportDeclaration(
			Node &node ) = 0;

		virtual void visitClassDeclaration(
			Node &node ) = 0;

		virtual void visitAnnotationDeclaration(
			Node &target,
			Node &annotation ) = 0;

	private:
		Node &root;
};


} // namespace beagle

#endif // BEAGLE_TREEVISITOR_HH

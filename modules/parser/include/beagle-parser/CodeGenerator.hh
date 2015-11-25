#ifndef BEAGLE_CODEGENERATOR_HH
#define BEAGLE_CODEGENERATOR_HH


#include <beagle-parser/TreeVisitor.hh>


namespace beagle {


class CodeGenerator : public TreeVisitor
{
	public:
		CodeGenerator(
			Node &root ) : TreeVisitor(root)
		{
			// nothing to do
		}

		~CodeGenerator()
		{
			// nothing to do
		}

		void visitCompulationUnit(
			Node &node );

		void visitPackageDeclaration(
			Node &node );

		void visitImportDeclaration(
			Node &node );

		void visitClassDeclaration(
			Node &node );

		void visitAnnotationDeclaration(
			Node &target,
			Node &annotation );
};


} // namespace beagle

#endif // BEAGLE_CODEGENERATOR_HH

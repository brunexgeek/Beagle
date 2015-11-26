#ifndef BEAGLE_CODEGENERATOR_HH
#define BEAGLE_CODEGENERATOR_HH


#include <beagle-parser/TreeVisitor.hh>
#include <beagle-parser/CodePrinter.hh>
#include <beagle-parser/StructPrinter.hh>


namespace beagle {


class CodeGenerator : public TreeVisitor<int>
{
	public:
		CodeGenerator(
			Node &root,
            int context );

		virtual ~CodeGenerator();

        std::stringstream &getStream();

		void visitCompulationUnit(
			Node &node );

		void visitPackageDeclaration(
			Node &node );

		void visitImportDeclaration(
			Node &node );

		void visitClassDeclaration(
			Node &node );

		void visitAnnotationDeclaration(
			Node &parent,
			Node &node );

    private:
        CodePrinter printer;
        StructPrinter structPrinter;

        void printCommomTypeStructures();
};


} // namespace beagle

#endif // BEAGLE_CODEGENERATOR_HH

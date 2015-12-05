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

		void visitTypeDeclaration(
			Node &node );

		void visitAnnotationDeclaration(
			Node &parent,
			Node &node );

    private:
        CodePrinter printer;
        StructPrinter structPrinter;

        void printCommomTypeStructures();

        void printClassStructures(
			Node &node );

		void appendName(
			std::stringstream &ss,
			const std::string &name );

		std::string createName(
			int count,
			const std::string &... );

		void getName(
			std::stringstream &ss,
			Node &ident );

		std::string getName(
			Node &ident );

		std::string getMethodName(
			Node &package,
			Node &type,
			Node &method );

		std::string getStructName(
			const std::string &prefix,
			Node &package,
			Node &type );

		void printClassStructures(
			Node &package,
			Node &type );

        bool hasModifier(
            Node &node,
            int modifier );

        std::string getNativeType(
            Node &type );
};


} // namespace beagle

#endif // BEAGLE_CODEGENERATOR_HH

#ifndef BEAGLE_CODEGENERATOR_HH
#define BEAGLE_CODEGENERATOR_HH


#include <stdint.h>
#include "TreeVisitor.hh"
#include "CodePrinter.hh"
#include "StructPrinter.hh"
#include "GuardPrinter.hh"
#include "VariablePrinter.hh"
#include <map>

namespace beagle {
namespace compiler {


class CompilationUnit;


class CodeGenerator : public TreeVisitor
{
	public:
        static const std::string CLASS_ENTRY;
        static const std::string MODULE_METAINFO;
        static const std::string TYPE_METAINFO;
        static const std::string FIELD_METAINFO;
        static const std::string METHOD_METAINFO;

		CodeGenerator();

		virtual ~CodeGenerator();

        std::stringstream &getStream();

        CodePrinter &getCodePrinter();

        void reset();

        void writeHeader();

        void writeFooter(
            std::map<std::string, CompilationUnit> &units );

		void visitCompulationUnit(
			Node &node );

		void visitPackageDeclaration(
			Node &node );

		void visitImportDeclaration(
			Node &node );

		void visitTypeDeclaration(
			Node &node );

        void visitMethod(
            Node &parent,
            Node &method );

		void visitAnnotationDeclaration(
			Node &parent,
			Node &node );

        void visitParameterList(
            Node &parent,
            Node &params );

        void visitParameter(
            Node &parent,
            Node &parameter );

        void visitMethodBody(
            Node &method,
            Node &body );

    private:
        CodePrinter printer;
        GuardPrinter guard;
        VariablePrinter variable;
        StructPrinter structure;
        std::ostream &out;

        void printClassStructures(
			Node &node );

		void appendName(
			std::stringstream &ss,
			const std::string &name );

		void getNativeName(
			std::stringstream &ss,
			Node &ident );

		std::string getNativeName(
			Node &ident );

		std::string getMethodNativeName(
			Node &package,
			Node &type,
			Node &method );

        std::string getTypeName(
            Node &package,
            Node &type );

		std::string getNativeTypeName(
			const std::string &prefix,
			Node &package,
			Node &type,
            char separator = '_');

		void printClassStructures(
			Node &package,
			Node &type );

        bool hasModifier(
            Node &node,
            int modifier );

        std::string getNativeType(
            Node &type );

        std::string getPrototypeType(
            Node &type );

        std::string getPrototype(
            Node &method );

        uint32_t getNativeModifiers(
            Node &modifiers );
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_CODEGENERATOR_HH

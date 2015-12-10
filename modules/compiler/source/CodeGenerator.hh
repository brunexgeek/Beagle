#ifndef BEAGLE_CODEGENERATOR_HH
#define BEAGLE_CODEGENERATOR_HH


#include <stdint.h>
#include "TreeVisitor.hh"
#include "CodePrinter.hh"
#include "StructPrinter.hh"
#include "GuardPrinter.hh"
#include "VariablePrinter.hh"
#include "NameGenerator.hh"
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

		CodeGenerator(
            NameGenerator &context );

		virtual ~CodeGenerator();

        std::stringstream &getStream();

        CodePrinter &getCodePrinter();

        void reset();

        void writeHeader();

        void writeFooter(
            std::map<std::string, CompilationUnit> &units );

    protected:

		void visitCompulationUnit(
			Node &node );

		void visitType(
			Node &node );

        void visitImports(
            Node &imports );

        void visitField(
            Node &type,
            Node &field );

        void visitMethod(
            Node &parent,
            Node &method );

		void visitAnnotation(
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

        void visitLocalVariable(
            Node &variable );

    private:
        NameGenerator &context;
        CodePrinter printer;
        GuardPrinter guard;
        VariablePrinter variable;
        StructPrinter structure;
        std::ostream &out;


        //std::string dynamicFields;
        //std::string staticFields;

        void printClassStructures(
			Node &node );

		void printClassStructures(
			Node &package,
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

#ifndef BEAGLE_COMPILER_HH
#define BEAGLE_COMPILER_HH


#include <beagle-loader/Node.hh>
#include <beagle-compiler/SymbolTable.hh>
#include <beagle-loader/ModuleLoader.hh>
#include <map>
#include <stdint.h>
#include <string>


namespace beagle {
namespace compiler {


using namespace std;
using namespace beagle::loader;


class CompilerListener
{
    public:
        CompilerListener();
        virtual ~CompilerListener();

        virtual bool onError(
            const std::string &fileName,
            uint32_t line,
            uint32_t column,
            const std::string &message ) const = 0;
};


class CompilationUnit
{
    public:
        Node *root;
        SymbolTable *imports;
        std::string fileName;

        CompilationUnit() : root(NULL), imports(NULL)
        {
            // nothing to do
        }

        virtual ~CompilationUnit()
        {
            // nothing to do
        }
};


class Compiler
{
    public:
        Compiler(
            const CompilerListener &listener );
        ~Compiler();

        bool addCompilationUnit(
            const string &fileName );

        bool compile();

        Node *getTree(
            const string &fileName );

        Node *getTree(
            size_t index );

        static const char *getTokenName(
            int tok );

        const std::string &getCode() const;

        const CompilerListener &getListener() const;

        void import(
			const ModuleLoader &loader );

    protected:
        map<string, CompilationUnit> units;
        SymbolTable symbols;
        std::string code;
        const CompilerListener &listener;

        bool resolveTypes();

        bool resolveTypes(
            const std::string &fileName,
            Node &root,
            SymbolTable &imports );

        bool parse();

        bool generateCode();

        void expandTypeName(
            Node &package,
            Node &type );

		void import(
			const Module &module );

		static Node *makeTree(
			const Type &type );
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_COMPILER_HH

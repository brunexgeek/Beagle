#ifndef BEAGLE_COMPILER_HH
#define BEAGLE_COMPILER_HH


#include <beagle-compiler/Node.hh>
#include <beagle-compiler/SymbolTable.hh>
#include <map>
#include <string>


namespace beagle {
namespace compiler {


using namespace std;


class CompilationUnit
{
    public:
        Node *root;
        SymbolTable *imports;

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
        Compiler();
        ~Compiler();

        bool addCompilationUnit(
            const string &fileName );

        std::string compile();

        Node *getTree(
            const string &fileName );

        Node *getTree(
            size_t index );

        static const char *getTokenName(
            int tok );

    protected:
        map<string, CompilationUnit> units;
        SymbolTable symbols;

        void resolveTypes();

        void resolveTypes(
            Node &root,
            SymbolTable &imports );

        void parse();
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_COMPILER_HH

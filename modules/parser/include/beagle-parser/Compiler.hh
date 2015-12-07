#ifndef BEAGLE_COMPILER_HH
#define BEAGLE_COMPILER_HH


#include <beagle-parser/Node.hh>
#include <beagle-parser/SymbolTable.hh>
#include <map>
#include <string>


namespace beagle {
namespace compiler {


using namespace std;


class Compiler
{
    public:
        Compiler();
        ~Compiler();

        bool addCompilationUnit(
            const string &fileName );

        void compile();

        void parse();

        Node *getTree(
            const string &fileName );

        Node *getTree(
            size_t index );

        static const char *getTokenName(
            int tok );

    protected:
        map<string, Node*> units;
        SymbolTable symbols;

        void resolveTypes();

        void resolveTypes(
            Node &root );

};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_COMPILER_HH

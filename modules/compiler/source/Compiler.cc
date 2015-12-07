#include <beagle-compiler/Compiler.hh>
#include <beagle-compiler/Parser.hh>
#include <fstream>
#include "beagle.y.hh"
#include <cstdlib>
#include <linux/limits.h>


/**
 * @brief Returns the token name given it constant.
 *
 * This function is defined in the Bison generated parser.
 */
const char *beagle_getTokenName( int tok );


namespace beagle {
namespace compiler {


Compiler::Compiler()
{
    // nothing to do
}


Compiler::~Compiler()
{
    // nothing to do
}


bool Compiler::addCompilationUnit(
    const string &fileName )
{
    char path[PATH_MAX+1];

    if (realpath(fileName.c_str(), path) == NULL) return false;

    map<string, CompilationUnit>::iterator it = units.find(path);
    if (it == units.end())
        units.insert( std::pair<string,CompilationUnit>(path, CompilationUnit()) );

    return true;
}


void Compiler::compile()
{
    parse();
    resolveTypes();
}


void Compiler::parse()
{
    Parser parser;

    map<string, CompilationUnit>::iterator it = units.begin();
    for (; it != units.end(); ++it)
    {
        // parse the current file
        ifstream in((*it).first.c_str());
        (*it).second.root = parser.process(in, (*it).first);

        if ((*it).second.root != NULL)
        {
            // extract import names
            SymbolTable *imports = new SymbolTable();
            imports->extractImports( *(*it).second.root );
            (*it).second.imports = imports;
            // add the new unit as recognized type
            symbols.addType( *(*it).second.root );
       }
    }
}


Node *Compiler::getTree(
    const string &fileName )
{
    map<string, CompilationUnit>::iterator it = units.find(fileName);
    if (it == units.end()) return NULL;
    return (*it).second.root;
}


Node *Compiler::getTree(
    size_t index )
{
    if (index >= units.size()) return NULL;
    map<string, CompilationUnit>::iterator it = units.begin();
    while (index-- > 0) ++it;
    return (*it).second.root;
}


void Compiler::resolveTypes()
{
    // iterate the compilation unit list resolving imports
    map<string, CompilationUnit>::iterator it = units.begin();
    for (; it != units.end(); ++it)
    {
        if ((*it).second.root == NULL) continue;
        (*it).second.imports->resolveImports(symbols);
    }

    // iterate the compilation unit list resolving type references
    it = units.begin();
    for (; it != units.end(); ++it)
    {
        if ((*it).second.root == NULL) continue;
        resolveTypes(*(*it).second.root, *(*it).second.imports);
    }
}


void Compiler::resolveTypes(
    Node &root,
    SymbolTable &imports )
{
    const string *resolved = NULL;

    // iterate the children recursively resolving types
    for (int i = 0, n = root.getChildCount(); i < n; ++i)
    {
        Node &item = root[i];

        switch (item.type)
        {
            case TOK_TYPE_CLASS:
                if (item[0].type == TOK_NAME)
                {
                    resolved = imports.resolveType(item[0].text);
                    // TODO: possible memory leak!
                    if (resolved != NULL) item[0].text = resolved->c_str();
                }
                break;
            default:
                if (item.getChildCount() > 0) resolveTypes(item, imports);
        }
    }
}


const char *Compiler::getTokenName(
    int tok )
{
	return beagle_getTokenName(tok);
}


} // namespace compiler
} // namespace beagle

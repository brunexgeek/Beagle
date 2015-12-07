#include <beagle-parser/Compiler.hh>
#include <beagle-parser/Parser.hh>
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

    map<string, Node*>::iterator it = units.find(path);
    if (it == units.end())
        units.insert( std::pair<string,Node*>(path, NULL) );

    return true;
}


void Compiler::compile()
{
    parse();
}


void Compiler::parse()
{
    Parser parser;

    map<string, Node*>::iterator it = units.begin();
    for (; it != units.end(); ++it)
    {
        // parse the current file
        ifstream in((*it).first.c_str());
        (*it).second = parser.process(in, (*it).first);
        // add the new unit as recognized type
        if ((*it).second != NULL)
            symbols.addType(*(*it).second);
    }
}


Node *Compiler::getTree(
    const string &fileName )
{
    map<string, Node*>::iterator it = units.find(fileName);
    if (it == units.end()) return NULL;
    return (*it).second;
}


Node *Compiler::getTree(
    size_t index )
{
    if (index > units.size()) return NULL;
    map<string, Node*>::iterator it = units.begin();
    while (index-- > 0) ++it;
    return (*it).second;
}


void Compiler::resolveTypes()
{
    map<string, Node*>::iterator it = units.begin();
    for (; it != units.end(); ++it)
    {
        if ((*it).second == NULL) continue;
        resolveTypes(*(*it).second);
    }
}


void Compiler::resolveTypes(
    Node &root )
{
    const string *resolved = NULL;

    for (int i = 0, n = root.getChildCount(); i < n; ++i)
    {
        Node &item = root[i];

        switch (item.type)
        {
            case TOK_TYPE_CLASS:
                resolved = symbols.resolveType(item[0].text);
                // TODO: possible memory leak!
                if (resolved != NULL) item.text = resolved->c_str();
                break;
            case TOK_NAME:
                break;
            default:
                resolveTypes(item);
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

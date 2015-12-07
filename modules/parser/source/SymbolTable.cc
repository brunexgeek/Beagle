#include <beagle-parser/SymbolTable.hh>
#include "beagle.y.hh"


namespace beagle {
namespace compiler {


using namespace std;


SymbolTable::SymbolTable()
{
    // nothing to do
}


SymbolTable::~SymbolTable()
{
    // nothing to do
}


const string *SymbolTable::resolveType(
    const string &name ) const
{
    size_t found;

    set<string*>::const_iterator it = typeNames.begin();
    for (; it != typeNames.end(); ++it)
    {
        string &current = *(*it);
        found = current.rfind(name);
        if (found != string::npos && found > 0)
        {
            cout << name << " is from " << current << "?\n" ;
            // check if we have a full match
            if (found + name.length() == current.length()) return &current;
            // check if we have a dot before the name
            if (found > 0 && current.at(found-1) == '.') return &current;
        }
    }

    return NULL;
}


void SymbolTable::addType(
    const string &name )
{
    typeNames.insert( new string(name) );
}


void SymbolTable::addType(
    const Node &unit )
{
    if (unit.type != TOK_UNIT || ( unit[2].type != TOK_CLASS &&
        unit[2].type != TOK_INTERFACE) )
        return;

    string *name = new string(unit[0].text);
    (*name) += '.';
    (*name) += unit[2][2].text;
    typeNames.insert(name);
}


} // namespace compiler
} // namespace beagle

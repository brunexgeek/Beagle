#include <beagle-compiler/SymbolTable.hh>
#include <algorithm>
#include <cassert>


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


static bool less_reverse_string_pointer(
    const string& lhs,
    const string& rhs)
{
    int len1 = (int) lhs.length();
    int len2 = (int) rhs.length();

    for (int i = len1 - 1, j = len2 - 1; i > 0 && j > 0; --i, --j)
        if ( lhs.at(i) >= rhs.at(j) ) return false;

    return len1 < len2;
}


const string *SymbolTable::resolveType(
    const string &name ) const
{
std::cout << "resolveType: looking for '" << name << "'\n";
    set<string>::iterator low, rcur, end;
    low = typeNames.begin();
    end = typeNames.end();
    while (true)
    {
        rcur = lower_bound(low, end, name, less_reverse_string_pointer);
        // check if we have a valid match
        if (rcur == end) break;
        if ((*rcur).compare((*rcur).length() - name.length(), name.length(), name) != 0) break;
std::cout << "resolveType: found '" << (*rcur) << "'\n";
        return &(*rcur);
    }

    /*set<string*>::const_iterator it = typeNames.begin();
    for (; it != typeNames.end(); ++it)
    {
        string &current = *(*it);
        found = current.rfind(name);
        if (found != string::npos && found > 0)
        {
            //cout << name << " is from " << current << "?\n" ;
            // check if we have a full match
            if (found + name.length() == current.length()) return &current;
            // check if we have a dot before the name
            if (found > 0 && current.at(found-1) == '.') return &current;
        }
    }*/

    return NULL;
}


void SymbolTable::addType(
    const string &name )
{
    typeNames.insert(name);
}


void SymbolTable::extractImports(
    const Node &unit )
{
    if (unit.type != NID_UNIT || unit[1].type != NID_IMPORTS)
        return;

    for (int i = 0, n = unit[1].getChildCount(); i < n; ++i)
    {
        if (unit[1][i].type == NID_IMPORT_ALL)
            addType(unit[1][i][0].text + ".*");
        else
            addType(unit[1][i][0].text);
    }
}


void SymbolTable::addType(
    const Node &unit )
{
    assert(unit.type == NID_UNIT && ( unit[2].type == NID_CLASS ||
        unit[2].type == NID_INTERFACE) );

    // check if the type name is already fully qualified
    if (unit[2][2].text.find('.') != string::npos)
        typeNames.insert(unit[2][2].text);
    else
    {
        string name = unit[0].text;
        name += '.';
        name += unit[2][2].text;
        typeNames.insert(name);
    }
}


static bool less_string_pointer(
    const string& lhs,
    const string& rhs)
{
    return (lhs < rhs);
}


/**
 * Find any unresolved symbol in the current object and resolve them
 * copying resolved symbols from the given table.
 */
void SymbolTable::resolveImports(
    const SymbolTable &obj )
{
    set<string>::iterator lcur = typeNames.begin();
    set<string>::iterator lend = typeNames.end();
    for (; lcur != lend; ++lcur)
    {
        string current = (*lcur);
        size_t currentLen = current.length();

        // check if it's an unresolved symbol
        if (current.at(currentLen -1) != '*') continue;

        current.erase(--currentLen, 1);

std::cout << "resolveImports: looking for types from '" << current << "'" << std::endl;

        // look for the current prefix in the external table
        set<string>::iterator low, rcur, end;
        low = obj.typeNames.begin();
        end = obj.typeNames.end();
        while (true)
        {
            rcur = lower_bound(low, end, current, less_string_pointer);
            // check if we found a valid match
            if (rcur == end) break;
            if ((*rcur).compare(0, current.length(), current) != 0) break;
            typeNames.insert((*rcur));
            // adjust the range for the next search
            low = rcur;
            ++low;
std::cout << "resolveImports:  found '" << (*rcur) << "'\n";
        }
    }

    /*set<string*>::iterator lcur = typeNames.begin();
    set<string*>::iterator lend = typeNames.end();
    for (; lcur != lend; ++lcur)
    {
        string &current = *(*lcur);
        size_t currentLen = current.length();

        // check if it's an unresolved symbol
        if (current.at(currentLen -1) != '*') continue;

        std::cout << "Looking for types from " << current << std::endl;

        // look for the current prefix in the external table
        set<string*>::const_iterator rcur = obj.typeNames.begin();
        set<string*>::const_iterator rend = obj.typeNames.end();
        for (; rcur != rend; ++rcur)
        {
            string &item = *(*rcur);
            size_t pos = item.find(current.c_str(), 0, currentLen-1);
            // check if we found a match
            if (pos == string::npos) continue;
            typeNames.insert(&item);
            std::cout << "   Found " << item << std::endl;
        }

        // remote the unresolved symbol
        delete *lcur;
        typeNames.erase(lcur);
    }*/
}


} // namespace compiler
} // namespace beagle

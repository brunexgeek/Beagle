#ifndef BEAGLE_SYMBOLTABLE_HH
#define BEAGLE_SYMBOLTABLE_HH


#include <set>
#include <string>
#include <beagle-parser/Node.hh>

namespace beagle {
namespace compiler {


class SymbolTable
{
	public:
		SymbolTable();

		virtual ~SymbolTable();

        const std::string *resolveType(
            const std::string &name ) const;

        void addType(
            const std::string &name );

        void addType(
            const Node &unit );

	private:
		std::set<std::string*> typeNames;
};


} // namespace compiler
} // namespace beagle

#endif // BEAGLE_SYMBOLTABLE_HH

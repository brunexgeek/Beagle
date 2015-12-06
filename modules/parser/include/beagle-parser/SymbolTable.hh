#ifndef BEAGLE_SYMBOLTABLE_HH
#define BEAGLE_SYMBOLTABLE_HH


#include <set>

namespace beagle {


class SymbolTable
{
	public:
		SymbolTable()
		{
			// nothing to do
		}

		virtual ~SymbolTable()
		{
			// nothing to do
		}

        const std::string *resolveType(
            const std::string &name ) const
        {
            std::size_t found;

            std::set<std::string*>::const_iterator it = typeNames.begin();
            for (; it != typeNames.end(); ++it)
            {
                std::string &current = *(*it);
                found = current.rfind(name);
                if (found != std::string::npos && found > 0)
                {
                    std::cout << name << " is from " << current << "?\n" ;
                    // check if we have a full match
                    if (found + name.length() == current.length()) return &current;
                    // check if we have a dot before the name
                    if (found > 0 && current.at(found-1) == '.') return &current;
                }
            }

            return NULL;
        }

        void addType(
            const std::string &name )
        {
            typeNames.insert( new std::string(name) );
        }

	private:
		std::set<std::string*> typeNames;
};


} // namespace beagle

#endif // BEAGLE_SYMBOLTABLE_HH

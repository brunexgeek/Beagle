#ifndef BEAGLE_MODULELOADER_HH
#define BEAGLE_MODULELOADER_HH


#include <map>
#include <string>
#include <iostream>


namespace beagle {
namespace loader {


class TypeEntry
{
	public:
		const struct __type_metainfo* info;
		std::map<std::string, const struct __field_metainfo*> fields;
		std::map<std::string, const struct __method_metainfo*> methods;
};


class ModuleEntry
{
	public:
		void *library;
		void *module;
		std::string fileName;
		std::map<std::string, TypeEntry*> types;
};


class ModuleLoader
{
    public:
        ModuleLoader();
        ~ModuleLoader();

        ModuleEntry *load(
            const std::string &fileName );

		void print(
			bool friendly = false ) const;

    private:
        std::map<std::string, ModuleEntry*> modules;

		/**
		 * Returns an expanded version of native prototype replacing type characters
		 * by their former Beagle type names.
		 */
		const std::string translatePrototype(
			const std::string &type ) const;
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_MODULELOADER_HH

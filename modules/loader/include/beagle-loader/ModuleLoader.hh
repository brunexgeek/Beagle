#ifndef BEAGLE_MODULELOADER_HH
#define BEAGLE_MODULELOADER_HH


#include <map>
#include <string>
#include <iostream>
#include <stdint.h>
#include <beagle-loader/Node.hh>


namespace beagle {
namespace loader {


struct __field_metainfo
{
    const uint32_t modifiers;
    const char* type;
    const char* name;
};


struct __method_metainfo
{
    const uint32_t modifiers;
    const char* prototype;
    const char* name;
};


struct __type_metainfo
{
    uint32_t signature;
    uint32_t hash;
    const char* canonicalName;
    const char* qualifiedName;
    const char* packageName;
    // fields meta-information
    uint32_t fieldCount;
    const struct __field_metainfo* fields;
    // methods meta-information
    uint32_t methodCount;
    const struct __method_metainfo* methods;
    // amount of memory necessary for static fields
    uint32_t staticSize;
    // amount of memory necessary for dynamic fields (objects)
    uint32_t dynamicSize;
};


struct __module_metainfo
{
    uint32_t signature;
    uint32_t hash;
    /* number of types contained in the module */
    const uint32_t typeCount;
    /* pointer to the type metainformation array */
    const struct __type_metainfo* types;
};


class Type
{
	public:
		Type(
			const struct __type_metainfo* info );

		Type();

		void makeTree();

		const struct __type_metainfo* info;

		Node *root;

		std::map<std::string, const struct __field_metainfo*> fields;

		std::map<std::string, const struct __method_metainfo*> methods;
};


class Module
{
	public:
		void *library;
		void *module;
		std::string fileName;
		std::map<std::string, Type*> types;
};


class ModuleLoader
{
    public:
        ModuleLoader();
        ~ModuleLoader();

        Module *load(
            const std::string &fileName );

		void print(
			bool friendly = false ) const;

        std::map<std::string, Module*> modules;

    private:
		/**
		 * Returns an expanded version of native prototype replacing type characters
		 * by their former Beagle type names.
		 */
		const std::string translatePrototype(
			const std::string &type ) const;

		/**
		 * Convert a Beagle type to it AST representation.
		 */
		Node *prototypeToNode(
			const std::string &type );
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_MODULELOADER_HH

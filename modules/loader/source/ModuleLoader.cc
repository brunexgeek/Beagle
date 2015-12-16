#include <beagle-loader/ModuleLoader.hh>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <dlfcn.h>
#include <linux/limits.h>

namespace beagle {
namespace loader {


using namespace std;


#include "../../compiler/source/header-template.c"


ModuleLoader::ModuleLoader()
{
    // nothing to do
}


ModuleLoader::~ModuleLoader()
{
    // nothing to do
}


ModuleEntry *ModuleLoader::load(
    const std::string &fileName )
{
    void *library;
    ModuleEntry *entry = NULL;
    const struct __module_metainfo *module;
    char path[PATH_MAX];

    // get the absolute path to the module file
    if (realpath(fileName.c_str(), path) == NULL)
        return NULL;

    library = dlopen(path, RTLD_LAZY);
    if (library == NULL) return NULL;

    module = (const struct __module_metainfo *) dlsym(library, "module_metainfo");
    if (module == NULL) goto ESCAPE;

	entry = new ModuleEntry();

    for (uint32_t i = 0; i < module->typeCount; ++i)
    {
		TypeEntry *type = new TypeEntry();
		type->info = module->types[i].info;

		entry->types.insert( pair<string, TypeEntry*>(string(type->info->qualifiedName), type) );

		for (uint32_t j = 0; j < module->types[i].info->fieldCount; ++j)
		{
			const struct __field_metainfo* current = &module->types[i].info->fields[j];
			type->fields.insert( pair<string, const struct __field_metainfo*>(string(current->name), current) );
		}

		for (uint32_t j = 0; j < module->types[i].info->methodCount; ++j)
		{
			const struct __method_metainfo* current = &module->types[i].info->methods[j];
			type->methods.insert( pair<string, const struct __method_metainfo*>(string(current->name), current) );
		}
    }

    // create the new entry
    entry->library = library;
    entry->module = (void*) module;
    entry->fileName = path;
    modules.insert( pair<string, ModuleEntry*>(entry->fileName, entry) );

    return entry;
ESCAPE:
    if (library != NULL) dlclose(library);
    if (entry != NULL) delete entry;

    return NULL;
}


const string ModuleLoader::translatePrototype(
	const string &type ) const
{
	if (type.length() == 0) return "";

	const char *p = type.c_str();
	string out;
	bool params = false;

	while (*p != 0)
	{
		switch (*p)
		{
		    case 'C':
				out +=  "char";
				break;
		    case 'O':
				out +=  "bool";
				break;
		    case '1':
				out +=  "uint8";
				break;
		    case '2':
				out +=  "uint16";
				break;
		    case '4':
				out +=  "uint32";
				break;
		    case '8':
				out +=  "uint64";
				break;
		    case 'B':
				out +=  "int8";
				break;
		    case 'S':
				out +=  "int16";
				break;
		    case 'I':
				out +=  "int32";
				break;
		    case 'L':
				out +=  "int64";
				break;
		    case 'F':
				out +=  "float";
				break;
		    case 'D':
				out +=  "double";
				break;
			case '(':
				params = true;
				out += *p;
				break;
			case ')':
				params = false;
				out += *p;
				break;
			case 'T':
				++p;
				while (*p != 0 && *p != ';')
				{
					out += *p;
					++p;
				}
				break;
		}
		// check if we current we have an array type
		if (*(p+1) == '[')
		{
			++p;
			while (*p == '[')
			{
				out += "[]";
				++p;
			}
			--p;
		}
		// put a comma if we have another parameter type
		if (params && *p != '(' && *p != ')' && *(p+1) != ')')
			out += ',';
		++p;
	}
	return out;
}


void ModuleLoader::print( bool friendly ) const
{
	std::map<std::string, ModuleEntry*>::const_iterator it = modules.begin();
    for (; it != modules.end(); ++it)
    {
        std::cout << "Types from '" << (*it).second->fileName << "':\n";
		std::cout << "\tVisibility  Type\n";

		map<string, TypeEntry*>::const_iterator typeCur = (*it).second->types.begin();
		map<string, TypeEntry*>::const_iterator typeEnd = (*it).second->types.end();
		for (; typeCur != typeEnd; ++typeCur)
		{
			//const char *visibility = "PRIVATE";
			fprintf(stdout, "\t%-10s  %s\n", "PUBLIC", (*typeCur).first.c_str());
		}

		std::cout << "\n";

		typeCur = (*it).second->types.begin();
		typeEnd = (*it).second->types.end();
		for (; typeCur != typeEnd; ++typeCur)
		{
			std::cout << "Fields of '" << (*typeCur).first << "':\n\tVisibility  Name                            Type\n";
			map<string, const struct __field_metainfo*>::const_iterator fieldCur = (*typeCur).second->fields.begin();
			map<string, const struct __field_metainfo*>::const_iterator fieldEnd = (*typeCur).second->fields.end();
			for (; fieldCur != fieldEnd; ++fieldCur)
			{
				fprintf(stdout, "\t%-10s  %-30s  %s\n",
					"PUBLIC",
					(*fieldCur).second->name,
					translatePrototype( (*fieldCur).second->type ).c_str() );
			}

			std::cout << "\nMethods of '" << (*typeCur).first << "':\n\tVisibility  Name                            Prototype\n";
			map<string, const struct __method_metainfo*>::const_iterator methodCur = (*typeCur).second->methods.begin();
			map<string, const struct __method_metainfo*>::const_iterator methodEnd = (*typeCur).second->methods.end();
			for (; methodCur != methodEnd; ++methodCur)
			{
				fprintf(stdout, "\t%-10s  %-30s  %s\n",
					"PUBLIC",
					(*methodCur).second->name,
					translatePrototype( (*methodCur).second->prototype ).c_str() );
			}
		}
    }
}


/*
void showType( void *lib, const char *symbol )
{
    const struct __field_metainfo* fields = NULL;
    const struct __type_metainfo* type = NULL;
    const struct __method_metainfo* methods = NULL;
    int c = 0;

    type = dlsym(lib, symbol);
    printf("   Found %d field%c\n", type->fieldCount, (type->fieldCount > 1) ? 's' : ' ');

    fields = type->fields;
    for (c = 0; c < type->fieldCount; ++c)
    {
        printf("      %-20s : %s\n", fields[c].name, fields[c].type);
    }

    printf("   Found %d method%c\n", type->methodCount, (type->methodCount > 1) ? 's' : ' ');

    methods = type->methods;
    for (c = 0; c < type->methodCount; ++c)
    {
        printf("      %-20s : %s\n", methods[c].name, methods[c].prototype);
    }
}


const struct __module_metainfo* loadModule( void *lib  )
{
    const struct __module_metainfo* module = dlsym(lib, "module_metainfo");
    int c;

    for (c = 0; c < module->classCount; ++c)
        printf("   %-2d  %s\n", c, module->classTable[c].name);

    return module;
}

int main( int argc, char **argv )
{
    const struct __types_metainfo* clazz = NULL;
    const struct __module_metainfo* module = NULL;
    int c = 0;

    void *lib = dlopen(argv[1], RTLD_LAZY);
    printf("Loading %s\n", argv[1]);
    if (lib != NULL)
    {
        module = loadModule(lib);

        for (c = 0; c < module->classCount; ++c)
        {
            printf("Type '%s'\n", module->classTable[c].name);
            showType(lib, module->classTable[c].symbol);
        }

        dlclose(lib);
    }
    else
        fprintf(stderr, "%s\n", dlerror());
}
*/

} // namespace compiler
} // namespace beagle

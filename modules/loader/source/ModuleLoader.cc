#include <beagle-loader/ModuleLoader.hh>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <dlfcn.h>
#include <linux/limits.h>

namespace beagle {
namespace loader {


using namespace std;


Type::Type(
	const struct __type_metainfo* info ) : info(info), root(NULL)
{

}


Type::Type()
{

}


ModuleLoader::ModuleLoader()
{
    // nothing to do
}


ModuleLoader::~ModuleLoader()
{
    // nothing to do
}


Module *ModuleLoader::load(
    const std::string &fileName )
{
    void *library;
    Module *entry = NULL;
    const struct __module_metainfo *module;
    char path[PATH_MAX];

    // get the absolute path to the module file
    if (realpath(fileName.c_str(), path) == NULL)
        return NULL;

    library = dlopen(path, RTLD_LAZY);
    if (library == NULL) return NULL;

    module = (const struct __module_metainfo *) dlsym(library, "module_metainfo");
    if (module == NULL) goto ESCAPE;

	entry = new Module();

    for (uint32_t i = 0; i < module->typeCount; ++i)
    {
		Type *type = new Type();
		type->info = module->types + i;

		entry->types.insert( pair<string, Type*>(string(type->info->qualifiedName), type) );

		for (uint32_t j = 0; j < module->types[i].fieldCount; ++j)
		{
			const struct __field_metainfo* current = &module->types[i].fields[j];
			type->fields.insert( pair<string, const struct __field_metainfo*>(string(current->name), current) );
		}

		for (uint32_t j = 0; j < module->types[i].methodCount; ++j)
		{
			const struct __method_metainfo* current = &module->types[i].methods[j];
			type->methods.insert( pair<string, const struct __method_metainfo*>(string(current->name), current) );
		}
    }

    // create the new entry
    entry->library = library;
    entry->module = (void*) module;
    entry->fileName = path;
    modules.insert( pair<string, Module*>(entry->fileName, entry) );

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


void ModuleLoader::print(
	bool friendly ) const
{
	std::map<std::string, Module*>::const_iterator it = modules.begin();
    for (; it != modules.end(); ++it)
    {
        std::cout << "Types from '" << (*it).second->fileName << "':\n";
		std::cout << "\tVisibility  Type\n";

		map<string, Type*>::const_iterator typeCur = (*it).second->types.begin();
		map<string, Type*>::const_iterator typeEnd = (*it).second->types.end();
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
			if ((*typeCur).second->fields.size() != 0)
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

			if ((*typeCur).second->methods.size() != 0)
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
Node *ModuleLoader::prototypeToNode(
	const std::string &type )
{
	if (type.length() == 0) return NULL;

	const char *p = type.c_str();

	switch (type[0])
    {
        case 'C':
			return new Node(TOK_CHAR, NULL);
        case 'O';
			return new Node(TOK_BOOLEAN, NULL);
        case '1':
			return new Node(TOK_UINT8, NULL);
        case '2':
			return new Node(TOK_UINT16, NULL);
        case '4':
			return new Node(TOK_UINT32, NULL);
        case '8':
			return new Node(TOK_INT64, NULL);
        case 'B':
			return new Node(TOK_INT8, NULL);
        case 'S':
			return new Node(TOK_INT16, NULL);
        case 'I':
			return new Node(TOK_CHAR, NULL);
        case 'L':
			return new Node(TOK_CHAR, NULL);
        case 'F':
			return new Node(TOK_CHAR, NULL);
        case 'D':
			return *new Node(TOK_CHAR, NULL);
    }
	if (type == "I")
		return *new Node(TOK_CHAR, NULL);
	else
		return *new Node(TOK_CHAR, NULL);
}*/


} // namespace compiler
} // namespace beagle

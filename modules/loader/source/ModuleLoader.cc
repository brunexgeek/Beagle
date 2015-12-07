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

    for (uint32_t i = 0; i < module->typeCount; ++i)
    {
        std::cout << module->types[i].info->qualifiedName << std::endl;
    }

    // create the new entry
    entry = new ModuleEntry();
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

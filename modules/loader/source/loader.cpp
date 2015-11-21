#include <stdio.h>
#include <stdint.h>
#include <dlfcn.h>


struct __types_metainfo {
   const char* name;
   const char* symbol;
};


struct __module_metainfo {
   const uint32_t classCount;
   const struct __types_metainfo* classTable;
};


struct __field_metainfo {
   const char* type;
   const char* name;
};

struct __method_metainfo {
    const char* prototype;
    const char* name;
};

struct __type_metainfo {
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
   size_t staticSize;
   // amount of memory necessary for dynamic fields (objects)
   size_t dynamicSize;
};


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

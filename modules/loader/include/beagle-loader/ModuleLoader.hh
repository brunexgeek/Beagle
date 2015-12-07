#ifndef BEAGLE_MODULELOADER_HH
#define BEAGLE_MODULELOADER_HH


#include <map>
#include <string>
#include <iostream>


namespace beagle {
namespace loader {


class ModuleEntry
{
    public:
        void *library;
        void *module;
        std::string fileName;
};


class ModuleLoader
{
    public:
        ModuleLoader();
        ~ModuleLoader();

        ModuleEntry *load(
            const std::string &fileName );

    private:
        std::map<std::string, ModuleEntry*> modules;
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_MODULELOADER_HH

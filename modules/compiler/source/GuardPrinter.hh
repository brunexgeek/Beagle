#ifndef BEAGLE_GUARDPRINTER_HH
#define BEAGLE_GUARDPRINTER_HH


#include "CodePrinter.hh"
#include <sstream>
#include <iostream>


namespace beagle {
namespace compiler {


class GuardPrinter : public CodePrinter
{

    public:
        GuardPrinter(
            int tabSize = 4 ) : CodePrinter(tabSize)
        {
            // nothing to do
        }

        GuardPrinter(
            CodePrinter &parent,
            int tabSize = 4 ) : CodePrinter(parent, tabSize)
        {
            // nothing to do
        }

        ~GuardPrinter()
        {
            // nothing to do
        }

        void open(
            const std::string &name )
        {
            std::ostream &out = getStream();

            out << "#ifndef GUARD_";
            for (size_t i = 0; i < name.length(); ++i)
                out << (char) std::toupper(name[i]);
            out << "\n#define GUARD_";
            for (size_t i = 0; i < name.length(); ++i)
                out << (char) std::toupper(name[i]);
            out << "\n\n";
        }

        void close(
            const std::string &name )
        {
            std::ostream &out = getStream();

            out << "#endif // GUARD_";
            for (size_t i = 0; i < name.length(); ++i)
                out << (char) std::toupper(name[i]);
            out << "\n\n";
        }

};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_GUARDPRINTER_HH

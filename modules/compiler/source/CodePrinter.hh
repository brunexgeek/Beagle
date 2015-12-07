#ifndef BEAGLE_CODEPRINTER_HH
#define BEAGLE_CODEPRINTER_HH


#include <beagle-compiler/Node.hh>
#include <sstream>


namespace beagle {
namespace compiler {


const int POINTER = 0x01;

const int CONST = 0x02;

const int ARRAY = 0x04;

const int STRUCT = 0x08;

const int PRIVATE = 0x10;

const int PUBLIC = 0x20;



class CodePrinter
{

    public:
        CodePrinter(
            int tabSize = 4 );

        CodePrinter(
            CodePrinter &parent,
            int tabSize = 4 );

        int getTabSize();

        int incIndent();

        int decIndent();

        int getIndent();

        void indent();

        std::stringstream &getStream();

        void writeName(
            const std::string &prefix,
            Node &name,
            const std::string &sufix );

        void comment(
            const std::string &text );

        void section(
            const std::string &text );

    private:
        std::stringstream buffer;
        int tabSize;
        int level;
        CodePrinter *parent;
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_CODEPRINTER_HH

#ifndef BEAGLE_CODEPRINTER_HH
#define BEAGLE_CODEPRINTER_HH


#include <beagle-loader/Node.hh>
#include <sstream>


namespace beagle {
namespace compiler {


using namespace beagle::loader;


class CodePrinter
{

    public:
        static const int POINTER;
        static const int CONST;
        static const int ARRAY;
        static const int PUBLIC;
        static const int STRUCT;

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

#ifndef BEAGLE_VARIABLEPRINTER_HH
#define BEAGLE_VARIABLEPRINTER_HH


#include <beagle-parser/CodePrinter.hh>
#include <sstream>
#include <iostream>


namespace beagle {


class VariablePrinter : public CodePrinter
{

    public:
        VariablePrinter(
            int tabSize = 4 ) : CodePrinter(tabSize)
        {
            // nothing to do
        }

        VariablePrinter(
            CodePrinter &parent,
            int tabSize = 4 ) : CodePrinter(parent, tabSize)
        {
            // nothing to do
        }

        ~VariablePrinter()
        {
            // nothing to do
        }

        void open(
            int modifiers,
            bool isStruct,
            const std::string &type,
            const std::string &name )
        {
            indent();
            if ((modifiers & PUBLIC) == 0)
                getStream() << "static ";
            if ((modifiers & CONST) > 0)
                getStream() << "const ";
            if (isStruct)
                getStream() << "struct ";
            getStream() << type << " " << name;
            if ((modifiers & ARRAY) > 0)
                getStream() << "[]";
            getStream() << " = \n";
            indent();
            getStream() << "{\n";
            incIndent();
        }

        void close()
        {
            decIndent();
            indent();
            getStream() << "};\n\n";
        }

        void addSizeOf( const std::string &name )
        {
            indent();
            getStream() << "sizeof(" << name << "),\n";
        }

        void addAddress( const std::string &name )
        {
            indent();
            getStream() << "&" << name << ",\n";
        }

        void addPlain( const std::string &name )
        {
            indent();
            getStream() << name << ",\n";
        }

        void addNull()
        {
            indent();
            getStream() << "NULL,\n";
        }

        template <typename T>
        void addPrimitive( T value )
        {
            indent();
            getStream() << value << ",\n";
        }

        void addString(
            const std::string &value )
        {
            indent();
            getStream() << "\"" << value << "\",\n";
        }

        void openBlock()
        {
            indent();
            getStream() << "{ \n";
            incIndent();
        }

        void closeBlock()
        {
            decIndent();
            indent();
            getStream() << "}, \n";
        }
};


} // namespace beagle

#endif // BEAGLE_VARIABLEPRINTER_HH

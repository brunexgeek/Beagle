#include <beagle-parser/StructPrinter.hh>
#include <beagle-parser/CodePrinter.hh>


namespace beagle {


StructPrinter::StructPrinter(
    int tabSize ) : CodePrinter(tabSize)
{
    // nothing to do
}


StructPrinter::StructPrinter(
    CodePrinter &parent,
    int tabSize ) : CodePrinter(parent, tabSize)
{
    // nothing to do
}

void StructPrinter::open(
    int modifiers,
    const std::string &name )
{
    indent();
    if ((modifiers & PRIVATE) > 0)
        getStream() << "static ";
    getStream() << "struct " << name << " {" << std::endl;
    incIndent();
}

void StructPrinter::open(
    const std::string & name )
{
    open(PRIVATE, name);
}

void StructPrinter::close()
{
    decIndent();
    indent();
    getStream() << "};" << std::endl << std::endl;
}

void StructPrinter::addPrimitive(
    int modifiers,
    const std::string & type,
    const std::string & name )
{
    indent();
    if ((modifiers & CONST) > 0)
        getStream() << "const ";
    if ((modifiers & STRUCT) > 0)
        getStream() << "struct ";
    getStream() << type;
    if ((modifiers & POINTER) > 0)
        getStream() << "*";
    getStream() << " " << name << ";" << std::endl;
}

void StructPrinter::addStruct(
    int modifiers,
    const std::string & type,
    const std::string & name )
{
    addPrimitive(modifiers | STRUCT, type, name);
}


} // namespace beagle

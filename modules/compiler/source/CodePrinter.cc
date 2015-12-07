#include "CodePrinter.hh"
#include <locale>


namespace beagle {
namespace compiler {


CodePrinter::CodePrinter(
    int tabSize ) : level(0), parent(NULL)
{
    this->tabSize = (tabSize > 0 && tabSize <= 10) ? tabSize : 4;
}


CodePrinter::CodePrinter(
    CodePrinter &parent,
    int tabSize ) : level(0), parent(&parent)
{
    this->tabSize = (tabSize > 0 && tabSize <= 10) ? tabSize : 4;
}

int CodePrinter::getTabSize()
{
    if (parent != NULL)
        return parent->getTabSize();
    else
        return tabSize;
}

int CodePrinter::incIndent()
{
    if (parent != NULL)
        return parent->incIndent();
    else
        return level++;
}

int CodePrinter::decIndent()
{
    if (parent != NULL)
        return parent->decIndent();
    else
    {
        if (level > 0) level--;
        return level;
    }
}

int CodePrinter::getIndent()
{
    if (parent != NULL)
        return parent->getIndent();
    else
        return level;
}

void CodePrinter::indent()
{
    if (parent != NULL)
        parent->indent();
    else
    {
        for (int i = 0; i < level * tabSize; i++)
            getStream() << ' ';
    }
}

inline std::stringstream &CodePrinter::getStream()
{
    if (parent != NULL)
        return parent->getStream();
    else
        return buffer;
}

void CodePrinter::writeName(
    const std::string &prefix,
    Node &name,
    const std::string &sufix )
{
    getStream() << prefix;
    while (true)
    {
        getStream() << name.text;
        if (name.getChildCount() != 0)
        {
            getStream() << '_';
            name = name[0];
        }
        else
            break;
    }
    getStream() << sufix;
}

void CodePrinter::comment(
    const std::string &text )
{
    std::ostream &out = getStream();

    indent();
    out << "/* ";
    for (int i = 0, s = 0; i < (int) text.length(); ++i, ++s)
    {
        if (text[i] == '\n' || (s >= 70 && text[i] == ' '))
        {
            out << std::endl << "  ";
            indent();
            s = 0;
            continue;
        }
        out << text[i];
    }
    out <<  " */" << std::endl;
}


void CodePrinter::section(
    const std::string &text )
{
    std::ostream &out = getStream();
    int maxLength = 0;
    std::stringstream ss;

    // compute the greater line length
    for (int i = 0, s = 0; i < (int) text.length(); ++i, ++s)
    {
        char c = text[i];

        if (c == '\n' || (s >= 70 && c == ' '))
        {
            if (s > maxLength) maxLength = s;
            s = 0;
            ss << "\n * ";
        }
        else
            ss << c;
    }

    if (maxLength == 0) maxLength = (int) text.length();

    indent();
    out << "\n/***";
    for (int i = 0; i < maxLength; ++i) out << '*';
    out << "\n * " << ss.str() << "\n **";
    for (int i = 0; i < maxLength; ++i) out << '*';
    out <<  "*/\n\n";
}


} // namespace compiler
} // namespace beagle

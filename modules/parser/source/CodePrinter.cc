#include <beagle-parser/CodePrinter.hh>


namespace beagle {


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

std::stringstream &CodePrinter::getStream()
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
        getStream() << name.getText();
        if (name.getChildCount() != 0)
        {
            getStream() << '_';
            name = name.getChild(0);
        }
        else
            break;
    }
    getStream() << sufix;
}

void CodePrinter::comment(
    const std::string &text )
{
    indent();
    getStream() << "/* ";
    for (int i = 0, s = 0; i < text.length(); ++i, ++s)
    {
        if (text[i] == '\n' || (s >= 70 && text[i] == ' '))
        {
            getStream() << std::endl << "  ";
            indent();
            s = 0;
            continue;
        }
        getStream() << text[i];
    }
    getStream() <<  " */" << std::endl;
}

void CodePrinter::openSentinel(
    const std::string &name )
{
    // TODO: change 'name' to upper case

    getStream() << "#ifndef " << name << std::endl;
    getStream() << "#define " << name << std::endl;
    getStream() << std::endl << std::endl;
}


void CodePrinter::closeSentinel(
    const std::string &name )
{
    // TODO: change 'name' to upper case

    getStream() << "#endif // " << name << std::endl;
    getStream() << std::endl << std::endl;
}


} // namespace beagle

#include <beagle-parser/Node.hh>
#include <cstdarg>
#include <cstdio>
#include <iomanip>

namespace beagle {

Node::Node(
    int type,
    const char *text ) : type(type), counter(0)
{
    if (text != NULL)
        this->text = text;
}


Node::Node(
    const Node &obj )
{
    text = obj.text;
    type = obj.type;
    counter = obj.counter;

    for (size_t i = 0; i < obj.children.size(); ++i)
        addChild( *(new Node(*obj.children[i])) );
}

/*
Node::Node(
    int type,
    const char *value,
    Node *parent,
    int childNo,
    ... ) : type(type), parent(parent)
{
    if (value != NULL)
        this->value = value;

    va_list args;

    if (childNo <= 0) return;
    children.resize(childNo);

    va_start(args, childNo);
    for (int i = 0; i < childNo; ++i)
        children[i] = va_arg(args, Node*);
    va_end(args);
}*/

Node::~Node()
{
    for (size_t i = 0; i < children.size(); ++i)
        delete children[i];
    children.clear();
}


void Node::print( std::ostream &out, Parser *parser, int level, bool recursive )
{
    for (int i = 0; i < level; ++i)
        out << "   ";

    if (parser == NULL)
        out << "["<< std::setw(3) << type << "] ";
    else
        out << "["<< parser->name(type) << "] ";

    if (!text.empty())
        std::cout << "'" << text << "' ";

    if (counter != 0)
        std::cout << "(" << counter << ")";
    std::cout << std::endl;

    if (!recursive) return;

    for (int i = 0; i < children.size(); ++i)
        children[i]->print(out, parser, level + 1);
}

}

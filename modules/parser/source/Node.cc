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

}

Node *Node::getChild( int index ) const
{
    return children[index];
}

Node *Node::setChild( int index, Node *value )
{
    if (index < 0 || index > children.size()) return NULL;

    return children[index] = value;
}

Node *Node::addChild( Node *value )
{
    children.push_back(value);
    return value;
}


const char *Node::getText() const
{
    return text.c_str();
}


int Node::getCounter() const
{
    return counter;
}

void Node::setCounter( int value )
{
    counter = value;
}


void Node::print( std::ostream &out, Parser *parser, int level )
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

    for (int i = 0; i < children.size(); ++i)
        children[i]->print(out, parser, level + 1);
}

}

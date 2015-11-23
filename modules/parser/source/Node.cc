#include "Node.hh"
#include <cstdarg>
#include <cstdio>

namespace beagle {


Node::Node(
    int type,
    const std::string &value,
    Node *parent ) : type(type), value(value), parent(parent)
{

}


Node::Node(
    int type,
    const std::string &value,
    Node *parent,
    int childNo,
    ... ) : type(type), value(value), parent(parent)
{
    va_list args;

    if (childNo <= 0) return;
    children.resize(childNo);

    va_start(args, childNo);
    for (int i = 0; i < childNo; ++i)
        children[i] = va_arg(args, Node*);
    va_end(args);
}

Node::~Node()
{

}

Node *Node::getChild( int index )
{
    return children[index];
}

Node *Node::setChild( int index, Node *value )
{
    if (index < 0 || index > children.size()) return NULL;

    return children[index] = value;
}

Node *Node::getParent()
{
    return parent;
}

}

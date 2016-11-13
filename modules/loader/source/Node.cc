#include <beagle-loader/Node.hh>
#include <cstdarg>
#include <cstdio>
#include <iomanip>
#include <vector>


namespace beagle {
namespace loader {


using namespace std;

const char *NODE_NAME[] =
{
    NULL,
    "TYPE_CLASS",
    "TYPE_ARRAY",
    "INTERFACES",
    "NULL",
    "BODY",
    "FIELD",
    "METHOD",
    "CONSTRUCTOR",
    "LIST",
    "IMPORTS",
    "DECLARATOR",
    "MODIFIERS",
    "UNIT",
    "TYPE",
    "TYPES",
    "MEMBER",
    "IMPORT_ALL",
    "STATIC_INIT",
    "PARAMETER",
    "PARAMETERS",
    "BLOCK",
    "CALL",
    "ACCESS_FIELD",
    "CAST",
    "ACCESS_ARRAY",
    "FOR_EACH",
    "GROUP",
    "ANNOTATION",
    "NEW_ARRAY",
    "ARRAY",
    "ANNOTATIONS",
    "ARGUMENTS",
    "LOCAL",
    "ABSTRACT",
    "BOOLEAN",
    "BREAK",
    "CASE",
    "CATCH",
    "CHAR",
    "CLASS",
    "CONST",
    "DEFAULT",
    "DO",
    "DOUBLE",
    "ELSE",
    "EXTENDS",
    "FINAL",
    "FINALLY",
    "FLOAT",
    "FOR",
    "GOTO",
    "IF",
    "IMPLEMENTS",
    "IMPORT",
    "INSTANCEOF",
    "INTERFACE",
    "LONG",
    "NATIVE",
    "NEW",
    "PACKAGE",
    "PRIVATE",
    "PROTECTED",
    "PUBLIC",
    "RETURN",
    "SUSPEND",
    "STATIC",
    "SUPER",
    "SWITCH",
    "READLOCK",
    "WRITELOCK",
    "THIS",
    "THROW",
    "THROWS",
    "VOID",
    "VOLATILE",
    "WHILE",
    "NAME",
    "QNAME",
    "CONTINUE",
    "TRANSIENT",
    "TRY",
    "NULLLITERAL",
    "BOOLLITERAL",
    "INTLITERAL",
    "CHARLITERAL",
    "FLOATLITERAL",
    "STRINGLITERAL",
    "UINT8",
    "UINT16",
    "UINT32",
    "UINT64",
    "INT8",
    "INT16",
    "INT32",
    "INT64",
    "LP",
    "RP",
    "LC",
    "RC",
    "LB",
    "RB",
    "SM",
    "CM",
    "DOT",
    "ASN",
    "LT",
    "GT",
    "BANG",
    "TILDE",
    "QUEST",
    "COLON",
    "EQ",
    "NE",
    "LE",
    "GE",
    "ANDAND",
    "OROR",
    "INC",
    "DEC",
    "PLUS",
    "MINUS",
    "MUL",
    "DIV",
    "AND",
    "OR",
    "CARET",
    "MOD",
    "SHL",
    "SHR",
    "PLASN",
    "MIASN",
    "MUASN",
    "DIASN",
    "ANDASN",
    "ORASN",
    "CARETASN",
    "SLASN",
    "SRASN",
    "MODASN",
    "BAD_TOKEN",
    "EOL",
    "AT",
    "VARARG",
    "INDENT",
    "DEDENT",
    "IN",
    "RANGE",
    "PASS"
};


Node::Node(
    int type,
    const char *text ) : type(type), counter(0), line(1), column(1), parent(NULL)
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


void Node::print(
    std::ostream &out,
    const char *(getTokenName)(int),
    int level,
    bool recursive )
{
    for (int i = 0; i < level; ++i)
        out << "   ";

    if (getTokenName == NULL)
        out << "["<< std::setw(3) << type << "] ";
    else
        out << "["<< getTokenName(type) << "] ";

    if (!text.empty())
        std::cout << "'" << text << "' ";

    if (counter != 0)
        std::cout << "(" << counter << ")";
    std::cout << std::endl;

    if (!recursive) return;

    for (int i = 0; i < (int) children.size(); ++i)
        children[i]->print(out, getTokenName, level + 1);
}


bool Node::hasChild(
    int modifier )
{
    for (int i = 0, n = getChildCount(); i < n; ++i)
        if ((*this)[i].type == modifier) return true;

    return false;
}


void Node::setChild(
    int index,
    Node &value )
{
    if (index >= 0 && index < (int)children.size())
        children[index] = &value;
    value.parent = this;
}


void Node::removeChild(
    int index )
{
    if (index == -1)
    {
        for (size_t i = 0, n = children.size(); i < n; ++i)
            children[i]->parent = NULL;
        children.clear();
    }
    else
    if (index >= 0 && index < (int)children.size())
    {
        children[index]->parent = NULL;
        children.erase(children.begin() + index);
    }
}


void Node::addChild(
    Node &value,
    int position )
{
    if (position < 0 || children.size() == 0 || position >= (int) children.size())
    {
        children.push_back(&value);
    }
    else
    {
        vector<Node*>::iterator it = children.begin();
        children.insert(it + position, &value);
    }
    value.parent = this;
}


Node &Node::addChild(
    int type,
    const char *text )
{
    Node *node = new Node(type, text);
    addChild(*node);
    return *node;
}


int Node::getChildCount() const
{
    return (int) children.size();
}


Node &Node::operator[](
    int index )
{
    return *children[index];
}


const Node &Node::operator[](
    int index ) const
{
    return *children[index];
}


Node::operator std::string ()
{
    return text;
}


const char *Node::name(
    int nid )
{
    if (nid < 0 || nid > NID_PASS) return "";
    return NODE_NAME[nid];
}


} // namespace compiler
} // namespace loader

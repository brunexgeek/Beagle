#include <beagle-loader/Node.hh>
#include <cstdarg>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <algorithm>


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


/*Node::Node(
	const Node &obj )
{
	text = obj.text;
	type = obj.type;
	counter = obj.counter;

	for (size_t i = 0; i < obj.children.size(); ++i)
		addChild( new Node(*obj.children[i]) );
}*/

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
	auto it = children.begin();
	for (; it != children.end(); ++it)
		delete *it;
	children.clear();
}


void Node::print(
	std::ostream &out,
	int level,
	bool recursive,
	const char *(getNodeName)(int) )
{
	static const char *EQUALS = "=";

	for (int i = 0; i < level; ++i)
		out << "   ";

	out << "\e[1;32m";

	if (getNodeName == NULL)
		out << "["<< Node::name(type) << "]\e[0m";
	else
		out << "["<< getNodeName(type) << "]\e[0m";

	size_t total = std::min(32, (int) text.length());
	if (total > 0)
	{
		out << "  text" << EQUALS << "'";
		for (size_t i = 0; i < total; ++i)
			out << text[i];
		if (total < text.length())
			out << "...";
		out << "'";
	}

	if (counter != 0)
		out << "  counter=" << EQUALS << counter;
	out << "\e[0m" << std::endl;

	if (!recursive) return;

	auto it = children.begin();
	for (; it != children.end(); ++it)
		(*it)->print(out, level + 1, recursive, getNodeName);;
}


Node *Node::findByType(
	int type )
{
	auto it = children.begin();
	for (; it != children.end(); ++it)
		if ((*it)->type == type) return *it;

	return NULL;
}


Node *Node::remove(
	int index )
{
	Node *item = NULL;

	if (index >= 0 && index < (int)children.size())
	{
		item = children[index];
		item->parent = NULL;
		children.erase(children.begin() + index);
	}

	return item;
}


Node & Node::add(
	Node &value,
	int index )
{
	return add(&value, index);
}


Node &Node::add(
	Node *value,
	int index )
{
	if (index < 0 || children.size() == 0 || index >= (int) children.size())
		children.push_back(value);
	else
	{
		vector<Node*>::iterator it = children.begin();
		children.insert(it + index, value);
	}
	value->parent = this;

	return *value;
}


Node &Node::add(
	int type,
	const char *text )
{
	Node *node = new Node(type, text);
	return add(node);
	return *node;
}


Node *Node::replace(
	int index,
	Node &value )
{
	Node *old = NULL;

	if (index >= 0 && index < (int)children.size())
	{
		old = children[index];
		children[index] = &value;
	}
	value.parent = this;

	return old;
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


Node::operator std::string () const
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

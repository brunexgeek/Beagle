#include "NameGenerator.hh"
#include <string>
#include "beagle.y.hh"
#include <cassert>

namespace beagle {
namespace compiler {


using namespace std;


const string NameGenerator::DYNAMIC_TYPE_PREFIX = "";
const string NameGenerator::STATIC_TYPE_PREFIX = "__static";
const string NameGenerator::OBJECT_REFERENCE = "__object_ref";


NameGenerator::NameGenerator()
{
    // nothing to do
}


NameGenerator::~NameGenerator()
{
    // nothing to do
}


void NameGenerator::getNativeName(
	std::stringstream &ss,
	Node &name )
{
    assert(name.type == TOK_NAME || name.type == TOK_QNAME);
    std::string &value = name.text;

	for (size_t i = 0, n = value.length(); i < n; ++i)
        if (value.at(i) == '.')
            ss << '_';
        else
            ss << value.at(i);
}


std::string NameGenerator::getNativeName(
	Node &name )
{
	std::stringstream ss;

	getNativeName(ss, name);

	return ss.str();
}


string NameGenerator::getNativeTypeName(
    Node &node,
    bool isStatic )
{
    assert(node.type == TOK_CLASS ||
        node.type == TOK_INTERFACE ||
        node.type == TOK_NAME ||
        node.type == TOK_QNAME);

    string result;

    if (isStatic)
        result += STATIC_TYPE_PREFIX;
    else
        result += DYNAMIC_TYPE_PREFIX;
    result += "__";
    if (node.type == TOK_CLASS || node.type == TOK_INTERFACE)
        result += getNativeName(node[2]);
    else
        result += getNativeName(node);

    return result;
}


std::string NameGenerator::getMethodNativeName(
	Node &type,
	Node &method )
{
	std::stringstream ss;

	if ( method.type  != TOK_METHOD ||
	     (type.type != TOK_CLASS && type.type != TOK_INTERFACE) )
	     return "";

    if (method[1].hasChild(TOK_STATIC))
        ss << "static__";
    else
        ss << "dynamic__";
	ss << getNativeName(type[2]) << "__" << getNativeName(method[3]);

	return ss.str();
}

/*
std::string NameGenerator::getTypeName(
	Node &package,
	Node &type )
{
	std::stringstream ss;

	if ( (package.type != TOK_NAME && package.type != TOK_QNAME) ||
	     (type.type != TOK_CLASS && type.type != TOK_INTERFACE) )
	     return "";

	ss << package.text << '.' << type[2].text;

	return ss.str();
}*/


/*std::string NameGenerator::getNativeTypeName(
	const std::string &prefix,
	Node &package,
	Node &type,
    char separator )
{
	std::stringstream ss;

	if ( (package.type != TOK_NAME && package.type != TOK_QNAME) ||
	     (type.type != TOK_CLASS && type.type != TOK_INTERFACE) )
	     return "";

	ss << prefix <<
        separator <<
        separator <<
        getNativeName(package) <<
        separator <<
        getNativeName(type[2]);

	return ss.str();
}*/


string NameGenerator::getNativeType(
    Node &type )
{
    string result;

    switch (type.type)
    {
        case TOK_TYPE_ARRAY:
            result = getNativeType(type[0]);
            for (int i = 0; i < type.counter; ++i)
                result += '*';
            return result;
        case TOK_TYPE_CLASS:
            result += "struct ";
            result += OBJECT_REFERENCE;//getNativeTypeName(type[0]);
            result += '*';
            return result;
        default:
            return getNativeType(type.type);
    }
}


string NameGenerator::getNativeType(
    int type )
{
    assert(type == TOK_BOOLEAN ||
        type == TOK_UINT8 ||
        type == TOK_UINT16 ||
        type == TOK_CHAR ||
        type == TOK_UINT32 ||
        type == TOK_UINT64 ||
        type == TOK_INT8 ||
        type == TOK_INT16 ||
        type == TOK_INT32 ||
        type == TOK_INT64 ||
        type == TOK_FLOAT ||
        type == TOK_DOUBLE ||
        type == TOK_VOID);

    switch (type)
    {
        case TOK_BOOLEAN:
        case TOK_UINT8:
            return "uint8_t";
        case TOK_UINT16:
        case TOK_CHAR:
            return "uint16_t";
        default:
        case TOK_UINT32:
            return "uint32_t";
        case TOK_UINT64:
            return "uint64_t";
        case TOK_INT8:
            return "int8_t";
        case TOK_INT16:
            return "int16_t";
        case TOK_INT32:
            return "int32_t";
        case TOK_INT64:
            return "int64_t";
        case TOK_FLOAT:
            return "float";
        case TOK_DOUBLE:
            return "double";
        case TOK_VOID:
            return "void";
    }
}



} // namespace compiler
} // namespace beagle

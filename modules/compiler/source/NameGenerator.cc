#include "NameGenerator.hh"
#include <string>
#include <cassert>
#include <sstream>

namespace beagle {
namespace compiler {


using namespace std;


const string NameGenerator::DYNAMIC_TYPE_PREFIX = "";
const string NameGenerator::STATIC_TYPE_PREFIX = "static__";
const string NameGenerator::CLASS_ENTRY = "typeList";
const string NameGenerator::MODULE_METAINFO = "ModuleMetainfo";
const string NameGenerator::TYPE_METAINFO = "TypeMetainfo";
const string NameGenerator::MEMBER_METAINFO = "MemberMetainfo";
const string NameGenerator::OBJECT_REFERENCE = "ObjectRef";

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
    assert(name.type == NID_NAME || name.type == NID_QNAME);
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
    assert(node.type == NID_CLASS ||
        node.type == NID_INTERFACE ||
        node.type == NID_NAME ||
        node.type == NID_QNAME);

    string result;

    if (isStatic)
        result += STATIC_TYPE_PREFIX;
    else
        result += DYNAMIC_TYPE_PREFIX;
    //result += "__";
    if (node.type == NID_CLASS || node.type == NID_INTERFACE)
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

	if ( method.type  != NID_METHOD ||
	     (type.type != NID_CLASS && type.type != NID_INTERFACE) )
	     return "";

    if (method[1].findByType(NID_STATIC) != NULL)
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

	if ( (package.type != NID_NAME && package.type != NID_QNAME) ||
	     (type.type != NID_CLASS && type.type != NID_INTERFACE) )
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

	if ( (package.type != NID_NAME && package.type != NID_QNAME) ||
	     (type.type != NID_CLASS && type.type != NID_INTERFACE) )
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
        case NID_TYPE_ARRAY:
            result = getNativeType(type[0]);
            for (int i = 0; i < type.counter; ++i)
                result += '*';
            return result;
        case NID_TYPE_CLASS:
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
    assert(type == NID_BOOLEAN ||
        type == NID_UINT8 ||
        type == NID_UINT16 ||
        type == NID_CHAR ||
        type == NID_UINT32 ||
        type == NID_UINT64 ||
        type == NID_INT8 ||
        type == NID_INT16 ||
        type == NID_INT32 ||
        type == NID_INT64 ||
        type == NID_FLOAT ||
        type == NID_DOUBLE ||
        type == NID_VOID);

    switch (type)
    {
        case NID_BOOLEAN:
        case NID_UINT8:
            return "uint8_t";
        case NID_UINT16:
        case NID_CHAR:
            return "uint16_t";
        default:
        case NID_UINT32:
            return "uint32_t";
        case NID_UINT64:
            return "uint64_t";
        case NID_INT8:
            return "int8_t";
        case NID_INT16:
            return "int16_t";
        case NID_INT32:
            return "int32_t";
        case NID_INT64:
            return "int64_t";
        case NID_FLOAT:
            return "float";
        case NID_DOUBLE:
            return "double";
        case NID_VOID:
            return "void";
    }
}



} // namespace compiler
} // namespace beagle

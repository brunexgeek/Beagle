#ifndef BEAGLE_NODE_HH
#define BEAGLE_NODE_HH


#include <vector>
#include <string>
#include <iostream>
#include <stdint.h>


namespace beagle {
namespace loader {


enum NodeID
{
	NID_TYPE_CLASS = 1,
	NID_TYPE_ARRAY,
	NID_INTERFACES,
	NID_NULL,
	NID_BODY,
	NID_FIELD,
	NID_METHOD,
	NID_CONSTRUCTOR,
	NID_LIST,
	NID_IMPORTS,
	NID_DECLARATOR,
	NID_MODIFIERS,
	NID_UNIT,
	NID_TYPE,
	NID_TYPES,
	NID_MEMBER,
	NID_IMPORT_ALL,
	NID_STATIC_INIT,
	NID_PARAMETER,
	NID_PARAMETERS,
	NID_BLOCK,
	NID_CALL,
	NID_ACCESS_FIELD,
	NID_CAST,
	NID_ACCESS_ARRAY,
	NID_FOR_EACH,
	NID_GROUP,
	NID_ANNOTATION,
	NID_NEW_ARRAY,
	NID_ARRAY,
	NID_ANNOTATIONS,
	NID_ARGUMENTS,
	NID_LOCAL,
	NID_ABSTRACT,
	NID_BOOLEAN,
	NID_BREAK,
	NID_CASE,
	NID_CATCH,
	NID_CHAR,
	NID_CLASS,
	NID_CONST,
	NID_DEFAULT,
	NID_DO,
	NID_DOUBLE,
	NID_ELSE,
	NID_EXTENDS,
	NID_FINAL,
	NID_FINALLY,
	NID_FLOAT,
	NID_FOR,
	NID_GOTO,
	NID_IF,
	NID_IMPLEMENTS,
	NID_IMPORT,
	NID_INSTANCEOF,
	NID_INTERFACE,
	NID_LONG,
	NID_NATIVE,
	NID_NEW,
	NID_PACKAGE,
	NID_PRIVATE,
	NID_PROTECTED,
	NID_PUBLIC,
	NID_RETURN,
	NID_SUSPEND,
	NID_STATIC,
	NID_SUPER,
	NID_SWITCH,
	NID_READLOCK,
	NID_WRITELOCK,
	NID_THIS,
	NID_THROW,
	NID_THROWS,
	NID_VOID,
	NID_VOLATILE,
	NID_WHILE,
	NID_NAME,
	NID_QNAME,
	NID_CONTINUE,
	NID_TRANSIENT,
	NID_TRY,
	NID_NLITERAL,
	NID_BLITERAL,
	NID_ILITERAL,
	NID_CLITERAL,
	NID_FLITERAL,
	NID_SLITERAL,
	NID_UINT8,
	NID_UINT16,
	NID_UINT32,
	NID_UINT64,
	NID_INT8,
	NID_INT16,
	NID_INT32,
	NID_INT64,
	NID_LP,
	NID_RP,
	NID_LC,
	NID_RC,
	NID_LB,
	NID_RB,
	NID_SM,
	NID_CM,
	NID_DOT,
	NID_ASN,
	NID_LT,
	NID_GT,
	NID_BANG,
	NID_TILDE,
	NID_QUEST,
	NID_COLON,
	NID_EQ,
	NID_NE,
	NID_LE,
	NID_GE,
	NID_AND,
	NID_OR,
	NID_INC,
	NID_DEC,
	NID_PLUS,
	NID_MINUS,
	NID_MUL,
	NID_DIV,
	NID_BAND,
	NID_BOR,
	NID_CARET,
	NID_MOD,
	NID_SHL,
	NID_SHR,
	NID_PLASN,
	NID_MIASN,
	NID_MUASN,
	NID_DIASN,
	NID_ANDASN,
	NID_ORASN,
	NID_CARETASN,
	NID_SLASN,
	NID_SRASN,
	NID_MODASN,
	NID_BAD_TOKEN,
	NID_EOL,
	NID_AT,
	NID_VARARG,
	NID_INDENT,
	NID_DEDENT,
	NID_IN,
	NID_RANGE,
	NID_PASS,
};


class Node
{
	public:
		std::string text;
		int type;
		int counter;
		uint32_t line;
		uint32_t column;
		Node *parent;

		Node(
			int type,
			const char *text = NULL );

		/*Node(
			const Node &obj );*/

		virtual ~Node();

		Node *replace(
			int index,
			Node &value );

		Node *remove(
			int index );

		Node &add(
			Node &value,
			int index = -1 );

		Node &add(
			Node *value,
			int index = -1 );

		Node &add(
			int type,
			const char *text = NULL );

		int count() const;

		bool isEmpty() const;

		Node &operator[](
			int index );

		const Node &operator[](
			int index ) const;

		void print(
			std::ostream &out,
			int level = 0,
			bool recursive = true,
			const char *(getNodeName)(int) = NULL );

		Node *findByType(
			int type );

		operator std::string() const;

		static const char *name(
			int nid );

	private:
		std::vector<Node*> children;
};


} // namespace loader
} // namespace beagle


#endif // BEAGLE_NODE_HH

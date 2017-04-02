#include <beagle-compiler/Parser.hh>
#include "beagle.y.hh"
#include "beagle.l.hh"
#include "LexerContext.hh"
#include <cassert>


/**
 * Define the current column in the lexer scanner.
 *
 * For some reason this prototype is not generated in the Flex
 * header file, so we include it here.
 */
void beagle_set_column (int  column_no , yyscan_t yyscanner);

/**
 * @brief Returns the token name given it constant.
 *
 * This function is defined in the Bison generated parser.
 */
const char *beagle_getTokenName( int tok );


namespace beagle {
namespace compiler {


Parser::Parser()
{
	// nothing to do
}

Parser::~Parser()
{
	// nothing to do
}


void Parser::tokens(
	std::istream &in,
	const std::string &fileName )
{
	YYSTYPE temp;
	void *scanner;
	void *scanString;
	LexerContext scannerContext;

	// initialize the lexer
	beagle_lex_init(&scanner);
	scanString = getScanString(scanner, in);
	beagle_set_lineno(1, scanner);
	beagle_set_column(1, scanner);
	beagle_set_extra(&scannerContext, scanner);
	beagle_debug = 0;

	temp.token = 0;
	int tok;
	while ((tok = beagle_lex(&temp, scanner)) != 0)
	{
		std::cout << beagle_getTokenName(temp.token->id);
		if (tok != NID_EOL)
			std::cout << " ";
		temp.token = 0;
	}

	if (scanString != NULL)
		beagle__delete_buffer((YY_BUFFER_STATE)scanString, scanner);
	beagle_lex_destroy(scanner);
}

Node *Parser::process(
	std::istream &in,
	const std::string &fileName )
{
	Node *root = NULL;
	void *scanString;
	void *scanner;
	LexerContext scannerContext;

	// initialize the lexer
	beagle_lex_init(&scanner);
	scanString = getScanString(scanner, in);
	beagle_set_lineno(1, scanner);
	beagle_set_column(1, scanner);
	beagle_set_extra(&scannerContext, scanner);
	beagle_debug = 0;

	parser_context_t context;
	context.lexer = scanner;
	context.fileName = fileName;
	context.rule = NULL;
	context.parser = this;

	if (beagle_parse(&context) == 0)
	{
		root = context.stack[ context.stack.size() - 1 ];

		// expand field declarations
		expandFields(*root);
		// expand local variables
		expandVariables(*root);
	}

	if (scanString != NULL)
		beagle__delete_buffer((YY_BUFFER_STATE)scanString, scanner);
	beagle_lex_destroy(scanner);

	return root;
}

void *Parser::getScanString(
	void *scanner,
	std::istream &in )
{
	std::stringstream ss;
	std::string line;

	while (std::getline(in, line))
	{
		// Notice: '\2' is a "begin of line" marker required by
		//         lexer to match some patterns
		ss << '\2';
		ss << line;
		ss << std::endl;
	}

	return beagle__scan_string(ss.str().c_str(), scanner);
}


void Parser::expandFields(
	Node &root )
{
	assert(root.type == NID_UNIT);

	Node &body = root[2][5];
	if (body.type == NID_NULL) return;

	for (int m = 0; m < body.count(); ++m)
	{
		Node &member = body[m];
		int i = 0;

		if (member.type != NID_FIELD ||
			member[3].type != NID_LIST) continue;

		// expand fields with more than one declarator
		for (; member[3].count() > 1;)
		{
			// create a new field with the same parameters
			Node *field = new Node(NID_FIELD);
			field->add( new Node(member[0]) );
			field->add( new Node(member[1]) );
			field->add( new Node(member[2]) );
			// move the declarator content from current field to new one
			field->add( new Node(member[3][0][0]) );
			field->add( new Node(member[3][0][1]) );
			// destroy the declarator
			delete member[3].remove(0);
			// add the new field into type body (always before the current one)
			body.add(field, m + i);
			++i;
		}

		// Notice: at this point the current field have one declarator left

		// expand fields with one declarator
		Node *initializer = member[3][0].remove(1);
		Node *identifier  = member[3][0].remove(0);
		delete member.replace(3, *identifier);
		member.add(initializer);
	}
}


void Parser::expandVariables(
	Node &node )
{
	assert(node.type == NID_UNIT ||
		node.type == NID_BLOCK);

	if (node.type == NID_UNIT)
	{
		Node &body = node[2][5];
		if (body.type == NID_NULL) return;

		for (int i = 0, n = body.count(); i < n; ++i)
		{
			Node &member = body[i];

			if (member.type == NID_METHOD || member.type == NID_CONSTRUCTOR)
				expandVariables(member[5]);
		}
	}
	else
	{
		// Notice: we need to compare the counter 'i' with the function 'getChildCount'
		//         because we change the node children inside the loop
		for (int i = 0; i < node.count(); ++i)
		{
			Node &stmt = node[i];

			//std::cout << "Found " << Node::name(stmt.type) << "\n";

			// if we have a block, call recursively
			if (stmt.type == NID_BLOCK) expandVariables(stmt);

			// ignore statements other than unhandled variables
			if (stmt.type != NID_LOCAL || stmt.count() < 2 ||
				stmt[1].type != NID_LIST) continue;

			// expand variables with more than one declarator
			for (; stmt[1].count() > 0;)
			{
				Node &promoted = stmt[1][0];
				promoted.type = NID_LOCAL;
				// promote the declarator to a local variable
				node.add(&promoted, i);
				std::cout << "promoted " << promoted[0].text << " at " << i << std::endl;
				++i;
				promoted.add( new Node(stmt[0]), 0 );
				stmt[1].remove(0);
			}
			// remove the original NID_LOCAL
			node.remove(i--);

			// Notice: at this point the current field have one
			//         variable left, so we let the next code block
			//         handle it.

			// expand fields with one variable
			/*Node &discard = stmt[1];
			stmt.setChild(1, discard[0][0]);
			stmt.add(discard[0][1]);
			discard[0].remove();
			delete &discard[0];
			discard.remove();
			delete &discard;*/
		}
	}
}


} // namespace compiler
} // namespace beagle

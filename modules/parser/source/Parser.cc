#include <beagle-parser/Parser.hh>
#include "beagle.y.hh"
#include "beagle.l.hh"

/**
 * Define the current column in the lexer scanner.
 *
 * For some reason this prototype is not generated in the Flex
 * header file, so we include it here.
 */
void beagle_set_column (int  column_no , yyscan_t yyscanner);

/**
 * @brief Returns the token name from it's constant.
 *
 * This function is defined in the Bison generated parser.
 */
const char *beagle_getTokenName( int tok );

namespace beagle {


beagle::Parser::Parser(
	std::istream *in,
	std::ostream *out,
	const char *fileName )
{
	this->in = in;
	this->out = out;
	buffer = NULL;
	this->fileName = fileName;

	// initialize the lexer
	beagle_lex_init(&scanner);
	readFile();
	beagle_set_lineno(1, scanner);
	beagle_set_column(1, scanner);
	beagle_debug = 0;
}

Parser::~Parser()
{
	if (buffer != NULL)
		beagle__delete_buffer((YY_BUFFER_STATE)buffer, scanner);
	beagle_lex_destroy(scanner);
}


void Parser::tokens()
{
	YYSTYPE temp;
	temp.node = 0;
	int tok;
	while ((tok = beagle_lex(&temp, scanner)) != 0)
	{
		std::cout << temp.node;
		if (tok != TOK_EOL)
			std::cout << " ";
		temp.node = 0;
	}
}

Node *Parser::parse()
{
	Node *root = NULL;

	parser_context_t context;
	context.scanner = scanner;
	context.fileName = fileName;
	context.rule = NULL;
	context.parser = this;

	if (beagle_parse(&context) == 0)
		root = context.stack[ context.stack.size() - 1 ];
	else
		return NULL;

	// expand field declarations
	root = expandFields(root);

	return root;
}

bool Parser::readFile( )
{
	std::stringstream ss;
	std::string line;

	while (std::getline(*in, line))
	{
		// Notice: '\2' is a "begin of line" marker required by
		//         lexer to match some patterns
		ss << '\2';
		ss << line;
		ss << std::endl;
	}

	buffer = beagle__scan_string(ss.str().c_str(), scanner);
}


const char *Parser::name( int tok )
{
	return beagle_getTokenName(tok);
}


Node *Parser::expandFields( Node *root )
{
	if (root == NULL) return NULL;

	Node &body = (*root)[2][5];
	if (body.getType() == TOK_NULL) return root;

	for (int m = 0; m < body.getChildCount(); ++m)
	{
		Node &member = body[m];

		if (member.getType() != TOK_FIELD ||
		    member[3].getType() != TOK_VARIABLES) continue;

		// expand fields with more than one variable
		for (; member[3].getChildCount() > 1;)
		{
			// create a new field with the same parameters
			Node *field = new Node(TOK_FIELD, "");
			field->addChild( *new Node(member[0]) );
			field->addChild( *new Node(member[1]) );
			field->addChild( *new Node(member[2]) );
			// move the variable from current field to new one
			Node *variables = new Node(TOK_VARIABLES, "");
			variables->addChild( member[3][0] );
			member[3].removeChild(0);
			field->addChild(*variables);
			// add the new field into type body
			body.addChild(*field);
		}

		// Notice: at this point the current field have one
		//         variable left, so we let the next code block
		//         handle it.

		// expand fields with one variable
		Node &variable = member[3][0];
		member.setChild(3, variable[0]);
		member.addChild(variable[1]);
		variable.removeChild();
		delete &variable;
	}

	return root;
}

} // namespace beagle

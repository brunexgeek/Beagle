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
	parser_context_t context;
	context.scanner = scanner;
	context.fileName = fileName;
	context.rule = NULL;
	context.parser = this;
	if (beagle_parse(&context) == 0)
		return context.stack[ context.stack.size() - 1 ];
	else
		return NULL;
}

bool Parser::readFile( )
{
	std::stringstream ss;
	std::string line;

	while (std::getline(*in, line))
	{
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

} // namespace beagle

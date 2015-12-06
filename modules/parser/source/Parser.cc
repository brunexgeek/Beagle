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
    SymbolTable table;

	parser_context_t context;
	context.scanner = scanner;
	context.fileName = fileName;
	context.rule = NULL;
	context.parser = this;

	if (beagle_parse(&context) == 0)
		root = context.stack[ context.stack.size() - 1 ];
	else
		return NULL;

    // TODO: load types from import modules
    table.addType("beagle.Integer");

	// expand field declarations
	expandFields(*root);
    // replace names by fully qualified names
    expandNames(*root, table);

	return root;
}

void Parser::readFile( )
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


void Parser::expandNames(
    Node &root,
    SymbolTable &symbols )
{
    return;
    for (int i = 0, n = root.getChildCount(); i < n; ++i)
    {
        Node &item = root[i];

        switch (item.type)
        {
            case TOK_TYPE_CLASS:
                // TODO: check qualified names
                if (item[0].getChildCount() == 0)
                    std::cout << item[0].text << " from " << symbols.resolveType(item[0].text) << std::endl;
                break;
            case TOK_NAME:
                break;
            default:
                expandNames(item, symbols);
        }
    }
}


void Parser::expandFields( Node &root )
{
	Node &body = root[2][5];
	if (body.type == TOK_NULL) return;

	for (int m = 0; m < body.getChildCount(); ++m)
	{
		Node &member = body[m];

		if (member.type != TOK_FIELD ||
		    member[3].type != TOK_VARIABLES) continue;

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
}

} // namespace beagle

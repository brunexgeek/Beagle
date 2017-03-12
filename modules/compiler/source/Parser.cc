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
	beagle_debug = 1;

	parser_context_t context;
	context.lexer = scanner;
	context.fileName = strdup(fileName.c_str());
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

	for (int m = 0; m < body.getChildCount(); ++m)
	{
		Node &member = body[m];
        int i = 1;

		if (member.type != NID_FIELD ||
		    member[3].type != NID_LIST) continue;

		// expand fields with more than one variable
		for (; member[3].getChildCount() > 1;)
		{
			// create a new field with the same parameters
			Node *field = new Node(NID_FIELD, "");
			field->addChild( *new Node(member[0]) );
			field->addChild( *new Node(member[1]) );
			field->addChild( *new Node(member[2]) );
			// move the variable from current field to new one
			Node *variables = new Node(NID_LIST, "");
			variables->addChild( member[3][0] );
			member[3].removeChild(0);
			field->addChild(*variables);
			// add the new field into type body (always after the current one)
			body.addChild(*field, m + i);
            ++i;
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


void Parser::expandVariables(
    Node &node )
{
    assert(node.type == NID_UNIT ||
        node.type == NID_BLOCK);

	if (node.type == NID_UNIT)
    {
        Node &body = node[2][5];
        if (body.type == NID_NULL) return;

        for (int i = 0, n = body.getChildCount(); i < n; ++i)
        {
            Node &member = body[i];

            if ( (member.type != NID_METHOD && member.type != NID_CONSTRUCTOR) ||
                member[6].type != NID_BLOCK) continue;

            // handle the current method body
            expandVariables(member[6]);
        }
    }
    else
    {
        // Notice: we need to compare the counter 'i' with the function 'getChildCount'
        //         because we change the node children inside the loop
        for (int i = 0; i < node.getChildCount(); ++i)
        {
            Node &stmt = node[i];

            //std::cout << "Found " << Node::name(stmt.type) << "\n";

            // if we have a block, call recursively
            if (stmt.type == NID_BLOCK) expandVariables(stmt);

            // ignore statements other than unhandled variables
            if (stmt.type != NID_LOCAL || stmt.getChildCount() < 2 ||
                stmt[1].type != NID_LIST) continue;

            // expand variables with more than one declarator
            for (; stmt[1].getChildCount() > 0;)
            {
                Node &promoted = stmt[1][0];
                promoted.type = NID_LOCAL;
                // promote the declarator to a local variable
                node.addChild(promoted, i);
                std::cout << "promoted " << promoted[0].text << " at " << i << std::endl;
                ++i;
                promoted.addChild( *new Node(stmt[0]), 0 );
                stmt[1].removeChild(0);
            }
            // remove the original NID_LOCAL
            node.removeChild(i--);

            // Notice: at this point the current field have one
            //         variable left, so we let the next code block
            //         handle it.

            // expand fields with one variable
            /*Node &discard = stmt[1];
            stmt.setChild(1, discard[0][0]);
            stmt.addChild(discard[0][1]);
            discard[0].removeChild();
            delete &discard[0];
            discard.removeChild();
            delete &discard;*/
        }
	}
}


} // namespace compiler
} // namespace beagle

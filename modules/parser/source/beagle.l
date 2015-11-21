

%{
#include <string>
#include <cstdio>
#include <sstream>
#include <fstream>
#include <iostream>
#include "lexer.hh"

static bool isIdenting = true;

static int currentIdentSize = 0;

static int lastIdentSize = 0;

static int stepSize = 0;


%}

%option reentrant
%option prefix="beagle_"
%option noyywrap
%option yylineno
%option never-interactive
%option bison-bridge
%option debug
%option 8bit


WHITESPACE				[ \t]+

DECIMAL_LITERAL			[1-9][0-9]*
HEX_LITERAL 			0[xX][0-9a-fA-F]+
OCTAL_LITERAL 			0[0-7]*

INTEGER_LITERAL			({DECIMAL_LITERAL}|{HEX_LITERAL}|{OCTAL_LITERAL})

DECIMAL_EXPONENT		[eE]([+-])?[0-9]+

DECIMAL_FP_LITERAL_1    [0-9]+[.][0-9]*{DECIMAL_EXPONENT}?[FD]?
DECIMAL_FP_LITERAL_2    [.][0-9]+{DECIMAL_EXPONENT}?[FD]?
DECIMAL_FP_LITERAL_3    [0-9]+{DECIMAL_EXPONENT}[FD]?
DECIMAL_FP_LITERAL_4    [0-9]+{DECIMAL_EXPONENT}?[FD]

DECIMAL_FP_LITERAL		({DECIMAL_FP_LITERAL_1}|{DECIMAL_FP_LITERAL_2}|{DECIMAL_FP_LITERAL_3}|{DECIMAL_FP_LITERAL_4})

	/*
	HEXADECIMAL_EXPONENT	["P"] (["+","-"])? (["0"-"9"])+

	HEX_FP_LITERAL_1        0[xX]([0-9a-fA-F])+\.? HEXADECIMAL_EXPONENT ([F,D])?

	HEX_FP_LITERAL_2        0[xX]([0-9a-fA-F])*\.[0-9,a-f,A-F]

	HEXADECIMAL_FLOATING_POINT_LITERAL	( HEX_FP_LITERAL_1 | HEX_FP_LITERAL_2 )+ HEXADECIMAL_EXPONENT (["F","D"])?

	FLOATING_POINT_LITERAL  ( DECIMAL_FLOATING_POINT_LITERAL  | HEXADECIMAL_FLOATING_POINT_LITERAL ) */

HEX_DIGIT 				[A-Fa-f0-9]

CHAR_ESCAPE_LETTER      \\[ntbrf\\'"]
CHAR_ESCAPE_HEX         \\[xX]{HEX_DIGIT}{HEX_DIGIT}?
CHAR_ESCAPE_UTF16		\\u{HEX_DIGIT}{HEX_DIGIT}{HEX_DIGIT}{HEX_DIGIT}
CHAR_ESCAPE             ({CHAR_ESCAPE_LETTER}|{CHAR_ESCAPE_HEX}|{CHAR_ESCAPE_UTF16})

CHARACTER_LITERAL       '([^'\\\n\r]|{CHAR_ESCAPE})'

STRING_LITERAL			\"([^"\\\n\r]|{CHAR_ESCAPE})*\"

IDENTIFIER  			[A-Za-z_][A-Za-z_0-9]*

%%


 /*
  * Consider lines with only white spaces as empty lines
  */
^{WHITESPACE}\n$				{
									yytext[0] = 0;
									return TOK_EOL;
								}

^{WHITESPACE}                   {
									// update last identation size
									lastIdentSize = currentIdentSize;
									// use the match length as new identation size
									currentIdentSize = 0;
									for (int i = 0; i < strlen(yytext); ++i)
										if (yytext[i] == '\t')
											currentIdentSize += 4;
										else
											++currentIdentSize;

									if (stepSize == 0 && currentIdentSize > 0)
									{
										// if we don't have a step, use the current
										// identation size
										stepSize = currentIdentSize;
									}
									else
									{
										// ensures the current identation is
										// valid
										if (currentIdentSize % stepSize)
											YY_FATAL_ERROR("Inconsistent identation");
									}

									// create artifitial braces to mark
									// scope changes
									char symbol = '{';
									if (currentIdentSize < lastIdentSize) symbol = '}';
									int t = abs(currentIdentSize - lastIdentSize) / stepSize;
									for (int c = 0; c < t; ++c)
										unput(symbol);
									std::cerr << lastIdentSize << " -> " << currentIdentSize << "(step is " << stepSize << ")" << std::endl;
								}

{WHITESPACE} 					{ /* just ignore */ }

"\n"							{
									//yytext[0] = 0;
									return TOK_EOL;
								}

<<EOF>>							{
									// if we have a step size we probably need
									// close some scopes
									if (stepSize != 0)
									{
										// create artifitial braces to close
										// remaining scope changes
										int t = currentIdentSize / stepSize;
										for (int c = 0; c < t; ++c)
											unput('}');
										// reset the internal counters
										currentIdentSize = lastIdentSize = stepSize = 0;
									}
									else
										return 0;
								}

"abstract"                      { return TOK_ABSTRACT; }
"bool"                          { return TOK_BOOLEAN; }
"break"                         { return TOK_BREAK; }

"int8"                          { return TOK_INT8 ; }
"int16"                         { return TOK_INT16 ; }
"int32"                         { return TOK_INT32 ; }
"int64"                         { return TOK_INT64 ; }

"uint8"                         { return TOK_UINT8; }
"uint16"                        { return TOK_UINT16; }
"uint32"                        { return TOK_UINT32; }
"uint64"                        { return TOK_UINT64; }

"case"                          { return TOK_CASE; }
"catch"                         { return TOK_CATCH; }
"char"                       	{ return TOK_CHAR; }
"class"                       	{ return TOK_CLASS; }
"const"                       	{ return TOK_CONST; }
"defualt"                       { return TOK_DEFAULT; }
"do"                       		{ return TOK_DO; }
"double"                  	    { return TOK_DOUBLE; }
"else"                       	{ return TOK_ELSE; }
"extends"                       { return TOK_EXTENDS; }
"final"                       	{ return TOK_FINAL; }
"finally"                       { return TOK_FINALLY; }
"float"                    		{ return TOK_FLOAT; }
"for"                       	{ return TOK_FOR; }
"if"                       		{ return TOK_IF; }
"implements"                    { return TOK_IMPLEMENTS; }
"import"                        { return TOK_IMPORT; }
"is"                       		{ return TOK_INSTANCEOF; }
"interface"                     { return TOK_INTERFACE; }
"native"                        { return TOK_NATIVE; }
"new"                           { return TOK_NEW; }
"package"                       { return TOK_PACKAGE; }
"private"                       { return TOK_PRIVATE; }
"protected"                     { return TOK_PROTECTED; }
"public"                        { return TOK_PUBLIC; }
"return"                        { return TOK_RETURN; }

"static"                        { return TOK_STATIC; }
"super"                    	    { return TOK_SUPER; }
"switch"                        { return TOK_SWITCH; }
"this"               	        { return TOK_THIS; }
"throw"                        	{ return TOK_THROW; }
"throws"                        { return TOK_THROWS; }
"void"                      	{ return TOK_VOID; }
"volatile"                      { return TOK_VOLATILE; }
"while"                        	{ return TOK_WHILE; }
"continue"                      { return TOK_CONTINUE; }
"transient"                     { return TOK_TRANSIENT; }
"try"                        	{ return TOK_TRY; }

">"								{ return TOK_GT; }
"<"								{ return TOK_LT; }
">="							{ return TOK_GE; }
"<="							{ return TOK_LE; }
"=="							{ return TOK_EQ; }
"!="							{ return TOK_NE; }
"("								{ return TOK_LP; }
")"								{ return TOK_RP; }
"["								{ return TOK_LB; }
"]"								{ return TOK_RB; }
"{"								{ return TOK_LC; }
"}"								{ return TOK_RC; }
"&&"							{ return TOK_ANDAND; }
"||"							{ return TOK_OROR; }
"++"							{ return TOK_INC; }
"--"							{ return TOK_DEC; }
"+"								{ return TOK_PLUS; }
"-"								{ return TOK_MINUS; }
"*"								{ return TOK_MUL; }
"/"								{ return TOK_DIV; }
"&"								{ return TOK_AND; }
"|"								{ return TOK_OR; }
"^"								{ return TOK_CARET; }

"%"                             { return TOK_MOD; }
"<<"							{ return TOK_SHL; }
">>"							{ return TOK_SHR; }
"+="							{ return TOK_PLASN; }
"-="							{ return TOK_MIASN; }
"*="							{ return TOK_MUASN; }
"/="							{ return TOK_DIASN; }
"&="							{ return TOK_ANDASN; }
"|="							{ return TOK_ORASN; }
"^="							{ return TOK_CARETASN; }

"<<="							{ return TOK_SLASN; }
">>="							{ return TOK_SRASN; }
"%="							{ return TOK_MODASN; }

";"								{ return TOK_SM; }
","								{ return TOK_CM; }
"."								{ return TOK_DOT; }
"="								{ return TOK_ASN; }
"!" 							{ return TOK_BANG; }
"~"								{ return TOK_TILDE; }
"?"								{ return TOK_QUEST; }
":"								{ return TOK_COLON; }

{INTEGER_LITERAL}  				{
									if (yylval != NULL) yylval->node = strdup(yytext);
									return TOK_INTLITERAL;
								}
{DECIMAL_FP_LITERAL} 			{
									if (yylval != NULL) yylval->node = strdup(yytext);
									return TOK_FLOATLITERAL; }
{CHARACTER_LITERAL} 			{
									if (yylval != NULL) yylval->node = strdup(yytext);
									return TOK_CHARLITERAL;
								}
{STRING_LITERAL} 				{
									if (yylval != NULL) yylval->node = strdup(yytext);
									return TOK_STRINGLITERAL;
								}
{IDENTIFIER} 					{
									if (yylval != NULL) yylval->node = strdup(yytext);
									return TOK_IDENT;
								}

. 								{ return TOK_BAD_TOKEN; }


%%

#line 256 "/media/dados/projetos/Beagle/modules/parser/source/beagle.l"
namespace beagle
{

	Scanner::Scanner(
		std::istream *in,
		std::ostream *out )
	{
		this->in = in;
		this->out = out;
		buffer = NULL;

		// initialize the lexer
		beagle_lex_init(&scanner);
		readFile();
		beagle_set_lineno(1, scanner);
		beagle_set_column(1, scanner);
	}

	Scanner::~Scanner()
	{
		if (buffer != NULL)
			beagle__delete_buffer(buffer, scanner);
		beagle_lex_destroy(scanner);
	}

	void Scanner::set_debug(bool b)
	{
		beagle_set_debug( b, scanner);
	}


	int Scanner::next( YYSTYPE *value )
	{
		if (buffer == NULL) return 0;
		return beagle_lex(value, scanner);
	}

	const char *Scanner::getText( ) const
	{
		return beagle_get_text(scanner);
	}


	bool Scanner::readFile( )
	{
		std::stringstream ss;
		std::string line;

		while (std::getline(*in, line))
		{
			ss << line;
			ss << std::endl;
		}

		buffer = beagle__scan_string(ss.str().c_str(), scanner);
	}

} // namespace beagle


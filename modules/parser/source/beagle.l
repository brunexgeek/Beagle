

%{
#include <string>
#include <cstdio>
#include <sstream>
#include <fstream>
#include <iostream>
#include "beagle.y.hh"

static int currentIndentSize = 0;

static int stepSize = 0;

static bool isEmptyLine = true;

static const char *beagle_getTokenText( int tok, const char *text )
{
	switch (tok)
	{
		case TOK_INDENT:
			return "TOK_INDENT";
		case TOK_DEDENT:
			return "TOK_DEDENT";
		case TOK_EOL:
			return "<<EOL>>\n";
		default:
			return text;
	}
}

#define EMIT(tok)                                                    \
    do {                                                             \
        yylval->node = strdup(beagle_getTokenText((tok), yytext));    \
		isEmptyLine = ((tok) == TOK_EOL) | ((tok) == TOK_DEDENT);    \
		return (tok); } while (0)

%}

%option reentrant
%option prefix="beagle_"
%option noyywrap
%option never-interactive
%option bison-bridge
%option debug
%option 8bit

 /*
  * We use the special character '\2' as begin of line marker.
  */
BOL                     "\2"
DEDENT                  "\1"
WHITESPACE              [ \t]
ESCAPE_LINE             "\\"{WHITESPACE}*"\n"{BOL}?{WHITESPACE}*

DECIMAL_LITERAL         [1-9][0-9]*
HEX_LITERAL             0[xX][0-9a-fA-F]+
OCTAL_LITERAL           0[0-7]*

INTEGER_LITERAL         ({DECIMAL_LITERAL}|{HEX_LITERAL}|{OCTAL_LITERAL})

DECIMAL_EXPONENT        [eE]([+-])?[0-9]+

DECIMAL_FP_LITERAL_1    [0-9]+[.][0-9]*{DECIMAL_EXPONENT}?[FD]?
DECIMAL_FP_LITERAL_2    [.][0-9]+{DECIMAL_EXPONENT}?[FD]?
DECIMAL_FP_LITERAL_3    [0-9]+{DECIMAL_EXPONENT}[FD]?
DECIMAL_FP_LITERAL_4    [0-9]+{DECIMAL_EXPONENT}?[FD]

DECIMAL_FP_LITERAL      ({DECIMAL_FP_LITERAL_1}|{DECIMAL_FP_LITERAL_2}|{DECIMAL_FP_LITERAL_3}|{DECIMAL_FP_LITERAL_4})

    /*
    HEXADECIMAL_EXPONENT    ["P"] (["+","-"])? (["0"-"9"])+

    HEX_FP_LITERAL_1        0[xX]([0-9a-fA-F])+\.? HEXADECIMAL_EXPONENT ([F,D])?

    HEX_FP_LITERAL_2        0[xX]([0-9a-fA-F])*\.[0-9,a-f,A-F]

    HEXADECIMAL_FLOATING_POINT_LITERAL  ( HEX_FP_LITERAL_1 | HEX_FP_LITERAL_2 )+ HEXADECIMAL_EXPONENT (["F","D"])?

    FLOATING_POINT_LITERAL  ( DECIMAL_FLOATING_POINT_LITERAL  | HEXADECIMAL_FLOATING_POINT_LITERAL ) */

HEX_DIGIT               [A-Fa-f0-9]

CHAR_ESCAPE_LETTER      \\[ntbrf\\'"]
CHAR_ESCAPE_HEX         \\[xX]{HEX_DIGIT}{HEX_DIGIT}?
CHAR_ESCAPE_UTF16       \\u{HEX_DIGIT}{HEX_DIGIT}{HEX_DIGIT}{HEX_DIGIT}
CHAR_ESCAPE             ({CHAR_ESCAPE_LETTER}|{CHAR_ESCAPE_HEX}|{CHAR_ESCAPE_UTF16})

CHARACTER_LITERAL       '([^'\\\n\r]|{CHAR_ESCAPE})'

STRING_LITERAL          \"([^"\\\n\r]|{CHAR_ESCAPE})*\"

IDENTIFIER              [A-Za-z_][A-Za-z_0-9]*

%s IN_COMMENT

%%


<INITIAL>({BOL}{WHITESPACE}*"/*")  {
	BEGIN(IN_COMMENT);
}

<INITIAL>({WHITESPACE}*"/*")  {
	BEGIN(IN_COMMENT);
}

<IN_COMMENT>("*/"){WHITESPACE}*"\n"  {

	if (!isEmptyLine)
		unput('\n');
	else
		yylineno++;
	BEGIN(INITIAL);
}
<IN_COMMENT>("*/"){WHITESPACE}*              { BEGIN(INITIAL); }
<IN_COMMENT>([^*\n]+)           { /* eat comment in chunks */ }
<IN_COMMENT>("*")               { /* eat the lone star */ }
<IN_COMMENT>(\n)                { yylineno++; }

{BOL}{WHITESPACE}*"//"[^\n]*"\n"  {
	// discards everything
	yylineno++;
}

{WHITESPACE}*"//"[^\n]*"\n"  {
	// discard the comments, but keeps the
	// end of line in the stream
	unput('\n');
}


{DEDENT}                        {
									//std::cerr << "====== " << currentIndentSize << " -> " << currentIndentSize - stepSize << " (step is " << stepSize << ")" << std::endl;
									currentIndentSize -= stepSize;
									EMIT(TOK_DEDENT);
								}

 /*
  * Lines with only white spaces are empty lines
  */
{BOL}{WHITESPACE}*"\n"          {
									yylineno++;
									if (!isEmptyLine)
										EMIT(TOK_EOL);
                                }

{BOL}{WHITESPACE}*              {
                                    if (isEmptyLine)
                                    {
										// use the match (length-1) as new identation size
										int indent = 0;
										for (int i = 1; i < strlen(yytext); ++i)
										{
											if (yytext[i] == '\t')
												indent += 4;
											else
												++indent;
										}

										if (indent != currentIndentSize)
										{

											if (stepSize == 0)
											{
												// if we don't have a step, use the current
												// indentation size
												stepSize = indent;
											}

											//std::cerr << "====== " << currentIndentSize << " -> " << indent << " (step is " << stepSize << ")" << std::endl;

											// compute the difference between current and new indentantion
											int diff = indent - currentIndentSize;

											// valid indentations are an increment of stepSize (TOK_INDENT) or
											// a decrement of any multipe of stepSize (TOK_DEDENT)

											// check if we have a valid increment indentation
											if (diff == stepSize)
											{
												currentIndentSize += stepSize;
												EMIT(TOK_INDENT);
											}
											else
											if (diff < 0 && (abs(diff) % stepSize) == 0)
											{
												diff = abs(diff) / stepSize - 1;

												// insert a special character to emit the remaining TOK_DEDENT
												// later
												for (int i = 0; i < diff; ++i)
													unput('\1');

												currentIndentSize -= stepSize;
												EMIT(TOK_DEDENT);
											}

											// indentation changed, but is invalid
											std::cerr << "Error at line " << yylineno;
											YY_FATAL_ERROR(": inconsistent identation");
										}
									}
                                }

<<EOF>>                           {
									// close all remaining scopes
                                    if (currentIndentSize > 0)
                                    {
										int count = currentIndentSize / stepSize;
										// if we have more than one remaining scope, insert
										// the special character to close them later
										if (count > 1)
											for (int i = 0; i < count-1; ++i)
												unput('\1');
										currentIndentSize -= stepSize;
										EMIT(TOK_DEDENT);
                                    }
                                    else
										yyterminate();
							   }

{ESCAPE_LINE}                   {
                                    /*
                                     * Ignore the EOL and remaining white spaces after
                                     * the slash, merging the current and next lines.
                                     */
                                     yylineno++;
                                }

{WHITESPACE}                    { /* just ignore remaining white spaces */ }
"\n"                            { yylineno++; EMIT(TOK_EOL); }

"abstract"                      { EMIT(TOK_ABSTRACT); }
"bool"                          { EMIT(TOK_BOOLEAN); }
"break"                         { EMIT(TOK_BREAK); }

"int8"                          { EMIT(TOK_INT8); }
"int16"                         { EMIT(TOK_INT16); }
"int32"                         { EMIT(TOK_INT32); }
"int64"                         { EMIT(TOK_INT64); }

"uint8"                         { EMIT(TOK_UINT8); }
"uint16"                        { EMIT(TOK_UINT16); }
"uint32"                        { EMIT(TOK_UINT32); }
"uint64"                        { EMIT(TOK_UINT64); }

"int"                           { EMIT(TOK_INT); }
"long"                          { EMIT(TOK_LONG); }
"char"                          { EMIT(TOK_CHAR); }

"case"                          { EMIT(TOK_CASE); }
"catch"                         { EMIT(TOK_CATCH); }
"class"                         { EMIT(TOK_CLASS); }
"const"                         { EMIT(TOK_CONST); }
"default"                       { EMIT(TOK_DEFAULT); }
"do"                            { EMIT(TOK_DO); }
"double"                        { EMIT(TOK_DOUBLE); }
"else"                          { EMIT(TOK_ELSE); }
"extends"                       { EMIT(TOK_EXTENDS); }
"final"                         { EMIT(TOK_FINAL); }
"finally"                       { EMIT(TOK_FINALLY); }
"float"                         { EMIT(TOK_FLOAT); }
"for"                           { EMIT(TOK_FOR); }
"if"                            { EMIT(TOK_IF); }
"implements"                    { EMIT(TOK_IMPLEMENTS); }
"import"                        { EMIT(TOK_IMPORT); }
"is"                            { EMIT(TOK_INSTANCEOF); }
"interface"                     { EMIT(TOK_INTERFACE); }
"native"                        { EMIT(TOK_NATIVE); }
"new"                           { EMIT(TOK_NEW); }
"package"                       { EMIT(TOK_PACKAGE); }
"private"                       { EMIT(TOK_PRIVATE); }
"protected"                     { EMIT(TOK_PROTECTED); }
"public"                        { EMIT(TOK_PUBLIC); }
"return"                        { EMIT(TOK_RETURN); }
"readlock"                      { EMIT(TOK_READLOCK); }
"writelock"                     { EMIT(TOK_WRITELOCK); }
"in"                            { EMIT(TOK_IN); }
"range"                         { EMIT(TOK_RANGE); }
"pass"                          { EMIT(TOK_PASS); }

"static"                        { EMIT(TOK_STATIC); }
"super"                         { EMIT(TOK_SUPER); }
"switch"                        { EMIT(TOK_SWITCH); }
"this"                          { EMIT(TOK_THIS); }
"throw"                         { EMIT(TOK_THROW); }
"throws"                        { EMIT(TOK_THROWS); }
"void"                          { EMIT(TOK_VOID); }
"volatile"                      { EMIT(TOK_VOLATILE); }
"while"                         { EMIT(TOK_WHILE); }
"continue"                      { EMIT(TOK_CONTINUE); }
"transient"                     { EMIT(TOK_TRANSIENT); }
"try"                           { EMIT(TOK_TRY); }
"vararg"                        { EMIT(TOK_VARARG); }

">"                             { EMIT(TOK_GT); }
"<"                             { EMIT(TOK_LT); }
">="                            { EMIT(TOK_GE); }
"<="                            { EMIT(TOK_LE); }
"=="                            { EMIT(TOK_EQ); }
"!="                            { EMIT(TOK_NE); }
"("                             { EMIT(TOK_LP); }
")"                             { EMIT(TOK_RP); }
"["                             { EMIT(TOK_LB); }
"]"                             { EMIT(TOK_RB); }
"{"                             { EMIT(TOK_LC); }
"}"                             { EMIT(TOK_RC); }
"&&"                            { EMIT(TOK_ANDAND); }
"||"                            { EMIT(TOK_OROR); }
"++"                            { EMIT(TOK_INC); }
"--"                            { EMIT(TOK_DEC); }
"+"                             { EMIT(TOK_PLUS); }
"-"                             { EMIT(TOK_MINUS); }
"*"                             { EMIT(TOK_MUL); }
"/"                             { EMIT(TOK_DIV); }
"&"                             { EMIT(TOK_AND); }
"|"                             { EMIT(TOK_OR); }
"^"                             { EMIT(TOK_CARET); }

"%"                             { EMIT(TOK_MOD); }
"<<"                            { EMIT(TOK_SHL); }
">>"                            { EMIT(TOK_SHR); }
"+="                            { EMIT(TOK_PLASN); }
"-="                            { EMIT(TOK_MIASN); }
"*="                            { EMIT(TOK_MUASN); }
"/="                            { EMIT(TOK_DIASN); }
"&="                            { EMIT(TOK_ANDASN); }
"|="                            { EMIT(TOK_ORASN); }
"^="                            { EMIT(TOK_CARETASN); }

"<<="                           { EMIT(TOK_SLASN); }
">>="                           { EMIT(TOK_SRASN); }
"%="                            { EMIT(TOK_MODASN); }

";"                             { EMIT(TOK_SM); }
","                             { EMIT(TOK_CM); }
"."                             { EMIT(TOK_DOT); }
"="                             { EMIT(TOK_ASN); }
"!"                             { EMIT(TOK_BANG); }
"~"                             { EMIT(TOK_TILDE); }
"?"                             { EMIT(TOK_QUEST); }
":"                             { EMIT(TOK_COLON); }
"@"                             { EMIT(TOK_AT); }

{INTEGER_LITERAL}               { EMIT(TOK_INTLITERAL); }
{DECIMAL_FP_LITERAL}            { EMIT(TOK_FLOATLITERAL); }
{CHARACTER_LITERAL}             { EMIT(TOK_CHARLITERAL); }
{STRING_LITERAL}                { EMIT(TOK_STRINGLITERAL); }
{IDENTIFIER}                    { EMIT(TOK_IDENT); }

.                               { EMIT(TOK_BAD_TOKEN); }


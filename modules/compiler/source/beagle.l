

%{
#include <string>
#include <cstdio>
#include <sstream>
#include <fstream>
#include <iostream>
#include "beagle.y.hh"
#include "Token.hh"
#include "LexerContext.hh"

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


#define CONTEXT() ( (LexerContext*) beagle_get_extra(yyscanner) )

#define EMIT(id) \
	do {                                                                         \
		yylval->token = new Token((id), beagle_getTokenText( (id), yytext ) );   \
		   CONTEXT()->isEmptyLine = ((id) == TOK_EOL) | ((id) == TOK_DEDENT);    \
		return id;                                                               \
	} while (0)

#define EMIT_TEXT(id, text) \
	do {                                                                         \
		yylval->token = new Token( (id), (text) );   \
		   CONTEXT()->isEmptyLine = ((id) == TOK_EOL) | ((id) == TOK_DEDENT);    \
		return id;                                                               \
	} while (0)

#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wsign-compare"

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

HEX_DIGIT               [A-Fa-f0-9]

U1                      [\x00-\x7F]
U2                      [\xC0-\xDF][\x80-\xBF]
U3                      [\xE0-\xEF][\x80-\xBF][\x80-\xBF]
U4                      [\xF0-\xF7][\x80-\xBF][\x80-\xBF][\x80-\xBF]

UTF8_CHAR               ({U1}|{U2}|{U3}|{U4})
ASCII_CHAR              U1

CHAR_ESCAPE_LETTER      \\[ntbrf\\'"]
CHAR_ESCAPE_HEX         \\[xX]{HEX_DIGIT}{HEX_DIGIT}?
CHAR_ESCAPE_UTF16       \\u{HEX_DIGIT}{HEX_DIGIT}{HEX_DIGIT}{HEX_DIGIT}
CHAR_ESCAPE             ({CHAR_ESCAPE_LETTER}|{CHAR_ESCAPE_HEX}|{CHAR_ESCAPE_UTF16})

IDENTIFIER              [A-Za-z_][A-Za-z_0-9]*

%s IN_COMMENT
%s STATE_STRING

%%


<INITIAL>({BOL}{WHITESPACE}*"/*")  {
	BEGIN(IN_COMMENT);
}

<INITIAL>({WHITESPACE}*"/*")  {
	BEGIN(IN_COMMENT);
}

<IN_COMMENT>("*/"){WHITESPACE}*"\n"  {

	if (!CONTEXT()->isEmptyLine)
		unput('\n');
	else
		yylineno++;
	BEGIN(INITIAL);
}

<IN_COMMENT>("*/"){WHITESPACE}* {
	BEGIN(INITIAL);
}

<IN_COMMENT>([^*\n]+) {
	/* eat comment in chunks */
}

<IN_COMMENT>("*") {
	/* eat the lone star */
}

<IN_COMMENT>(\n) {
	yylineno++;
}

<INITIAL>{BOL}{WHITESPACE}*"//"[^\n]*"\n"  {
	// discards everything
	yylineno++;
}

<INITIAL>{WHITESPACE}*"//"[^\n]*"\n"  {
	// discard the comments, but keeps the
	// end of line in the stream
	unput('\n');
}


<INITIAL>{DEDENT} {
	//std::cerr << "====== " << currentIndentSize << " -> " << currentIndentSize - stepSize << " (step is " << stepSize << ")" << std::endl;
	CONTEXT()->currentIndentSize -= CONTEXT()->stepSize;
	EMIT(TOK_DEDENT);
}

 /*
  * Lines with only white spaces are empty lines
  */
<INITIAL>{BOL}{WHITESPACE}*"\n" {
	yylineno++;
	if (!CONTEXT()->isEmptyLine)
		EMIT(TOK_EOL);
}

<INITIAL>{BOL}{WHITESPACE}* {
	if (CONTEXT()->isEmptyLine)
	{
		// use the match (length-1) as new identation size
		int indent = 0;
		for (size_t i = 1; i < strlen(yytext); ++i)
		{
			if (yytext[i] == '\t')
				indent += 4;
			else
				++indent;
		}

		if (indent != CONTEXT()->currentIndentSize)
		{

			if (CONTEXT()->stepSize == 0)
			{
				// if we don't have a step, use the current
				// indentation size
				CONTEXT()->stepSize = indent;
			}

			//std::cerr << "====== " << CONTEXT()->currentIndentSize << " -> " << indent << " (step is " << CONTEXT()->stepSize << ")" << std::endl;

			// compute the difference between current and new indentantion
			int diff = indent - CONTEXT()->currentIndentSize;

			// valid indentations are increments of stepSize (TOK_INDENT) or
			// decrements of any multiple of stepSize (TOK_DEDENT)

			// check if we have a valid increment indentation
			if (diff == CONTEXT()->stepSize)
			{
				CONTEXT()->currentIndentSize += CONTEXT()->stepSize;
				EMIT(TOK_INDENT);
			}
			else
			if (diff < 0 && (abs(diff) % CONTEXT()->stepSize) == 0)
			{
				diff = abs(diff) / CONTEXT()->stepSize - 1;

				// insert a special character to emit the remaining TOK_DEDENT
				// later
				for (int i = 0; i < diff; ++i)
					unput('\1');

				CONTEXT()->currentIndentSize -= CONTEXT()->stepSize;
				EMIT(TOK_DEDENT);
			}
			else
			{
				// indentation changed, but is invalid
				std::cerr << "Error at line " << yylineno;
				YY_FATAL_ERROR(": inconsistent identation");
			}
		}
	}
}

<<EOF>> {
	// close all remaining scopes
	if (CONTEXT()->currentIndentSize > 0)
	{
		int count = CONTEXT()->currentIndentSize / CONTEXT()->stepSize;
		// if we have more than one remaining scope, insert
		// the special character to close them later
		if (count > 1)
			for (int i = 0; i < count-1; ++i)
				unput('\1');
		CONTEXT()->currentIndentSize -= CONTEXT()->stepSize;
		EMIT(TOK_DEDENT);
	}
	else
		yyterminate();
}

<INITIAL>{ESCAPE_LINE} {
	/*
	* Ignore the EOL and remaining white spaces after
	* the slash, merging the current and next lines.
	*/
	yylineno++;
}

<INITIAL>{WHITESPACE}                    { /* just ignore remaining white spaces */ }
<INITIAL>"\n"                            { yylineno++; EMIT(TOK_EOL); }

<INITIAL>"int8"                          { EMIT(TOK_INT8); }
<INITIAL>"int16"                         { EMIT(TOK_INT16); }
<INITIAL>"int32"                         { EMIT(TOK_INT32); }
<INITIAL>"int64"                         { EMIT(TOK_INT64); }

<INITIAL>"uint8"                         { EMIT(TOK_UINT8); }
<INITIAL>"uint16"                        { EMIT(TOK_UINT16); }
<INITIAL>"uint32"                        { EMIT(TOK_UINT32); }
<INITIAL>"uint64"                        { EMIT(TOK_UINT64); }

<INITIAL>"float"                         { EMIT(TOK_FLOAT); }
<INITIAL>"double"                        { EMIT(TOK_DOUBLE); }

<INITIAL>"abstract"                      { EMIT(TOK_ABSTRACT); }
<INITIAL>"bool"                          { EMIT(TOK_BOOLEAN); }
<INITIAL>"break"                         { EMIT(TOK_BREAK); }
<INITIAL>"case"                          { EMIT(TOK_CASE); }
<INITIAL>"catch"                         { EMIT(TOK_CATCH); }
<INITIAL>"class"                         { EMIT(TOK_CLASS); }
<INITIAL>"const"                         { EMIT(TOK_CONST); }
<INITIAL>"default"                       { EMIT(TOK_DEFAULT); }
<INITIAL>"do"                            { EMIT(TOK_DO); }
<INITIAL>"else"                          { EMIT(TOK_ELSE); }
<INITIAL>"extends"                       { EMIT(TOK_EXTENDS); }
<INITIAL>"final"                         { EMIT(TOK_FINAL); }
<INITIAL>"finally"                       { EMIT(TOK_FINALLY); }
<INITIAL>"for"                           { EMIT(TOK_FOR); }
<INITIAL>"if"                            { EMIT(TOK_IF); }
<INITIAL>"implements"                    { EMIT(TOK_IMPLEMENTS); }
<INITIAL>"import"                        { EMIT(TOK_IMPORT); }
<INITIAL>"is"                            { EMIT(TOK_INSTANCEOF); }
<INITIAL>"interface"                     { EMIT(TOK_INTERFACE); }
<INITIAL>"native"                        { EMIT(TOK_NATIVE); }
<INITIAL>"new"                           { EMIT(TOK_NEW); }
<INITIAL>"package"                       { EMIT(TOK_PACKAGE); }
<INITIAL>"private"                       { EMIT(TOK_PRIVATE); }
<INITIAL>"protected"                     { EMIT(TOK_PROTECTED); }
<INITIAL>"public"                        { EMIT(TOK_PUBLIC); }
<INITIAL>"return"                        { EMIT(TOK_RETURN); }
<INITIAL>"readlock"                      { EMIT(TOK_READLOCK); }
<INITIAL>"writelock"                     { EMIT(TOK_WRITELOCK); }
<INITIAL>"in"                            { EMIT(TOK_IN); }
<INITIAL>"range"                         { EMIT(TOK_RANGE); }
<INITIAL>"pass"                          { EMIT(TOK_PASS); }

<INITIAL>"static"                        { EMIT(TOK_STATIC); }
<INITIAL>"super"                         { EMIT(TOK_SUPER); }
<INITIAL>"switch"                        { EMIT(TOK_SWITCH); }
<INITIAL>"this"                          { EMIT(TOK_THIS); }
<INITIAL>"throw"                         { EMIT(TOK_THROW); }
<INITIAL>"throws"                        { EMIT(TOK_THROWS); }
<INITIAL>"void"                          { EMIT(TOK_VOID); }
<INITIAL>"volatile"                      { EMIT(TOK_VOLATILE); }
<INITIAL>"while"                         { EMIT(TOK_WHILE); }
<INITIAL>"continue"                      { EMIT(TOK_CONTINUE); }
<INITIAL>"try"                           { EMIT(TOK_TRY); }
<INITIAL>"vararg"                        { EMIT(TOK_VARARG); }

<INITIAL>">"                             { EMIT(TOK_GT); }
<INITIAL>"<"                             { EMIT(TOK_LT); }
<INITIAL>">="                            { EMIT(TOK_GE); }
<INITIAL>"<="                            { EMIT(TOK_LE); }
<INITIAL>"=="                            { EMIT(TOK_EQ); }
<INITIAL>"!="                            { EMIT(TOK_NE); }
<INITIAL>"("                             { EMIT(TOK_LP); }
<INITIAL>")"                             { EMIT(TOK_RP); }
<INITIAL>"["                             { EMIT(TOK_LB); }
<INITIAL>"]"                             { EMIT(TOK_RB); }
<INITIAL>"{"                             { EMIT(TOK_LC); }
<INITIAL>"}"                             { EMIT(TOK_RC); }
<INITIAL>"and"                           { EMIT(TOK_ANDAND); }
<INITIAL>"or"                            { EMIT(TOK_OROR); }
<INITIAL>"++"                            { EMIT(TOK_INC); }
<INITIAL>"--"                            { EMIT(TOK_DEC); }
<INITIAL>"+"                             { EMIT(TOK_PLUS); }
<INITIAL>"-"                             { EMIT(TOK_MINUS); }
<INITIAL>"*"                             { EMIT(TOK_MUL); }
<INITIAL>"/"                             { EMIT(TOK_DIV); }
<INITIAL>"&"                             { EMIT(TOK_AND); }
<INITIAL>"|"                             { EMIT(TOK_OR); }
<INITIAL>"^"                             { EMIT(TOK_CARET); }

<INITIAL>"%"                             { EMIT(TOK_MOD); }
<INITIAL>"<<"                            { EMIT(TOK_SHL); }
<INITIAL>">>"                            { EMIT(TOK_SHR); }
<INITIAL>"+="                            { EMIT(TOK_PLASN); }
<INITIAL>"-="                            { EMIT(TOK_MIASN); }
<INITIAL>"*="                            { EMIT(TOK_MUASN); }
<INITIAL>"/="                            { EMIT(TOK_DIASN); }
<INITIAL>"&="                            { EMIT(TOK_ANDASN); }
<INITIAL>"|="                            { EMIT(TOK_ORASN); }
<INITIAL>"^="                            { EMIT(TOK_CARETASN); }

<INITIAL>"<<="                           { EMIT(TOK_SLASN); }
<INITIAL>">>="                           { EMIT(TOK_SRASN); }
<INITIAL>"%="                            { EMIT(TOK_MODASN); }

<INITIAL>";"                             { EMIT(TOK_SM); }
<INITIAL>","                             { EMIT(TOK_CM); }
<INITIAL>"."                             { EMIT(TOK_DOT); }
<INITIAL>"="                             { EMIT(TOK_ASN); }
<INITIAL>"!"                             { EMIT(TOK_BANG); }
<INITIAL>"~"                             { EMIT(TOK_TILDE); }
<INITIAL>"?"                             { EMIT(TOK_QUEST); }
<INITIAL>":"                             { EMIT(TOK_COLON); }
<INITIAL>"@"                             { EMIT(TOK_AT); }

<INITIAL>{INTEGER_LITERAL}               { EMIT(TOK_INTLITERAL); }
<INITIAL>{DECIMAL_FP_LITERAL}            { EMIT(TOK_FLOATLITERAL); }

<INITIAL>"'"|"\"" {
	bool escape = false;
	char type = yytext[0];
	std::string text;

	while (true)
	{
		char current = yyinput(yyscanner);

		if (current == 0 || current == '\n')
		{
			std::cerr << "Error at line " << yylineno;
			YY_FATAL_ERROR(": unterminated string literal");
		}

		if (!escape && current == type) break;

		escape = (current == '\\');
		if (!escape)
		{
			text += current;
			continue;
		}
		else
			escape = false;
	}

	EMIT_TEXT(TOK_STRINGLITERAL, text.c_str());
}

<INITIAL>{IDENTIFIER} {
	EMIT(TOK_NAME);
}

. {
	EMIT(TOK_BAD_TOKEN);
}


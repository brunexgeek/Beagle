/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_COMPILER_SOURCE_BEAGLE_Y_HH_INCLUDED
# define YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_COMPILER_SOURCE_BEAGLE_Y_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int beagle_debug;
#endif
/* "%code requires" blocks.  */
#line 7 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1909  */



#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <beagle-loader/Node.hh>
#include <beagle-compiler/Parser.hh>
#include "Token.hh"


/*
 * The parser need to know about the 'yyscan_t' type,
 * but the generated header by Flex don't provide this information.
 */
typedef void *yyscan_t;


typedef struct
{
	yyscan_t lexer;

	std::vector<beagle::loader::Node*> stack;

	std::string fileName;

	const char *rule;

	beagle::compiler::Parser *parser;

} parser_context_t;


/**
 * Get the current column in the lexer scanner.
 *
 * For some reason this prototype is not generated in the Flex
 * header file, so we include it here.
 */
int beagle_get_column  (yyscan_t yyscanner);


#line 88 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.hh" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_ABSTRACT = 258,
    TOK_BOOLEAN = 259,
    TOK_BREAK = 260,
    TOK_CASE = 261,
    TOK_CATCH = 262,
    TOK_CHAR = 263,
    TOK_CLASS = 264,
    TOK_CONST = 265,
    TOK_DEFAULT = 266,
    TOK_DO = 267,
    TOK_DOUBLE = 268,
    TOK_ELSE = 269,
    TOK_ELIF = 270,
    TOK_EXTENDS = 271,
    TOK_FINALLY = 272,
    TOK_FLOAT = 273,
    TOK_FOR = 274,
    TOK_GOTO = 275,
    TOK_IF = 276,
    TOK_IMPLEMENTS = 277,
    TOK_IMPORT = 278,
    TOK_INSTANCEOF = 279,
    TOK_INTERFACE = 280,
    TOK_LONG = 281,
    TOK_NATIVE = 282,
    TOK_NEW = 283,
    TOK_PACKAGE = 284,
    TOK_PRIVATE = 285,
    TOK_PROTECTED = 286,
    TOK_PUBLIC = 287,
    TOK_RETURN = 288,
    TOK_SUSPEND = 289,
    TOK_STATIC = 290,
    TOK_SUPER = 291,
    TOK_SWITCH = 292,
    TOK_READLOCK = 293,
    TOK_WRITELOCK = 294,
    TOK_THIS = 295,
    TOK_THROW = 296,
    TOK_VOID = 297,
    TOK_VOLATILE = 298,
    TOK_WHILE = 299,
    TOK_NAME = 300,
    TOK_QNAME = 301,
    TOK_CONTINUE = 302,
    TOK_TRY = 303,
    TOK_NLITERAL = 304,
    TOK_BLITERAL = 305,
    TOK_ILITERAL = 306,
    TOK_CLITERAL = 307,
    TOK_FLITERAL = 308,
    TOK_SLITERAL = 309,
    TOK_UINT8 = 310,
    TOK_UINT16 = 311,
    TOK_UINT32 = 312,
    TOK_UINT64 = 313,
    TOK_INT8 = 314,
    TOK_INT16 = 315,
    TOK_INT32 = 316,
    TOK_INT64 = 317,
    TOK_LP = 318,
    TOK_RP = 319,
    TOK_LC = 320,
    TOK_RC = 321,
    TOK_LB = 322,
    TOK_RB = 323,
    TOK_SM = 324,
    TOK_CM = 325,
    TOK_DOT = 326,
    TOK_ASN = 327,
    TOK_LT = 328,
    TOK_GT = 329,
    TOK_BANG = 330,
    TOK_TILDE = 331,
    TOK_QUEST = 332,
    TOK_COLON = 333,
    TOK_EQ = 334,
    TOK_NE = 335,
    TOK_LE = 336,
    TOK_GE = 337,
    TOK_AND = 338,
    TOK_OR = 339,
    TOK_INC = 340,
    TOK_DEC = 341,
    TOK_PLUS = 342,
    TOK_MINUS = 343,
    TOK_MUL = 344,
    TOK_DIV = 345,
    TOK_BAND = 346,
    TOK_BOR = 347,
    TOK_CARET = 348,
    TOK_MOD = 349,
    TOK_SHL = 350,
    TOK_SHR = 351,
    TOK_PLASN = 352,
    TOK_MIASN = 353,
    TOK_MUASN = 354,
    TOK_DIASN = 355,
    TOK_ANDASN = 356,
    TOK_ORASN = 357,
    TOK_CARETASN = 358,
    TOK_SLASN = 359,
    TOK_SRASN = 360,
    TOK_MODASN = 361,
    TOK_BAD_TOKEN = 362,
    TOK_EOL = 363,
    TOK_AT = 364,
    TOK_VARARG = 365,
    TOK_INDENT = 366,
    TOK_DEDENT = 367,
    TOK_IN = 368,
    TOK_RANGE = 369,
    TOK_PASS = 370,
    TOK_NULLABLE = 371
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 202 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1909  */

	Token* token;

#line 221 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.hh" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_COMPILER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

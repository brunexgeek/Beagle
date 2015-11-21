/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_PARSER_HH_INCLUDED
# define YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_PARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int beagle_debug;
#endif
/* "%code requires" blocks.  */
#line 15 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1909  */



#include <fstream>
#include <iostream>
#include <sstream>

namespace beagle
{

	class Parser
	{
		public:
			Parser(
				std::istream* in = NULL,
				std::ostream* out = NULL);

			virtual ~Parser();

			static const char *name( int tok );

			int parse( );

		private:
			std::istream *in;
			std::ostream *out;
			void* scanner;
			void* buffer;

			bool readFile( );
	};

}; // namespace beagle

typedef void *yyscan_t;



#line 83 "/media/dados/projetos/Beagle/modules/parser/source/parser.hh" /* yacc.c:1909  */

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
    TOK_EXTENDS = 270,
    TOK_FINAL = 271,
    TOK_FINALLY = 272,
    TOK_FLOAT = 273,
    TOK_FOR = 274,
    TOK_GOTO = 275,
    TOK_IF = 276,
    TOK_IMPLEMENTS = 277,
    TOK_IMPORT = 278,
    TOK_INSTANCEOF = 279,
    TOK_INT = 280,
    TOK_INTERFACE = 281,
    TOK_LONG = 282,
    TOK_NATIVE = 283,
    TOK_NEW = 284,
    TOK_PACKAGE = 285,
    TOK_PRIVATE = 286,
    TOK_PROTECTED = 287,
    TOK_PUBLIC = 288,
    TOK_RETURN = 289,
    TOK_SUSPEND = 290,
    TOK_STATIC = 291,
    TOK_SUPER = 292,
    TOK_SWITCH = 293,
    TOK_SYNCHRONIZED = 294,
    TOK_THIS = 295,
    TOK_THROW = 296,
    TOK_THROWS = 297,
    TOK_VOID = 298,
    TOK_VOLATILE = 299,
    TOK_WHILE = 300,
    TOK_IDENT = 301,
    TOK_CONTINUE = 302,
    TOK_TRANSIENT = 303,
    TOK_TRY = 304,
    TOK_NULLLITERAL = 305,
    TOK_BOOLLITERAL = 306,
    TOK_INTLITERAL = 307,
    TOK_CHARLITERAL = 308,
    TOK_FLOATLITERAL = 309,
    TOK_STRINGLITERAL = 310,
    TOK_UINT8 = 311,
    TOK_UINT16 = 312,
    TOK_UINT32 = 313,
    TOK_UINT64 = 314,
    TOK_INT8 = 315,
    TOK_INT16 = 316,
    TOK_INT32 = 317,
    TOK_INT64 = 318,
    TOK_LP = 319,
    TOK_RP = 320,
    TOK_LC = 321,
    TOK_RC = 322,
    TOK_LB = 323,
    TOK_RB = 324,
    TOK_SM = 325,
    TOK_CM = 326,
    TOK_DOT = 327,
    TOK_ASN = 328,
    TOK_LT = 329,
    TOK_GT = 330,
    TOK_BANG = 331,
    TOK_TILDE = 332,
    TOK_QUEST = 333,
    TOK_COLON = 334,
    TOK_EQ = 335,
    TOK_NE = 336,
    TOK_LE = 337,
    TOK_GE = 338,
    TOK_ANDAND = 339,
    TOK_OROR = 340,
    TOK_INC = 341,
    TOK_DEC = 342,
    TOK_PLUS = 343,
    TOK_MINUS = 344,
    TOK_MUL = 345,
    TOK_DIV = 346,
    TOK_AND = 347,
    TOK_OR = 348,
    TOK_CARET = 349,
    TOK_MOD = 350,
    TOK_SHL = 351,
    TOK_SHR = 352,
    TOK_PLASN = 353,
    TOK_MIASN = 354,
    TOK_MUASN = 355,
    TOK_DIASN = 356,
    TOK_ANDASN = 357,
    TOK_ORASN = 358,
    TOK_CARETASN = 359,
    TOK_SLASN = 360,
    TOK_SRASN = 361,
    TOK_LSRASN = 362,
    TOK_MODASN = 363,
    TOK_BAD_TOKEN = 364,
    TOK_EOL = 365
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 85 "/media/dados/projetos/Beagle/modules/parser/source/beagle.y" /* yacc.c:1909  */

   char* node;
   

#line 211 "/media/dados/projetos/Beagle/modules/parser/source/parser.hh" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (yyscan_t scanner);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_PARSER_HH_INCLUDED  */

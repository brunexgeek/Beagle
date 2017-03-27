/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         beagle_parse
#define yylex           beagle_lex
#define yyerror         beagle_error
#define yydebug         beagle_debug
#define yynerrs         beagle_nerrs


/* Copy the first part of user declarations.  */

#line 73 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "beagle.y.hh".  */
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
#line 15 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:355  */



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


#line 147 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:355  */

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
    TOK_FINAL = 272,
    TOK_FINALLY = 273,
    TOK_FLOAT = 274,
    TOK_FOR = 275,
    TOK_GOTO = 276,
    TOK_IF = 277,
    TOK_IMPLEMENTS = 278,
    TOK_IMPORT = 279,
    TOK_INSTANCEOF = 280,
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
    TOK_READLOCK = 294,
    TOK_WRITELOCK = 295,
    TOK_THIS = 296,
    TOK_THROW = 297,
    TOK_THROWS = 298,
    TOK_VOID = 299,
    TOK_VOLATILE = 300,
    TOK_WHILE = 301,
    TOK_NAME = 302,
    TOK_QNAME = 303,
    TOK_CONTINUE = 304,
    TOK_TRY = 305,
    TOK_NLITERAL = 306,
    TOK_BLITERAL = 307,
    TOK_ILITERAL = 308,
    TOK_CLITERAL = 309,
    TOK_FLITERAL = 310,
    TOK_SLITERAL = 311,
    TOK_UINT8 = 312,
    TOK_UINT16 = 313,
    TOK_UINT32 = 314,
    TOK_UINT64 = 315,
    TOK_INT8 = 316,
    TOK_INT16 = 317,
    TOK_INT32 = 318,
    TOK_INT64 = 319,
    TOK_LP = 320,
    TOK_RP = 321,
    TOK_LC = 322,
    TOK_RC = 323,
    TOK_LB = 324,
    TOK_RB = 325,
    TOK_SM = 326,
    TOK_CM = 327,
    TOK_DOT = 328,
    TOK_ASN = 329,
    TOK_LT = 330,
    TOK_GT = 331,
    TOK_BANG = 332,
    TOK_TILDE = 333,
    TOK_QUEST = 334,
    TOK_COLON = 335,
    TOK_EQ = 336,
    TOK_NE = 337,
    TOK_LE = 338,
    TOK_GE = 339,
    TOK_AND = 340,
    TOK_OR = 341,
    TOK_INC = 342,
    TOK_DEC = 343,
    TOK_PLUS = 344,
    TOK_MINUS = 345,
    TOK_MUL = 346,
    TOK_DIV = 347,
    TOK_BAND = 348,
    TOK_BOR = 349,
    TOK_CARET = 350,
    TOK_MOD = 351,
    TOK_SHL = 352,
    TOK_SHR = 353,
    TOK_PLASN = 354,
    TOK_MIASN = 355,
    TOK_MUASN = 356,
    TOK_DIASN = 357,
    TOK_ANDASN = 358,
    TOK_ORASN = 359,
    TOK_CARETASN = 360,
    TOK_SLASN = 361,
    TOK_SRASN = 362,
    TOK_MODASN = 363,
    TOK_BAD_TOKEN = 364,
    TOK_EOL = 365,
    TOK_AT = 366,
    TOK_VARARG = 367,
    TOK_INDENT = 368,
    TOK_DEDENT = 369,
    TOK_IN = 370,
    TOK_RANGE = 371,
    TOK_PASS = 372
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 210 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:355  */

	Token* token;

#line 281 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_COMPILER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 297 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 59 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:359  */


#include <iostream>
#include "beagle.l.hh"
#include <beagle-loader/Node.hh>


using namespace beagle::compiler;


#pragma GCC diagnostic ignored "-Wunused-function"


static void beagle_error(parser_context_t *context, const char *msg)
{
	printf ("%s:%d:%d: error: (%s) %s\n",
		context->fileName.c_str(),
		beagle_get_lineno(context->lexer),
		beagle_get_column(context->lexer),
		context->rule,
		msg);
	return;
}


static beagle::compiler::Node *beagle_pop( std::vector<beagle::compiler::Node*> &stack )
{
	if (stack.size() == 0) return NULL;
	beagle::compiler::Node *node = stack[ stack.size() - 1 ];
	stack.pop_back();
	return node;
}


static beagle::compiler::Node* beagle_combine( std::vector<beagle::compiler::Node*> &stack, int tok, int n )
{
	beagle::compiler::Node *temp;

	if ((int) stack.size() < n) return NULL;

	if (tok > 0 )
		temp = new beagle::compiler::Node(tok, NULL);
	else
	{
		if ((int) stack.size() <= n) return NULL;
		temp = stack[ stack.size() - 1 - n ];
	}
	for (int i = (int) stack.size() - n; i < (int) stack.size(); ++i)
	{
		//std::cout << temp->getValue() << ": adding child " << p->getValue() << std::endl;;
		temp->add(stack[i]);
	}
	for (int i = 0; i < n; ++i)
		stack.pop_back();

	if (tok > 0) stack.push_back(temp);
	return temp;
}


static void beagle_printStack( std::vector<beagle::compiler::Node*> &stack, beagle::compiler::Parser *parser )
{
	std::cout << "Stack:" << std::endl;
	for (int i = 0; i < (int) stack.size(); ++i)
		stack[i]->print(std::cout, 1, false);
}


static void beagle_push(
	parser_context_t *context,
	int type,
	Token *token,
	int line = 0,
	int column = 0 )
{
	//std::cout << "PUSH " << value << std::endl;
	beagle::compiler::Node *node;
	node = new beagle::compiler::Node(type, (token == NULL) ? NULL : token->value.c_str());
	node->line = line;
	node->column = column;
	context->stack.push_back(node);
}


static void beagle_push(
	parser_context_t *context,
	beagle::compiler::Node *node )
{
	context->stack.push_back(node);
}


static void beagle_push(
	parser_context_t *context,
	beagle::compiler::Node &node )
{
	beagle_push(context, &node);
}


#define scanner              parserContext->lexer

#define PUSH(type, token) \
	beagle_push( parserContext, (type), (token), \
		beagle_get_lineno(parserContext->lexer), beagle_get_column(parserContext->lexer) )

#define PUSH_STRING(type, string) \
	do {                                                \
		beagle_push( parserContext, (type), NULL,       \
			beagle_get_lineno(parserContext->lexer),    \
			beagle_get_column(parserContext->lexer) );  \
		if ((string) != NULL)                           \
			TOP()->text = (const char*)(string);        \
	} while (0)

#define PUSH_NODE(node) \
	beagle_push( parserContext, (node) )

#define PUSH_NULL(string) \
	PUSH_STRING(NID_NULL, string)

#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)

#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wsign-compare"


#line 431 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:359  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1394

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  145
/* YYNRULES -- Number of rules.  */
#define YYNRULES  316
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  552

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   372

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   409,   409,   414,   419,   421,   425,   427,   432,   433,
     437,   442,   447,   448,   452,   453,   457,   459,   464,   466,
     474,   476,   481,   483,   485,   487,   489,   491,   493,   495,
     497,   499,   501,   506,   511,   512,   516,   518,   522,   524,
     528,   532,   534,   539,   540,   544,   546,   551,   552,   556,
     557,   558,   562,   567,   569,   574,   579,   584,   585,   589,
     594,   599,   601,   606,   607,   611,   615,   616,   619,   621,
     626,   628,   636,   638,   643,   644,   648,   653,   658,   659,
     663,   665,   666,   671,   673,   678,   679,   683,   697,   699,
     704,   708,   709,   713,   715,   720,   721,   725,   729,   737,
     741,   742,   746,   748,   753,   757,   759,   764,   768,   773,
     774,   775,   776,   777,   778,   779,   780,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   797,   802,   806,
     807,   808,   809,   810,   811,   812,   816,   824,   833,   835,
     840,   841,   849,   860,   869,   874,   879,   880,   884,   888,
     890,   895,   900,   902,   907,   909,   917,   923,   928,   929,
     933,   934,   938,   939,   943,   948,   950,   955,   960,   961,
     965,   969,   971,   976,   981,   989,   994,  1002,  1008,  1013,
    1015,  1020,  1021,  1025,  1030,  1035,  1037,  1042,  1047,  1052,
    1053,  1057,  1058,  1060,  1061,  1062,  1063,  1064,  1068,  1073,
    1075,  1080,  1114,  1119,  1124,  1131,  1136,  1143,  1145,  1153,
    1165,  1167,  1189,  1191,  1196,  1197,  1198,  1199,  1203,  1208,
    1213,  1214,  1215,  1217,  1219,  1223,  1228,  1233,  1234,  1236,
    1238,  1242,  1262,  1264,  1281,  1282,  1284,  1286,  1291,  1292,
    1294,  1299,  1300,  1302,  1307,  1308,  1310,  1312,  1314,  1316,
    1321,  1322,  1324,  1329,  1330,  1335,  1336,  1341,  1342,  1347,
    1348,  1353,  1354,  1359,  1360,  1365,  1366,  1370,  1390,  1391,
    1392,  1396,  1398,  1400,  1402,  1404,  1406,  1408,  1410,  1412,
    1414,  1416,  1421,  1425,  1429,  1433,  1437,  1439,  1441,  1443,
    1445,  1447,  1452,  1453,  1457,  1458,  1463,  1464,  1468,  1470,
    1472,  1474,  1476,  1478,  1480,  1482,  1484,  1489,  1491,  1496,
    1497,  1501,  1506,  1511,  1518,  1523,  1524
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_ABSTRACT", "TOK_BOOLEAN",
  "TOK_BREAK", "TOK_CASE", "TOK_CATCH", "TOK_CHAR", "TOK_CLASS",
  "TOK_CONST", "TOK_DEFAULT", "TOK_DO", "TOK_DOUBLE", "TOK_ELSE",
  "TOK_ELIF", "TOK_EXTENDS", "TOK_FINAL", "TOK_FINALLY", "TOK_FLOAT",
  "TOK_FOR", "TOK_GOTO", "TOK_IF", "TOK_IMPLEMENTS", "TOK_IMPORT",
  "TOK_INSTANCEOF", "TOK_INTERFACE", "TOK_LONG", "TOK_NATIVE", "TOK_NEW",
  "TOK_PACKAGE", "TOK_PRIVATE", "TOK_PROTECTED", "TOK_PUBLIC",
  "TOK_RETURN", "TOK_SUSPEND", "TOK_STATIC", "TOK_SUPER", "TOK_SWITCH",
  "TOK_READLOCK", "TOK_WRITELOCK", "TOK_THIS", "TOK_THROW", "TOK_THROWS",
  "TOK_VOID", "TOK_VOLATILE", "TOK_WHILE", "TOK_NAME", "TOK_QNAME",
  "TOK_CONTINUE", "TOK_TRY", "TOK_NLITERAL", "TOK_BLITERAL",
  "TOK_ILITERAL", "TOK_CLITERAL", "TOK_FLITERAL", "TOK_SLITERAL",
  "TOK_UINT8", "TOK_UINT16", "TOK_UINT32", "TOK_UINT64", "TOK_INT8",
  "TOK_INT16", "TOK_INT32", "TOK_INT64", "TOK_LP", "TOK_RP", "TOK_LC",
  "TOK_RC", "TOK_LB", "TOK_RB", "TOK_SM", "TOK_CM", "TOK_DOT", "TOK_ASN",
  "TOK_LT", "TOK_GT", "TOK_BANG", "TOK_TILDE", "TOK_QUEST", "TOK_COLON",
  "TOK_EQ", "TOK_NE", "TOK_LE", "TOK_GE", "TOK_AND", "TOK_OR", "TOK_INC",
  "TOK_DEC", "TOK_PLUS", "TOK_MINUS", "TOK_MUL", "TOK_DIV", "TOK_BAND",
  "TOK_BOR", "TOK_CARET", "TOK_MOD", "TOK_SHL", "TOK_SHR", "TOK_PLASN",
  "TOK_MIASN", "TOK_MUASN", "TOK_DIASN", "TOK_ANDASN", "TOK_ORASN",
  "TOK_CARETASN", "TOK_SLASN", "TOK_SRASN", "TOK_MODASN", "TOK_BAD_TOKEN",
  "TOK_EOL", "TOK_AT", "TOK_VARARG", "TOK_INDENT", "TOK_DEDENT", "TOK_IN",
  "TOK_RANGE", "TOK_PASS", "$accept", "CompilationUnit",
  "PackageDeclaration", "ImportDeclarationsOpt", "ImportDeclarations",
  "ImportDeclaration", "SingleTypeImportDeclaration",
  "TypeImportOnDemandDeclaration", "TypeDeclaration",
  "AnnotationDeclarationsOpt", "AnnotationDeclarations",
  "AnnotationDeclaration", "Modifiers", "Modifier", "ClassDeclaration",
  "ModifiersOpt", "SuperOpt", "InterfacesOpt", "Interfaces",
  "InterfaceTypeList", "ClassBodyOpt", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclarators", "VariableDeclarator", "VariableInitializer",
  "MethodDeclaration", "VoidType", "MethodHeader", "ThrowsOpt", "Throws",
  "FormalParameterListOpt", "FormalParameterList", "FormalParameter",
  "ClassTypeList", "MethodBodyOpt", "StaticInitializer",
  "ConstructorDeclaration", "ArgumentListOpt", "ConstructorBody",
  "ExplicitConstructorInvocation", "ExtendsInterfacesOpt",
  "InterfaceDeclaration", "ExtendsInterfaces", "InterfaceBody",
  "InterfaceMemberDeclarationsOpt", "InterfaceMemberDeclarations",
  "InterfaceMemberDeclaration", "ConstantDeclaration",
  "AbstractMethodDeclaration", "ArrayInitializer",
  "VariableInitializersOpt", "VariableInitializers", "Block",
  "BlockStatements", "LocalVariableDeclarationStatement",
  "LocalVariableDeclaration", "Statement",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "ExpressionStatement", "ModifyingExpression", "IfThenStatement",
  "IfThenInlineStatement", "IfThenElseStatement", "ElifStatements",
  "ElifStatement", "ElseStatement", "SwitchStatement",
  "SwitchBlockStatementGroupsOpt", "SwitchBlock",
  "SwitchBlockStatementGroups", "SwitchBlockStatementGroup",
  "SwitchLabels", "SwitchLabel", "WhileStatement", "DoStatement",
  "ForInitOpt", "ExpressionOpt", "ForUpdateOpt", "ForStatement",
  "ForEachStatement", "Range", "ForInit", "ForUpdate",
  "ModifyingExpressionList", "BreakStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "LockStatement", "CatchesOpt",
  "TryStatement", "Catches", "CatchClause", "Finally", "Primary",
  "PrimaryNoNewArray", "ClassInstanceCreationExpression", "ArgumentList",
  "ArrayCreationExpression", "Dimensions", "DimensionsExpr", "FieldAccess",
  "MethodInvocation", "ArrayAccess", "PostFixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "UnaryExpression",
  "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "CastExpression",
  "MultiplicativeExpression", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "Assignment",
  "LeftHandSide", "AssignmentOperator", "Expression", "ConstantExpression",
  "BeginBlock", "EndBlock", "Literal", "Type", "PrimitiveType",
  "NumericType", "IntegralType", "FloatingPointType", "ReferenceType",
  "ArrayType", "SimpleName", "Name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372
};
# endif

#define YYPACT_NINF -459

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-459)))

#define YYTABLE_NINF -310

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,     6,   132,    82,  -459,  -459,   -40,  -459,     6,    52,
      82,  -459,  -459,  -459,     6,  -459,   -28,     6,  -459,   920,
      52,  -459,  -459,  -459,  -459,  -459,   -16,  -459,   -41,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
     920,  -459,    23,  -459,    55,  1168,  -459,  -459,     6,     6,
    -459,  1240,    61,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
     921,  1168,  1168,  1168,  1168,  1168,  1168,   111,   119,  -459,
    -459,   112,  -459,  1231,  -459,   637,    37,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,    89,   106,   107,     5,   125,   136,
     105,   128,   130,   -31,  -459,  -459,  -459,  1286,  -459,  -459,
    1241,   221,   228,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,   181,  -459,  -459,  -459,    91,
       6,   186,   187,  1251,  -459,   190,  -459,   110,  -459,  -459,
    -459,  -459,  -459,   151,     6,  1168,  1168,  -459,  -459,  1168,
    1168,  1168,  1168,  1168,  1168,  1168,  1240,  1168,  1168,  1168,
    1168,  1168,  1168,  1168,  1168,  1168,  1168,  1168,  1168,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    1168,  1168,  1168,     6,   240,     6,   155,   195,  1168,   201,
    1168,   201,   209,   595,   210,    27,  1050,    67,  -459,   216,
    -459,   217,  -459,  -459,  -459,    89,    89,   106,   106,   219,
    -459,   222,    30,   107,   107,   107,   107,     5,     5,   125,
     136,   105,   128,   212,   130,  -459,   224,   226,   225,     6,
     189,  -459,   225,   191,     6,   232,  1168,   237,  1168,  -459,
    -459,  1168,   235,   595,  1168,  -459,   242,   244,   245,  1168,
    -459,  -459,   246,   225,   191,  -459,  -459,   -60,   225,  -459,
     247,  -459,   241,  -459,  -459,  -459,   255,  -459,  -459,  -459,
    -459,     6,  -459,    52,   920,  -459,   213,   215,   -24,  -459,
    -459,  -459,  -459,  -459,  -459,   225,  1090,    -9,  -459,  -459,
    -459,  -459,   214,  -459,  1221,  -459,  -459,  -459,  -459,   191,
    1221,  -459,  -459,  -459,   191,  -459,     6,     6,   219,  -459,
    -459,   744,   261,  -459,  -459,   262,   -53,  -459,    21,   -27,
     223,   266,   270,  1168,   271,   273,   274,  1168,   277,   -26,
     233,  1168,   238,   663,  -459,   243,  -459,  -459,  -459,  -459,
     250,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,    24,    41,    37,   122,   133,
    -459,  -459,  -459,     6,   129,   423,   423,     6,  -459,   423,
    1095,   251,  -459,   191,   983,  1168,   252,  -459,  1168,  1168,
    1168,   258,  1168,   259,  -459,   191,   284,  -459,  -459,  -459,
    -459,  -459,   279,   278,  1124,  1240,   290,   285,  -459,     6,
     304,  -459,   305,  1095,  -459,  -459,  -459,  -459,   328,  -459,
    -459,   308,  -459,   303,     6,   310,  -459,   315,   319,   322,
    -459,   323,  -459,   384,  -459,     6,   351,   423,  -459,   351,
     351,  -459,   327,   324,   332,  1168,   503,   -57,  1021,   289,
     291,   292,   294,   340,   388,    16,  -459,  -459,     6,   299,
    -459,  -459,  -459,  -459,  -459,  1095,  1168,   339,  -459,   854,
     191,   302,   191,   191,   191,   191,   423,   309,  -459,  -459,
     342,   225,   191,  -459,   349,   503,   353,   354,   355,   198,
    -459,  -459,   115,  -459,  -459,  -459,   356,   191,     6,  -459,
     816,   320,   359,  -459,   303,  1168,   325,   329,   330,   364,
     198,  -459,  -459,  1168,   358,   215,   115,  -459,     7,  -459,
     331,  -459,   225,    58,   368,   663,   663,  -459,   333,   373,
     191,   191,   191,  1168,  -459,  -459,  -459,   366,   337,  -459,
    -459,  -459,  -459,   191,  1168,  1168,   663,  -459,  -459,   191,
    1168,  -459,  -459,  -459,   382,   341,  -459,  -459,   383,   386,
    -459,  -459,   387,   346,  -459,   350,   357,  -459,   191,  -459,
    -459,  -459
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     5,   314,   315,     0,     1,     0,    15,
       4,     6,     8,     9,     0,     3,     0,     0,     2,    35,
      14,    16,    12,    13,     7,   316,     0,    10,     0,    26,
      32,    27,    28,    24,    23,    22,    25,    29,    30,    31,
      34,    20,     0,    17,     0,    79,    19,    21,     0,     0,
      11,     0,     0,   192,   291,   288,   286,   290,   287,   289,
       0,     0,     0,     0,     0,     0,     0,     0,   214,   189,
     194,    78,   190,   195,   196,   197,   227,   216,   217,   234,
     220,   221,   224,   230,   238,   241,   244,   250,   253,   255,
     257,   259,   261,   263,   265,   282,   266,     0,   199,   191,
     215,    37,    86,   295,   306,   308,   307,   298,   299,   300,
     301,   302,   303,   304,   305,     0,   294,   296,   297,     0,
       0,     0,     0,   215,   195,   197,   229,   215,   228,   225,
     226,   222,   223,     0,     0,     0,     0,   218,   219,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   271,
     275,   276,   272,   273,   279,   281,   280,   277,   278,   274,
       0,    79,     0,     0,    39,     0,     0,    85,     0,   201,
      79,   202,   208,   193,     0,     0,     0,     0,    18,   207,
     200,     0,   235,   236,   237,   239,   240,   242,   243,     0,
     249,   310,   309,   245,   246,   247,   248,   251,   252,   254,
     256,   258,   260,     0,   262,   267,     0,     0,    36,     0,
       0,    38,    88,     0,     0,     0,     0,     0,    79,   232,
     203,     0,     0,     0,    79,   213,     0,     0,     0,     0,
     209,   212,    40,    41,    44,   284,    87,    15,    89,   205,
       0,   198,     0,   231,   204,   233,     0,   311,   313,   312,
     264,     0,    33,    15,    35,    97,     0,     0,    15,    93,
      95,    96,   206,   211,   210,    42,    35,    15,    45,    47,
      49,    50,     0,    51,     0,    98,   285,    90,    94,    25,
       0,    48,    46,    43,    75,    60,     0,     0,   292,   293,
      76,     0,   315,    59,    74,     0,     0,    53,    55,     0,
       0,     0,     0,   161,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,     0,   105,   109,   126,   117,
       0,   110,   111,   112,   118,   113,   119,   114,   115,   120,
     121,   122,   124,   123,   125,   135,   134,     0,   132,   133,
     130,   131,   129,     0,   270,    67,    67,     0,    52,    67,
       0,     0,   174,     0,   159,     0,     0,   160,     0,     0,
       0,     0,     0,     0,   176,     0,     0,   127,   106,   104,
     107,   128,   108,    55,     0,     0,     0,    66,    68,     0,
       0,    54,     0,   101,    56,    58,    57,   173,     0,   169,
     171,     0,   158,   168,     0,     0,   177,     0,     0,     0,
     178,     0,   175,   182,   193,     0,    64,     0,    70,    64,
      64,   102,     0,   100,     0,   161,     0,    55,     0,     0,
       0,     0,     0,     0,     0,   183,   185,    71,     0,     0,
      63,    69,    62,    61,    99,     0,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   184,   186,
      65,    72,     0,   103,     0,   163,     0,     0,     0,   136,
     137,   145,   147,   179,   180,   156,     0,     0,     0,    77,
       0,     0,     0,   162,   170,     0,     0,     0,     0,     0,
     139,   140,   138,     0,     0,     0,   146,   149,     0,   152,
       0,   188,    73,     0,   192,     0,     0,   157,     0,     0,
       0,     0,     0,     0,   141,   142,   283,     0,     0,   148,
     150,   151,   153,     0,    79,    79,     0,    80,    81,     0,
       0,   166,   165,   144,     0,     0,   155,   187,     0,     0,
      82,   164,     0,     0,   154,     0,     0,   167,     0,    84,
      83,   143
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -459,  -459,  -459,  -459,  -459,   449,  -459,  -459,  -459,    -6,
    -459,   441,  -459,   426,  -459,  -220,  -459,  -459,  -459,  -459,
    -459,  -459,   192,  -459,  -185,   166,   116,  -378,  -459,  -459,
    -104,  -173,  -459,  -198,  -459,  -371,  -459,  -459,  -459,  -459,
    -160,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,   200,
    -459,  -459,  -459,  -459,  -459,  -284,  -458,  -459,   108,  -315,
    -459,  -459,  -459,  -355,  -459,  -459,  -459,  -459,   -14,     8,
    -459,  -459,  -459,  -459,   -22,  -459,   -10,  -459,  -459,  -459,
      50,  -459,  -459,  -459,  -459,  -459,  -459,    34,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,    54,  -459,  -459,  -459,
    -229,  -459,  -459,   377,   389,   431,  -186,   457,  -133,   -98,
     -82,   -23,   -48,   -15,  -167,  -459,   126,   104,    39,   121,
     360,   348,   352,   347,   369,  -459,   267,   344,    36,  -459,
    -459,   -59,  -459,  -219,  -271,  -459,  -255,   -39,  -459,  -459,
    -459,   363,  -459,   -12,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    10,    11,    12,    13,    18,   264,
      20,    21,    40,    41,    22,    42,   174,   220,   221,   242,
     262,   277,   278,   279,   265,   382,   307,   394,   281,   296,
     266,   439,   440,   386,   387,   388,   460,   303,   291,   283,
      67,   479,   505,   176,    23,   177,   246,   267,   268,   269,
     270,   271,   395,   422,   423,   300,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   490,   491,   492,
     334,   495,   471,   496,   497,   498,   499,   335,   336,   401,
     366,   482,   337,   338,   467,   402,   483,   403,   339,   340,
     341,   342,   343,   434,   344,   435,   436,   458,    68,    69,
      70,    71,    72,   185,   179,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     170,    98,   517,   301,   287,    99,   353,   298,   116,   117,
     118,   299,   201,     5,   100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   121,    25,    19,   247,    28,   293,    16,   378,   400,
     304,   216,   115,   493,    25,   421,   229,   360,   494,   357,
     227,   122,   506,   433,    45,   263,   361,   373,     1,   297,
     146,     4,    48,    14,  -181,   297,   101,   102,   126,   128,
     129,   130,   131,   132,   284,    26,   441,   526,   157,    49,
     119,    17,   379,     4,   -92,   158,   290,   358,   449,   123,
     127,   127,   127,   127,   127,   127,   255,   463,   252,    46,
      15,   448,   345,   451,   256,    44,   190,   191,   280,   398,
     147,   148,    27,   362,   374,   476,   359,    17,   149,   150,
     -91,   413,   280,   231,   345,   360,   232,  -194,   213,   238,
     389,   389,    17,    14,   389,   286,     8,   199,   182,   404,
     400,  -194,  -194,   217,  -196,   346,   192,   193,   194,   225,
     245,   493,   189,   524,   137,   138,   494,   217,  -196,  -196,
     415,   120,     7,   233,   120,   345,   232,   346,   127,   127,
     127,   127,   127,   127,   127,   202,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   180,   127,   390,   282,
     178,   392,   389,    17,    14,    50,   469,   250,   347,   473,
     474,   475,   218,   282,   222,   171,  -309,   133,   346,   172,
     139,   140,   127,    14,   135,   141,   203,   204,   205,   206,
     347,   378,   134,   501,   171,   142,   143,   345,   384,   345,
     154,   389,    14,   348,   144,   145,   151,   152,   253,  -216,
    -216,   378,   488,   489,   521,   156,  -215,  -215,   243,   349,
    -217,  -217,   155,   248,   519,   348,   531,   532,   533,   153,
     127,   347,   127,   472,   527,   528,   345,   173,   127,   537,
     346,   349,   346,   480,   175,   541,   442,   443,   197,   198,
     178,   345,   183,   350,   367,   540,   184,   276,   371,   136,
     275,   188,   376,   219,   551,   223,   348,   224,   195,   196,
     226,   276,   207,   208,   228,   350,   345,   345,   302,   346,
     230,   234,   349,   202,   305,   308,   351,   235,   236,   202,
     240,   237,   239,   347,   346,   347,   241,   345,    14,   244,
     354,   396,   249,   251,   245,   254,   405,   273,   351,   407,
     408,   409,   257,   411,   258,   259,   350,   272,   261,   346,
     346,   274,   354,   285,   294,   217,   355,   356,   348,   286,
     348,   364,   347,   363,   396,   365,   368,   352,   369,   370,
     346,   383,   372,   375,   349,   383,   349,   347,   377,   351,
     414,   357,   360,   380,   202,   202,   416,   417,   202,   352,
     381,   397,   406,   354,   538,   539,   367,   348,   410,   412,
     419,   420,   347,   347,   424,   426,   428,   418,   350,   425,
     350,   429,   348,   349,   202,   430,   396,   464,   431,   432,
     468,   433,   427,   347,   438,   444,   445,   446,   349,   452,
     352,   453,   454,   437,   455,   456,   457,   348,   348,   462,
     465,   351,   470,   351,   478,   481,   202,   350,   485,   477,
     486,   487,   500,   349,   349,   508,   509,   103,   348,   513,
     507,   104,   350,   525,   516,   510,   105,   461,   518,   511,
     512,   523,   106,   529,   349,   530,   535,   536,   543,   545,
     351,   544,   546,   547,   534,   202,   548,   350,   350,    24,
     549,    43,   352,   306,   352,   351,    47,   550,   288,   292,
       4,   542,   399,   391,   520,   447,   514,   502,   350,   354,
     107,   108,   109,   110,   111,   112,   113,   114,   522,   459,
     351,   351,   124,   124,   124,   124,   124,   124,   515,   484,
     187,   352,   210,   212,   354,   354,   260,   211,   181,   200,
       0,   351,     0,   209,   215,     0,   352,     0,   125,   125,
     125,   125,   125,   125,     0,   354,     0,   214,     0,     0,
       0,     0,    51,     0,     0,   385,     0,     0,     0,     0,
      52,   352,   352,     0,    53,     0,     0,     0,     0,     0,
       4,     0,     0,     0,    54,    55,    56,    57,    58,    59,
       0,     0,   352,     0,     0,     0,     0,     0,   321,     0,
     124,   124,   124,   124,   124,   124,   124,     0,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,     0,   124,
      63,    64,     0,     0,     0,     0,   125,   125,   125,   125,
     125,   125,   125,     0,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   124,   125,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,    53,     0,     0,     0,
     125,     0,     4,     0,     0,     0,    54,    55,    56,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,   124,     0,   124,     0,     0,   103,   309,     0,
     124,   104,    61,    62,     0,   310,   105,     0,     0,     0,
       0,     0,   106,   311,     0,   312,     0,     0,   125,     0,
     125,     0,    51,     0,     0,     0,   125,   313,     0,     0,
      52,   314,   315,   316,    53,   317,   136,     0,     0,   318,
       4,  -269,   319,   320,    54,    55,    56,    57,    58,    59,
     107,   108,   109,   110,   111,   112,   113,   114,   321,     0,
       0,     0,     0,     0,     0,     0,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,  -269,  -269,     0,     0,   103,   309,
      63,    64,   104,     0,     0,     0,   310,   105,     0,     0,
       0,     0,     0,   106,   311,     0,   312,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,   286,   313,     0,
     322,    52,   314,   315,   316,    53,   317,     0,     0,     0,
     318,     4,     0,   319,   320,    54,    55,    56,    57,    58,
      59,   107,   108,   109,   110,   111,   112,   113,   114,   321,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,   309,     0,     0,   104,     0,     0,     0,   310,   105,
       0,    63,    64,     0,     0,   106,   311,     0,   312,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
     313,     0,     0,   503,   314,   315,   316,   504,   317,     0,
       0,   322,   318,     4,     0,   319,   320,    54,    55,    56,
      57,    58,    59,   107,   108,   109,   110,   111,   112,   113,
     114,   321,     0,    51,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     4,     0,    63,    64,    54,    55,    56,    57,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,     0,     0,    29,     0,   103,     0,     0,     0,   104,
      30,    61,    62,   322,   105,     0,     0,    31,     0,     0,
     106,    63,    64,    65,    66,     0,     0,     0,    32,     0,
      51,    33,    34,    35,     0,     0,    36,     0,    52,    37,
      38,     0,    53,     0,     0,    39,     0,     0,     4,     0,
     466,     0,    54,    55,    56,    57,    58,    59,   107,   108,
     109,   110,   111,   112,   113,   114,    60,   103,     0,     0,
       0,   104,     0,     0,     0,     0,   105,     0,    61,    62,
       0,     0,   106,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    51,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       4,     0,     0,     0,    54,    55,    56,    57,    58,    59,
     107,   108,   109,   110,   111,   112,   113,   114,   321,     0,
      51,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     4,     0,
      63,    64,    54,    55,    56,    57,    58,    59,     0,    51,
       0,     0,     0,     0,     0,     0,   321,    52,     0,     0,
       0,    53,     0,    29,     0,     0,     0,     4,     0,     0,
      30,    54,    55,    56,    57,    58,    59,    31,    63,    64,
       0,     0,     0,     0,     0,    60,     0,     0,    32,     0,
     230,    33,    34,    35,    51,     0,   289,    61,    62,    37,
      38,   450,    52,     0,     0,    39,    53,    63,    64,    65,
      66,     0,     4,     0,     0,     0,    54,    55,    56,    57,
      58,    59,     0,    51,     0,     0,     0,     0,     0,     0,
      60,    52,   393,     0,     0,    53,     0,     0,     0,     0,
       0,     4,    61,    62,     0,    54,    55,    56,    57,    58,
      59,     0,    63,    64,    65,    66,     0,     0,     0,    60,
       0,     0,     0,     0,   259,     0,     0,    51,     0,     0,
       0,    61,    62,     0,     0,    52,     0,     0,     0,    53,
       0,    63,    64,    65,    66,     4,     0,     0,     0,    54,
      55,    56,    57,    58,    59,   103,     0,     0,     0,   104,
       0,     0,     0,    60,   105,     0,     0,     0,     0,     0,
     106,     0,     0,     0,   103,    61,    62,     0,   104,     0,
       0,     0,     0,   105,     0,    63,    64,    65,    66,   106,
       0,     0,     0,     0,     0,   295,     0,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   108,
     109,   110,   111,   112,   113,   114,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,   108,   109,
     110,   111,   112,   113,   114,  -268,   171,     0,     0,     0,
     172,     0,     0,     0,    14,  -270,   171,     0,     0,     0,
     186,     0,     0,     0,    14,  -270,     0,     0,     0,     0,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
     159,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169
};

static const yytype_int16 yycheck[] =
{
       1,    60,    14,     9,   223,    17,   277,     8,   323,   364,
     294,   171,    51,     6,    26,   393,   183,    74,    11,    72,
     180,    60,   480,     7,    65,   244,    53,    53,    30,   284,
      25,    47,     9,    73,    18,   290,    48,    49,    61,    62,
      63,    64,    65,    66,   264,    73,   417,   505,    79,    26,
      51,   111,   323,    47,   114,    86,   276,   110,   115,    60,
      61,    62,    63,    64,    65,    66,   233,   445,   228,   110,
     110,   426,   301,   428,   234,    91,   135,   136,   263,   363,
      75,    76,   110,   110,   110,   456,    65,   111,    83,    84,
     114,   375,   277,    66,   323,    74,    69,    73,   157,    69,
     355,   356,   111,    73,   359,   114,    24,   146,   120,   364,
     465,    87,    88,   172,    73,   301,   139,   140,   141,   178,
     113,     6,   134,    65,    87,    88,    11,   186,    87,    88,
     385,    73,     0,    66,    73,   364,    69,   323,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    65,   158,   356,   263,
      69,   359,   417,   111,    73,   110,   450,   226,   301,   453,
     454,   455,   173,   277,   175,    65,    47,    66,   364,    69,
      91,    92,   183,    73,    72,    96,   147,   148,   149,   150,
     323,   506,    73,   477,    65,    89,    90,   426,    69,   428,
      95,   456,    73,   301,    97,    98,    81,    82,   231,    87,
      88,   526,    14,    15,   498,    85,    87,    88,   219,   301,
      87,    88,    94,   224,   495,   323,   510,   511,   512,    93,
     231,   364,   233,   452,   505,   506,   465,    16,   239,   523,
     426,   323,   428,   462,    16,   529,   419,   420,   144,   145,
      69,   480,    66,   301,   313,   526,    69,   263,   317,    69,
     261,   110,   321,    23,   548,   110,   364,    72,   142,   143,
      69,   277,   151,   152,    65,   323,   505,   506,   290,   465,
      70,    65,   364,   284,   296,   297,   301,    70,    69,   290,
      66,    69,    80,   426,   480,   428,    70,   526,    73,   110,
     301,   360,    70,    66,   113,    70,   365,    66,   323,   368,
     369,   370,    70,   372,    70,    70,   364,    70,    72,   505,
     506,    66,   323,   110,   110,   384,    65,    65,   426,   114,
     428,    65,   465,   110,   393,    65,    65,   301,    65,    65,
     526,   353,    65,   110,   426,   357,   428,   480,   110,   364,
      66,    72,    74,   110,   355,   356,    66,    72,   359,   323,
     110,   110,   110,   364,   524,   525,   425,   465,   110,   110,
      66,    66,   505,   506,    46,    72,    66,   389,   426,    71,
     428,    66,   480,   465,   385,    66,   445,   446,    66,    66,
     449,     7,   404,   526,    43,    68,    72,    65,   480,   110,
     364,   110,   110,   415,   110,    65,    18,   505,   506,   110,
      71,   426,   110,   428,    72,    66,   417,   465,    65,   110,
      66,    66,    66,   505,   506,    66,   485,     4,   526,    65,
     110,     8,   480,    65,   493,   110,    13,   438,    80,   110,
     110,   110,    19,   110,   526,    72,    80,   110,    66,    66,
     465,   110,    66,    66,   513,   456,   110,   505,   506,    10,
     110,    20,   426,   297,   428,   480,    40,   110,   268,   277,
      47,   530,   364,   357,   496,   425,   490,   478,   526,   480,
      57,    58,    59,    60,    61,    62,    63,    64,   498,   435,
     505,   506,    61,    62,    63,    64,    65,    66,   490,   465,
     123,   465,   154,   156,   505,   506,   239,   155,   119,   146,
      -1,   526,    -1,   153,   170,    -1,   480,    -1,    61,    62,
      63,    64,    65,    66,    -1,   526,    -1,   158,    -1,    -1,
      -1,    -1,    29,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      37,   505,   506,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,   526,    -1,    -1,    -1,    -1,    -1,    65,    -1,
     139,   140,   141,   142,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    -1,   158,
      87,    88,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,   144,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   183,   158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,
     183,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,   231,    -1,   233,    -1,    -1,     4,     5,    -1,
     239,     8,    77,    78,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    20,    -1,    22,    -1,    -1,   231,    -1,
     233,    -1,    29,    -1,    -1,    -1,   239,    34,    -1,    -1,
      37,    38,    39,    40,    41,    42,    69,    -1,    -1,    46,
      47,    74,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,     4,     5,
      87,    88,     8,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,   114,    34,    -1,
     117,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,    -1,    -1,     8,    -1,    -1,    -1,    12,    13,
      -1,    87,    88,    -1,    -1,    19,    20,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    38,    39,    40,    41,    42,    -1,
      -1,   117,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    87,    88,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,     3,    -1,     4,    -1,    -1,    -1,     8,
      10,    77,    78,   117,    13,    -1,    -1,    17,    -1,    -1,
      19,    87,    88,    89,    90,    -1,    -1,    -1,    28,    -1,
      29,    31,    32,    33,    -1,    -1,    36,    -1,    37,    39,
      40,    -1,    41,    -1,    -1,    45,    -1,    -1,    47,    -1,
     116,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     4,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    13,    -1,    77,    78,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      87,    88,    51,    52,    53,    54,    55,    56,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    37,    -1,    -1,
      -1,    41,    -1,     3,    -1,    -1,    -1,    47,    -1,    -1,
      10,    51,    52,    53,    54,    55,    56,    17,    87,    88,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    28,    -1,
      70,    31,    32,    33,    29,    -1,    36,    77,    78,    39,
      40,   110,    37,    -1,    -1,    45,    41,    87,    88,    89,
      90,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    37,    67,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,    77,    78,    -1,    51,    52,    53,    54,    55,
      56,    -1,    87,    88,    89,    90,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    29,    -1,    -1,
      -1,    77,    78,    -1,    -1,    37,    -1,    -1,    -1,    41,
      -1,    87,    88,    89,    90,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    65,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,     4,    77,    78,    -1,     8,    -1,
      -1,    -1,    -1,    13,    -1,    87,    88,    89,    90,    19,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    74,    65,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    73,    74,    65,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    30,   119,   120,    47,   261,   262,     0,    24,   121,
     122,   123,   124,   125,    73,   110,   262,   111,   126,   127,
     128,   129,   132,   162,   123,   261,    73,   110,   261,     3,
      10,    17,    28,    31,    32,    33,    36,    39,    40,    45,
     130,   131,   133,   129,    91,    65,   110,   131,     9,    26,
     110,    29,    37,    41,    51,    52,    53,    54,    55,    56,
      65,    77,    78,    87,    88,    89,    90,   158,   216,   217,
     218,   219,   220,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   249,   253,
     262,   261,   261,     4,     8,    13,    19,    57,    58,    59,
      60,    61,    62,    63,    64,   255,   256,   257,   258,   262,
      73,   249,   255,   262,   223,   225,   229,   262,   229,   229,
     229,   229,   229,    66,    73,    72,    69,    87,    88,    91,
      92,    96,    89,    90,    97,    98,    25,    75,    76,    83,
      84,    81,    82,    93,    95,    94,    85,    79,    86,    74,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     248,    65,    69,    16,   134,    16,   161,   163,    69,   222,
      65,   222,   261,    66,    69,   221,    69,   221,   110,   261,
     249,   249,   229,   229,   229,   234,   234,   235,   235,   255,
     259,   260,   262,   236,   236,   236,   236,   237,   237,   238,
     239,   240,   241,   249,   242,   245,   158,   249,   262,    23,
     135,   136,   262,   110,    72,   249,    69,   158,    65,   232,
      70,    66,    69,    66,    65,    70,    69,    69,    69,    80,
      66,    70,   137,   262,   110,   113,   164,   251,   262,    70,
     249,    66,   158,   229,    70,   232,   158,    70,    70,    70,
     244,    72,   138,   251,   127,   142,   148,   165,   166,   167,
     168,   169,    70,    66,    66,   262,   127,   139,   140,   141,
     142,   146,   148,   157,   133,   110,   114,   252,   167,    36,
     133,   156,   140,   252,   110,    44,   147,   254,   255,   259,
     173,   251,   261,   155,   173,   261,   143,   144,   261,     5,
      12,    20,    22,    34,    38,    39,    40,    42,    46,    49,
      50,    65,   117,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   188,   195,   196,   200,   201,   206,
     207,   208,   209,   210,   212,   218,   224,   226,   227,   228,
     230,   231,   246,   254,   262,    65,    65,    72,   110,    65,
      74,    53,   110,   110,    65,    65,   198,   249,    65,    65,
      65,   249,    65,    53,   110,   110,   249,   110,   177,   252,
     110,   110,   143,   261,    69,   112,   151,   152,   153,   254,
     151,   144,   151,    67,   145,   170,   249,   110,   173,   176,
     181,   197,   203,   205,   254,   249,   110,   249,   249,   249,
     110,   249,   110,   173,    66,   254,    66,    72,   261,    66,
      66,   145,   171,   172,    46,    71,    72,   261,    66,    66,
      66,    66,    66,     7,   211,   213,   214,   261,    43,   149,
     150,   153,   149,   149,    68,    72,    65,   198,   181,   115,
     110,   181,   110,   110,   110,   110,    65,    18,   215,   214,
     154,   262,   110,   145,   249,    71,   116,   202,   249,   173,
     110,   190,   251,   173,   173,   173,   153,   110,    72,   159,
     251,    66,   199,   204,   205,    65,    66,    66,    14,    15,
     185,   186,   187,     6,    11,   189,   191,   192,   193,   194,
      66,   173,   262,    37,    41,   160,   174,   110,    66,   249,
     110,   110,   110,    65,   186,   187,   249,   250,    80,   252,
     192,   173,   194,   110,    65,    65,   174,   252,   252,   110,
      72,   173,   173,   173,   249,    80,   110,   173,   158,   158,
     252,   173,   249,    66,   110,    66,    66,    66,   110,   110,
     110,   173
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   118,   119,   120,   121,   121,   122,   122,   123,   123,
     124,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   132,   133,   133,   134,   134,   135,   135,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     141,   141,   142,   143,   143,   144,   144,   145,   145,   146,
     147,   148,   148,   149,   149,   150,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   156,   157,   158,   158,
     159,   159,   159,   160,   160,   161,   161,   162,   163,   163,
     164,   165,   165,   166,   166,   167,   167,   168,   169,   170,
     171,   171,   172,   172,   173,   174,   174,   175,   176,   177,
     177,   177,   177,   177,   177,   177,   177,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   179,   180,   181,
     181,   181,   181,   181,   181,   181,   182,   183,   184,   184,
     185,   185,   185,   186,   187,   188,   189,   189,   190,   191,
     191,   192,   193,   193,   194,   194,   195,   196,   197,   197,
     198,   198,   199,   199,   200,   201,   201,   202,   203,   203,
     204,   205,   205,   206,   206,   207,   207,   208,   209,   210,
     210,   211,   211,   212,   212,   213,   213,   214,   215,   216,
     216,   217,   217,   217,   217,   217,   217,   217,   218,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   223,   224,
     224,   224,   225,   225,   226,   226,   226,   226,   227,   228,
     229,   229,   229,   229,   229,   230,   231,   232,   232,   232,
     232,   233,   233,   233,   234,   234,   234,   234,   235,   235,
     235,   236,   236,   236,   237,   237,   237,   237,   237,   237,
     238,   238,   238,   239,   239,   240,   240,   241,   241,   242,
     242,   243,   243,   244,   244,   245,   245,   246,   247,   247,
     247,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   249,   250,   251,   252,   253,   253,   253,   253,
     253,   253,   254,   254,   255,   255,   256,   256,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   258,   258,   259,
     259,   260,   260,   260,   261,   262,   262
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     1,     0,     1,     2,     1,     1,
       3,     5,     1,     1,     1,     0,     1,     2,     6,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     1,     0,     2,     0,     1,     0,
       2,     1,     3,     3,     0,     1,     2,     1,     2,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     1,     3,
       1,     8,     8,     1,     0,     2,     1,     0,     1,     3,
       2,     3,     1,     3,     1,     0,     2,     9,     1,     0,
       3,     3,     4,     5,     5,     1,     0,     7,     2,     3,
       3,     1,     0,     1,     2,     1,     1,     1,     2,     3,
       1,     0,     1,     3,     3,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     6,     6,     7,     7,
       1,     2,     2,     6,     3,     6,     1,     0,     3,     1,
       2,     2,     1,     2,     4,     3,     6,     8,     1,     0,
       1,     0,     1,     0,    10,     9,     9,     6,     1,     1,
       1,     1,     3,     3,     2,     3,     2,     3,     3,     6,
       6,     1,     0,     4,     5,     1,     2,     6,     3,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     5,     1,
       3,     3,     3,     2,     3,     3,     4,     3,     3,     4,
       6,     6,     4,     4,     1,     1,     1,     1,     2,     2,
       1,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     5,     4,     5,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (parserContext, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, parserContext); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_context_t *parserContext)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (parserContext);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_context_t *parserContext)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parserContext);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, parser_context_t *parserContext)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , parserContext);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parserContext); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, parser_context_t *parserContext)
{
  YYUSE (yyvaluep);
  YYUSE (parserContext);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (parser_context_t *parserContext)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 410 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_UNIT, 3);   }
#line 2158 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 415 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PACKAGE, 1);   }
#line 2164 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 420 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->text = "ImportDeclarations";   }
#line 2170 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 421 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ImportDeclarations");   }
#line 2176 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 426 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORTS, 1);   }
#line 2182 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 428 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2188 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 438 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORT, 1);   }
#line 2194 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 443 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IMPORT_ALL, 1);   }
#line 2200 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 453 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("AnnotationDeclarations");   }
#line 2206 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 458 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANNOTATIONS, 1);   }
#line 2212 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 460 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2218 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 465 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ANNOTATION, 2);   }
#line 2224 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 467 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("ArgumentList");
		COMBINE(NID_ANNOTATION, 2);
	}
#line 2233 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 475 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MODIFIERS, 1);   }
#line 2239 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 477 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2245 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 482 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PUBLIC, (yyvsp[0]. token ));   }
#line 2251 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 484 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PROTECTED, (yyvsp[0]. token ));   }
#line 2257 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 486 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PRIVATE, (yyvsp[0]. token ));   }
#line 2263 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 488 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_STATIC, (yyvsp[0]. token ));   }
#line 2269 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 490 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ABSTRACT, (yyvsp[0]. token ));   }
#line 2275 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 492 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_FINAL, (yyvsp[0]. token ));   }
#line 2281 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 494 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NATIVE, (yyvsp[0]. token ));   }
#line 2287 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 496 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_READLOCK, (yyvsp[0]. token ));   }
#line 2293 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 498 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_WRITELOCK, (yyvsp[0]. token ));   }
#line 2299 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 500 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_VOLATILE, (yyvsp[0]. token ));   }
#line 2305 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 502 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CONST, (yyvsp[0]. token ));   }
#line 2311 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 507 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CLASS, 6);   }
#line 2317 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 512 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("Modifiers");   }
#line 2323 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 517 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->text = "Super";   }
#line 2329 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 518 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("Super");   }
#line 2335 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 523 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->text = "Interfaces";   }
#line 2341 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 524 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("Interfaces");   }
#line 2347 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 533 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(NID_TYPES, 1);   }
#line 2353 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 535 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2359 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 540 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_STRING(NID_BODY, "ClassBody");   }
#line 2365 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 545 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 1);   }
#line 2371 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 547 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2377 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 563 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FIELD, 4);   }
#line 2383 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 568 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2389 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 570 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2395 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 575 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("VariableInitializer");
		COMBINE(NID_DECLARATOR, 2);
	}
#line 2404 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 580 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DECLARATOR, 2);   }
#line 2410 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 590 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2416 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 595 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_VOID, (yyvsp[0]. token ));   }
#line 2422 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 600 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_METHOD, 6);   }
#line 2428 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 602 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_METHOD, 6);   }
#line 2434 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 607 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("Throws");   }
#line 2440 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 616 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("FormalParameterList");   }
#line 2446 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 620 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(NID_PARAMETERS, 1);   }
#line 2452 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 622 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2458 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 627 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(NID_PARAMETER, 2);   }
#line 2464 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 629 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_PARAMETER, 2);
		++TOP()->counter;
	}
#line 2473 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 637 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_THROWS, 1);   }
#line 2479 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 639 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2485 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 644 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_STRING(NID_BLOCK, "MethodBody");   }
#line 2491 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 649 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_STATIC_INIT, 1);   }
#line 2497 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 654 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CONSTRUCTOR, 6);   }
#line 2503 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 659 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ArgumentList");   }
#line 2509 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 664 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 1);   }
#line 2515 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 667 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 2);   }
#line 2521 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 672 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_THIS;   }
#line 2527 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 674 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_SUPER;   }
#line 2533 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 679 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ExtendsInterfaces");   }
#line 2539 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 684 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		// Notice: we need to insert an NID_NULL between 'SimpleName' and 'ExtendsInterfacesOpt'
		//         to make NID_INTERFACE similar to NID_CLASS
		beagle::compiler::Node *intfBody = POP();
		beagle::compiler::Node *extends = POP();
		PUSH_NULL(NULL);
		PUSH_NODE(extends);
		PUSH_NODE(intfBody);
		COMBINE(NID_INTERFACE, 6);
	}
#line 2554 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 698 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(NID_TYPES, 1);   }
#line 2560 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 700 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2566 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 709 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("InterfaceMemberDeclarations");   }
#line 2572 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 714 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BODY, 1);   }
#line 2578 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 716 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2584 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 730 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("MethodBody" );
		COMBINE(0, 1);
	}
#line 2593 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 742 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("VariableInitializers"); }
#line 2599 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 747 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ARRAY, 1);   }
#line 2605 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 749 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2611 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 758 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BLOCK, 1);   }
#line 2617 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 760 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2623 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 769 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LOCAL, 2);   }
#line 2629 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 798 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PASS, (yyvsp[-1]. token ));   }
#line 2635 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 817 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("Block");
		COMBINE(NID_IF, 3);
	}
#line 2644 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 825 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_BLOCK, 1);
		PUSH_NULL("Block");
		COMBINE(NID_IF, 3);
	}
#line 2654 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 834 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IF, 3);   }
#line 2660 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 836 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_IF, 3);   }
#line 2666 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 842 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second;

		first = POP();
		second = TOP();
		(*second)[0][2] = *first;
	}
#line 2678 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 850 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second;

		first = POP();
		second = TOP();
		(*second)[0][2] = *first;
	}
#line 2690 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 861 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("Block");
		COMBINE(NID_IF, 3);
		COMBINE(NID_BLOCK, 1);
	}
#line 2700 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 875 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SWITCH, 2);   }
#line 2706 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 880 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("SwitchBlockStatementGroups" );   }
#line 2712 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 889 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2718 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 150:
#line 891 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2724 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 896 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GROUP, 2);   }
#line 2730 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 152:
#line 901 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2736 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 153:
#line 903 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2742 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 154:
#line 908 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CASE, 1);   }
#line 2748 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 155:
#line 910 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_DEFAULT, (yyvsp[-2]. token ));
		COMBINE(NID_CASE, 1);
	}
#line 2757 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 156:
#line 918 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_WHILE, 2);   }
#line 2763 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 157:
#line 924 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DO, 2);   }
#line 2769 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 159:
#line 929 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ForInit");   }
#line 2775 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 161:
#line 934 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("Expression");   }
#line 2781 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 163:
#line 939 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("ForUpdate");   }
#line 2787 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 164:
#line 944 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR, 4);   }
#line 2793 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 165:
#line 949 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR_EACH, 4);   }
#line 2799 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 166:
#line 951 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_FOR_EACH, 4);   }
#line 2805 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 167:
#line 956 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_RANGE, 2);   }
#line 2811 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 171:
#line 970 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2817 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 172:
#line 972 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2823 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 173:
#line 977 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_BREAK, (yyvsp[-1]. token ));
		COMBINE(NID_BREAK, 1);
	}
#line 2832 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 174:
#line 982 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_ILITERAL, NULL);
		COMBINE(NID_BREAK, 1);
	}
#line 2841 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 175:
#line 990 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_BREAK, (yyvsp[-1]. token ));
		COMBINE(NID_CONTINUE, 1);
	}
#line 2850 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 176:
#line 995 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_ILITERAL, NULL);
		COMBINE(NID_CONTINUE, 1);
	}
#line 2859 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 177:
#line 1003 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_RETURN, 1);   }
#line 2865 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 178:
#line 1009 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_THROW, 1);   }
#line 2871 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 1014 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_READLOCK, 2);   }
#line 2877 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 1016 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_READLOCK, 2);   }
#line 2883 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 1021 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH_NULL("Catches");   }
#line 2889 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 183:
#line 1026 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH_NULL("finally");
		COMBINE(NID_TRY, 3);
	}
#line 2898 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 1031 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_TRY, 3);   }
#line 2904 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 185:
#line 1036 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LIST, 1);   }
#line 2910 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 1038 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2916 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 1043 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CATCH, 2);   }
#line 2922 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 1048 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = NID_FINALLY;   }
#line 2928 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 1059 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_THIS, (yyvsp[0]. token ));   }
#line 2934 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 1069 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NEW, 2);   }
#line 2940 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 199:
#line 1074 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ARGUMENTS, 1);   }
#line 2946 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 1076 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2952 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1081 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		/*
		 * Note: unlike Java, the current specification of the language
		 *       don't support assymetric arrays (i.e. arrays which some
		 *       dimensions have different sizes). Example:
		 *
		 *     int[][] num = new int[2][];
		 *     num[0] = new int[1];
		 *     num[1] = new int[5];
		 *
		 * To enable this feature, the grammar should include/modify the
		 * following rules:
		 *
		 *     ArrayCreationExpression:
		 *         OK_NEW PrimitiveType DimExprs DimsOpt
		 *         ;
		 *
		 *     DimsOpt:
		 *         Dims
		 *         |
		 *         ;
		 *
		 *     Dims:
		 *         TOK_LB TOK_RB
		 *         | Dims TOK_LB TOK_RB
		 *         ;
		 */

		// insert 'DimsOpt' node into 'DimExprs'
		//COMBINE(0, 1);

		COMBINE(NID_NEW_ARRAY, 2);
	}
#line 2990 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 1115 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NEW_ARRAY, 3);   }
#line 2996 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 1120 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_TYPE_ARRAY, NULL);
		TOP()->counter = 1;
	}
#line 3005 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 1125 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 3013 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 205:
#line 1132 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_TYPE_ARRAY, NULL);
		TOP()->counter = 1;
	}
#line 3022 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 1137 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 3030 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 207:
#line 1144 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_FIELD, 2);   }
#line 3036 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1146 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(NID_SUPER, (yyvsp[-2]. token ));
		COMBINE(NID_ACCESS_FIELD, 2);
	}
#line 3045 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 1154 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH_NULL("Primary");
		PUSH_NODE(second);
		PUSH_NODE(third);

		COMBINE(NID_CALL, 3);
	}
#line 3061 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 1166 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CALL, 3);   }
#line 3067 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 211:
#line 1168 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {

		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(NID_SUPER, NULL);
		PUSH_NODE(second);
		PUSH_NODE(third);

		COMBINE(NID_CALL, 3);
	/*
	| Name BeginBlock ArgumentListOpt EndBlock
	| Primary TOK_DOT SimpleName BeginBlock ArgumentListOpt EndBlock
	| TOK_SUPER TOK_DOT TOK_NAME BeginBlock ArgumentListOpt EndBlock
	*/

	}
#line 3090 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 1190 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_ARRAY, 2);   }
#line 3096 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1192 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_ACCESS_ARRAY, 2);   }
#line 3102 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 1204 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INC, 1);   }
#line 3108 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 1209 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DEC, 1);   }
#line 3114 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 1216 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PLUS, 1);   }
#line 3120 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 1218 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MINUS, 1);   }
#line 3126 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 225:
#line 1224 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INC, 1);   }
#line 3132 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 226:
#line 1229 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DEC, 1);   }
#line 3138 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 228:
#line 1235 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_TILDE, 1);   }
#line 3144 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 229:
#line 1237 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BANG, 1);   }
#line 3150 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 231:
#line 1243 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		if (second->type == NID_NULL)
		{
			delete second;
			second = first;
		}
		else
			second->add(first);
		PUSH_NODE(second);
		PUSH_NODE(third);

		COMBINE(NID_CAST, 2);
	}
#line 3174 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 232:
#line 1263 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CAST, 2);   }
#line 3180 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 233:
#line 1265 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		second->add(first);
		PUSH_NODE(second);
		PUSH_NODE(third);

		COMBINE(NID_CAST, 2);
	}
#line 3198 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 235:
#line 1283 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MUL, 2);   }
#line 3204 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 236:
#line 1285 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_DIV, 2);   }
#line 3210 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1287 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MOD, 2);   }
#line 3216 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 239:
#line 1293 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_PLUS, 2);   }
#line 3222 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 240:
#line 1295 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_MINUS, 2);   }
#line 3228 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 242:
#line 1301 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SHL, 2);   }
#line 3234 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 243:
#line 1303 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_SHR, 2);   }
#line 3240 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 245:
#line 1309 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LT, 2);   }
#line 3246 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 246:
#line 1311 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GT, 2);   }
#line 3252 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1313 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_LE, 2);   }
#line 3258 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 248:
#line 1315 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_GE, 2);   }
#line 3264 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 249:
#line 1317 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_INSTANCEOF, 2);   }
#line 3270 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 251:
#line 1323 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_EQ, 2);   }
#line 3276 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 252:
#line 1325 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_NE, 2);   }
#line 3282 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 254:
#line 1331 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BAND, 2);   }
#line 3288 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 256:
#line 1337 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_CARET, 2);   }
#line 3294 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 258:
#line 1343 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_BOR, 2);   }
#line 3300 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 260:
#line 1349 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_AND, 2);   }
#line 3306 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 262:
#line 1355 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_OR, 2);   }
#line 3312 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 264:
#line 1361 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(NID_QUEST, 3);   }
#line 3318 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 267:
#line 1371 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {

		/*
		 * Change the expression notation from infixed to prefixed
		 */

		beagle::compiler::Node *left, *right, *oper;

		right = POP();
		oper = POP();
		left = POP();

		oper->add(left);
		oper->add(right);
		PUSH_NODE(oper);
	}
#line 3339 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 271:
#line 1397 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ASN, (yyvsp[0]. token ));   }
#line 3345 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 272:
#line 1399 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MUASN, (yyvsp[0]. token ));   }
#line 3351 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1401 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_DIASN, (yyvsp[0]. token ));   }
#line 3357 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 274:
#line 1403 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MODASN, (yyvsp[0]. token ));   }
#line 3363 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 275:
#line 1405 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_PLASN, (yyvsp[0]. token ));   }
#line 3369 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 276:
#line 1407 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_MIASN, (yyvsp[0]. token ));   }
#line 3375 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 277:
#line 1409 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SLASN, (yyvsp[0]. token ));   }
#line 3381 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 278:
#line 1411 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SRASN, (yyvsp[0]. token ));   }
#line 3387 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 279:
#line 1413 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ANDASN, (yyvsp[0]. token ));   }
#line 3393 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 280:
#line 1415 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CARETASN, (yyvsp[0]. token ));   }
#line 3399 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 281:
#line 1417 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ORASN, (yyvsp[0]. token ));   }
#line 3405 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 286:
#line 1438 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_ILITERAL, (yyvsp[0]. token ));   }
#line 3411 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 287:
#line 1440 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_FLITERAL, (yyvsp[0]. token ));   }
#line 3417 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 288:
#line 1442 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_BLITERAL, (yyvsp[0]. token ));   }
#line 3423 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 289:
#line 1444 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_SLITERAL, (yyvsp[0]. token ));   }
#line 3429 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 290:
#line 1446 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_CLITERAL, (yyvsp[0]. token ));   }
#line 3435 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 291:
#line 1448 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NLITERAL, (yyvsp[0]. token ));   }
#line 3441 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 295:
#line 1459 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_BOOLEAN, (yyvsp[0]. token ));    }
#line 3447 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 298:
#line 1469 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT8, (yyvsp[0]. token ));    }
#line 3453 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 299:
#line 1471 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT16, (yyvsp[0]. token ));    }
#line 3459 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 300:
#line 1473 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT32, (yyvsp[0]. token ));    }
#line 3465 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 301:
#line 1475 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_UINT64, (yyvsp[0]. token ));    }
#line 3471 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 302:
#line 1477 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT8, (yyvsp[0]. token ));    }
#line 3477 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 303:
#line 1479 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT16, (yyvsp[0]. token ));    }
#line 3483 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 304:
#line 1481 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT32, (yyvsp[0]. token ));    }
#line 3489 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 305:
#line 1483 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_INT64, (yyvsp[0]. token ));    }
#line 3495 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 306:
#line 1485 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_CHAR, (yyvsp[0]. token ));    }
#line 3501 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 307:
#line 1490 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_FLOAT, (yyvsp[0]. token ));    }
#line 3507 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 308:
#line 1492 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(NID_DOUBLE, (yyvsp[0]. token ));    }
#line 3513 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 311:
#line 1502 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_TYPE_ARRAY, 1);
		TOP()->counter = 1;
	}
#line 3522 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 312:
#line 1507 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(NID_TYPE_ARRAY, 1);
		TOP()->counter = 1;
	}
#line 3531 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 313:
#line 1512 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::compiler::Node *node = TOP();
		++node->counter;
	}
#line 3540 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 314:
#line 1519 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(NID_NAME, (yyvsp[0]. token ));   }
#line 3546 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 316:
#line 1525 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1646  */
    {
		/*beagle::compiler::Node *current = POP();

		if (TOP()->getChildCount() > 0)
		{
			TOP()->addChild( *current );
		}
		else
		{
			PUSH_NODE(current);
			COMBINE(NID_QNAME, 2);
		}*/
		beagle::compiler::Node *current = POP();
		TOP()->text += '.';
		TOP()->text += current->text;
		delete current;
	}
#line 3568 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3572 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (parserContext, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (parserContext, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, parserContext);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, parserContext);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parserContext, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, parserContext);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, parserContext);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1544 "/media/dados/projetos/beagle/modules/compiler/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
	return yytname[YYTRANSLATE(tok)];
}



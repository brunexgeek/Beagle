/*
 * Godiva Grammar: godgram.y
 *
 * Based on Java grammar in Gosling/Joy/Steele, Chapter 19
 */


/* Require bison 2.3 or later */
%require "2.3"
%define api.pure full
%lex-param   { yyscan_t scanner }
%parse-param { parser_context_t *parserContext }


%code requires {


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

}

%code{

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

#define SPUSH(type, string) \
	do {                                                \
		beagle_push( parserContext, (type), NULL,       \
			beagle_get_lineno(parserContext->lexer),    \
			beagle_get_column(parserContext->lexer) );  \
		TOP()->text = (string);                         \
	} while (0)

#define NPUSH(node)          beagle_push( parserContext, (node) )
#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)

#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wsign-compare"

}

/* namespace to enclose parser in */
%name-prefix "beagle_"


/* keep track of the current position within the input
%locations
%initial-action
{
	// initialize the initial location object
	//@$.begin.filename = @$.end.filename = &driver.streamname;
};*/


/* verbose error messages */
%error-verbose

/*
 * %union declares of what kinds of values appear on the value stack
 */
%union {
	Token* token;
}

/*
 * each token is declared.  tokens store leaf values on the value stack
 *
 * Back in javalex.l, we put things on the stack by assigning to yylval

 "abstract"           { yylval.node = alcnode(ABSTRACT, 0); return ABSTRACT; }

 *
 */
%token < token > TOK_ABSTRACT
%token < token > TOK_BOOLEAN
%token < token > TOK_BREAK
%token < token > TOK_CASE
%token < token > TOK_CATCH
%token < token > TOK_CHAR
%token < token > TOK_CLASS
%token < token > TOK_CONST
%token < token > TOK_DEFAULT
%token < token > TOK_DO
%token < token > TOK_DOUBLE
%token < token > TOK_ELSE
%token < token > TOK_EXTENDS
%token < token > TOK_FINAL
%token < token > TOK_FINALLY
%token < token > TOK_FLOAT
%token < token > TOK_FOR
%token < token > TOK_GOTO
%token < token > TOK_IF
%token < token > TOK_IMPLEMENTS
%token < token > TOK_IMPORT
%token < token > TOK_INSTANCEOF
%token < token > TOK_INTERFACE
%token < token > TOK_LONG
%token < token > TOK_NATIVE
%token < token > TOK_NEW
%token < token > TOK_PACKAGE
%token < token > TOK_PRIVATE
%token < token > TOK_PROTECTED
%token < token > TOK_PUBLIC
%token < token > TOK_RETURN
%token < token > TOK_SUSPEND
%token < token > TOK_STATIC
%token < token > TOK_SUPER
%token < token > TOK_SWITCH
%token < token > TOK_READLOCK
%token < token > TOK_WRITELOCK
%token < token > TOK_THIS
%token < token > TOK_THROW
%token < token > TOK_THROWS
%token < token > TOK_VOID
%token < token > TOK_VOLATILE
%token < token > TOK_WHILE
%token < token > TOK_NAME
%token < token > TOK_QNAME
%token < token > TOK_CONTINUE
%token < token > TOK_TRY
%token < token > TOK_NULLLITERAL
%token < token > TOK_BOOLLITERAL
%token < token > TOK_INTLITERAL
%token < token > TOK_CHARLITERAL
%token < token > TOK_FLOATLITERAL
%token < token > TOK_STRINGLITERAL
%token < token > TOK_UINT8
%token < token > TOK_UINT16
%token < token > TOK_UINT32
%token < token > TOK_UINT64
%token < token > TOK_INT8
%token < token > TOK_INT16
%token < token > TOK_INT32
%token < token > TOK_INT64
%token < token > TOK_LP
%token < token > TOK_RP
%token < token > TOK_LC
%token < token > TOK_RC
%token < token > TOK_LB
%token < token > TOK_RB
%token < token > TOK_SM
%token < token > TOK_CM
%token < token > TOK_DOT
%token < token > TOK_ASN
%token < token > TOK_LT
%token < token > TOK_GT
%token < token > TOK_BANG
%token < token > TOK_TILDE
%token < token > TOK_QUEST
%token < token > TOK_COLON
%token < token > TOK_EQ
%token < token > TOK_NE
%token < token > TOK_LE
%token < token > TOK_GE
%token < token > TOK_ANDAND
%token < token > TOK_OROR
%token < token > TOK_INC
%token < token > TOK_DEC
%token < token > TOK_PLUS
%token < token > TOK_MINUS
%token < token > TOK_MUL
%token < token > TOK_DIV
%token < token > TOK_AND
%token < token > TOK_OR
%token < token > TOK_CARET
%token < token > TOK_MOD
%token < token > TOK_SHL
%token < token > TOK_SHR
%token < token > TOK_PLASN
%token < token > TOK_MIASN
%token < token > TOK_MUASN
%token < token > TOK_DIASN
%token < token > TOK_ANDASN
%token < token > TOK_ORASN
%token < token > TOK_CARETASN
%token < token > TOK_SLASN
%token < token > TOK_SRASN
%token < token > TOK_MODASN
%token < token > TOK_BAD_TOKEN
%token < token > TOK_EOL
%token < token > TOK_AT
%token < token > TOK_VARARG
%token < token > TOK_INDENT
%token < token > TOK_DEDENT
%token < token > TOK_IN
%token < token > TOK_RANGE
%token < token > TOK_PASS


/*
 * each nonterminal is declared.  nonterminals correspond to internal nodes
 */
%type < token > Literal Type PrimitiveType NumericType IntegralType
%type < token > FloatingPointType ReferenceType
%type < token > ArrayType Name SimpleName
%type < token > CompilationUnit ImportDeclarations
%type < token > PackageDeclaration ImportDeclaration
%type < token > SingleTypeImportDeclaration TypeImportOnDemandDeclaration
%type < token > TypeDeclaration Modifiers Modifier ClassDeclaration
%type < token > Interfaces InterfaceTypeList ClassBodyOpt
%type < token > ClassBodyDeclarations ClassBodyDeclaration
%type < token > ClassMemberDeclaration FieldDeclaration VariableDeclarators
%type < token > VariableDeclarator VariableInitializer
%type < token > MethodDeclaration MethodHeader Range
%type < token > FormalParameterList FormalParameter Throws ClassTypeList
%type < token > MethodBodyOpt StaticInitializer ConstructorDeclaration
%type < token > ConstructorBody ForEachStatement
%type < token > ExplicitConstructorInvocation InterfaceDeclaration
%type < token > ExtendsInterfaces InterfaceBody InterfaceMemberDeclarations
%type < token > InterfaceMemberDeclaration ConstantDeclaration
%type < token > AbstractMethodDeclaration ArrayInitializer
%type < token > VariableInitializers Block BlockStatements BlockStatement
%type < token > LocalVariableDeclarationStatement LocalVariableDeclaration
%type < token > Statement EmptyStatement
%type < token > StatementWithoutTrailingSubstatement
%type < token > ExpressionStatement StatementExpression IfThenStatement
%type < token > IfThenElseStatement IfThenInlineStatement
%type < token > SwitchStatement SwitchBlock SwitchBlockStatementGroups
%type < token > SwitchBlockStatementGroup SwitchLabels SwitchLabel
%type < token > WhileStatement DoStatement
%type < token > ForStatement ForInit ForUpdate
%type < token > StatementExpressionList BreakStatement ContinueStatement
%type < token > ReturnStatement ThrowStatement LockStatement
%type < token > TryStatement Catches CatchClause Finally Primary
%type < token > PrimaryNoNewArray ClassInstanceCreationExpression
%type < token > ArgumentList ArrayCreationExpression Dimensions DimensionsExpr
%type < token > FieldAccess MethodInvocation ArrayAccess PostFixExpression
%type < token > PostIncrementExpression PostDecrementExpression
%type < token > UnaryExpression PreIncrementExpression PreDecrementExpression
%type < token > UnaryExpressionNotPlusMinus CastExpression
%type < token > MultiplicativeExpression AdditiveExpression ShiftExpression
%type < token > RelationalExpression EqualityExpression AndExpression
%type < token > ExclusiveOrExpression InclusiveOrExpression
%type < token > ConditionalAndExpression ConditionalOrExpression
%type < token > ConditionalExpression AssignmentExpression Assignment
%type < token > LeftHandSide AssignmentOperator Expression ConstantExpression
%type < token > ImportDeclarationsOpt
%type < token > ModifiersOpt SuperOpt InterfacesOpt
%type < token > ThrowsOpt FormalParameterListOpt CatchesOpt
%type < token > ArgumentListOpt
%type < token > ExtendsInterfacesOpt InterfaceMemberDeclarationsOpt
%type < token > VariableInitializersOpt SwitchBlockStatementGroupsOpt
%type < token > ForInitOpt ExpressionOpt ForUpdateOpt
%type < token > AnnotationDeclarations AnnotationDeclaration
%type < token > BeginBlock EndBlock AnnotationDeclarationsOpt


%start CompilationUnit

%%


 /*
  * Structural rules
  */


CompilationUnit:
	PackageDeclaration ImportDeclarationsOpt TypeDeclaration
	{   COMBINE(NID_UNIT, 3);   }
	;

PackageDeclaration:
	TOK_PACKAGE Name TOK_EOL
	{   COMBINE(NID_PACKAGE, 1);   }
	;

ImportDeclarationsOpt:
	ImportDeclarations
	{   TOP()->text = "ImportDeclarations";   }
	| {   SPUSH(NID_NULL, "ImportDeclarations");   }
	;

ImportDeclarations:
	ImportDeclaration
	{   COMBINE(NID_IMPORTS, 1);   }
	| ImportDeclarations ImportDeclaration
	{   COMBINE(0, 1);   }
	;

ImportDeclaration:
	SingleTypeImportDeclaration
	| TypeImportOnDemandDeclaration
	;

SingleTypeImportDeclaration:
	TOK_IMPORT Name TOK_EOL
	{   COMBINE(NID_IMPORT, 1);   }
	;

TypeImportOnDemandDeclaration:
	TOK_IMPORT Name TOK_DOT TOK_MUL TOK_EOL
	{   COMBINE(NID_IMPORT_ALL, 1);   }
	;

TypeDeclaration:
	ClassDeclaration
	| InterfaceDeclaration
	;

AnnotationDeclarationsOpt:
	AnnotationDeclarations
	| {   SPUSH(NID_NULL, "AnnotationDeclarations");   }
	;

AnnotationDeclarations:
	AnnotationDeclaration
	{   COMBINE(NID_ANNOTATIONS, 1);   }
	| AnnotationDeclarations AnnotationDeclaration
	{   COMBINE(0, 1);   }
	;

AnnotationDeclaration:
	TOK_AT SimpleName TOK_LP ArgumentListOpt TOK_RP TOK_EOL
	{   COMBINE(NID_ANNOTATION, 2);   }
	| TOK_AT SimpleName TOK_EOL
	{
		SPUSH(NID_NULL, "ArgumentList");
		COMBINE(NID_ANNOTATION, 2);
	}
	;

Modifiers:
	Modifier
	{   COMBINE(NID_MODIFIERS, 1);   }
	| Modifiers Modifier
	{   COMBINE(0, 1);   }
	;

Modifier:
	TOK_PUBLIC
	{   PUSH(NID_PUBLIC, $1);   }
	| TOK_PROTECTED
	{   PUSH(NID_PROTECTED, $1);   }
	| TOK_PRIVATE
	{   PUSH(NID_PRIVATE, $1);   }
	| TOK_STATIC
	{   PUSH(NID_STATIC, $1);   }
	| TOK_ABSTRACT
	{   PUSH(NID_ABSTRACT, $1);   }
	| TOK_FINAL
	{   PUSH(NID_FINAL, $1);   }
	| TOK_NATIVE
	{   PUSH(NID_NATIVE, $1);   }
	| TOK_READLOCK
	{   PUSH(NID_READLOCK, $1);   }
	| TOK_WRITELOCK
	{   PUSH(NID_WRITELOCK, $1);   }
	| TOK_VOLATILE
	{   PUSH(NID_VOLATILE, $1);   }
	| TOK_CONST
	{   PUSH(NID_CONST, $1);   }
	;

ClassDeclaration:
	AnnotationDeclarationsOpt ModifiersOpt TOK_CLASS SimpleName SuperOpt InterfacesOpt TOK_EOL ClassBodyOpt
	{   COMBINE(NID_CLASS, 6);   }
	;

ModifiersOpt:
	Modifiers
	| {   SPUSH(NID_NULL, "Modifiers");   }
	;

SuperOpt:
	TOK_EXTENDS /* ClassOrInterfaceType */ Name
	{   TOP()->text = "Super";   }
	| {   SPUSH(NID_NULL, "Super");   }
	;

InterfacesOpt:
	Interfaces
	{   TOP()->text = "Interfaces";   }
	| {   SPUSH(NID_NULL, "Interfaces");   }
	;

Interfaces:
	TOK_IMPLEMENTS InterfaceTypeList
	;

InterfaceTypeList:
	/* ClassOrInterfaceType */ Name
	{    COMBINE(NID_TYPES, 1);   }
	| InterfaceTypeList TOK_CM /* ClassOrInterfaceType */ Name
	{    COMBINE(0, 1);    }
	;

ClassBodyOpt:
	BeginBlock ClassBodyDeclarations EndBlock
	| {   SPUSH(NID_BODY, "ClassBody");   }
	;

ClassBodyDeclarations:
	ClassBodyDeclaration
	{   COMBINE(NID_BODY, 1);   }
	| ClassBodyDeclarations ClassBodyDeclaration
	{   COMBINE(0, 1);   }
	;

ClassBodyDeclaration:
	ClassMemberDeclaration
	| AnnotationDeclarationsOpt StaticInitializer
	;

ClassMemberDeclaration:
	FieldDeclaration
	| MethodDeclaration
	| ConstructorDeclaration
	;

FieldDeclaration:
	AnnotationDeclarationsOpt ModifiersOpt Type VariableDeclarators TOK_EOL
	{   COMBINE(NID_FIELD, 4);   }
	;

VariableDeclarators:
	VariableDeclarator
	{   COMBINE(NID_LIST, 1);   }
	| VariableDeclarators TOK_CM VariableDeclarator
	{   COMBINE(0, 1);   }
	;

VariableDeclarator:
	SimpleName
	{
		SPUSH(NID_NULL, "VariableInitializer");
		COMBINE(NID_DECLARATOR, 2);
	}
	| SimpleName TOK_ASN VariableInitializer
	{   COMBINE(NID_DECLARATOR, 2);   }
	;

VariableInitializer:
	Expression
	| ArrayInitializer
	;

MethodDeclaration:
	MethodHeader TOK_EOL MethodBodyOpt
	{   COMBINE(0, 1);   }
	;

VoidType:
	TOK_VOID
	{   PUSH(NID_VOID, $1);   }
	;

MethodHeader:
	AnnotationDeclarationsOpt ModifiersOpt Type SimpleName TOK_LP FormalParameterListOpt TOK_RP ThrowsOpt
	{   COMBINE(NID_METHOD, 6);   }
	| AnnotationDeclarationsOpt ModifiersOpt VoidType SimpleName TOK_LP FormalParameterListOpt TOK_RP ThrowsOpt
	{   COMBINE(NID_METHOD, 6);   }
	;

ThrowsOpt:
	Throws
	| {   PUSH(NID_NULL, NULL /* "Throws" */ );   }
	;

Throws:
	TOK_THROWS ClassTypeList
	;

FormalParameterListOpt:
	FormalParameterList
	| {   PUSH(NID_NULL, NULL /* "FormalParameterList" */ );   }

FormalParameterList:
	FormalParameter
	{  COMBINE(NID_PARAMETERS, 1);   }
	| FormalParameterList TOK_CM FormalParameter
	{  COMBINE(0, 1);   }
	;

FormalParameter:
	Type SimpleName
	{  COMBINE(NID_PARAMETER, 2);   }
	| TOK_VARARG Type SimpleName
	{
		COMBINE(NID_PARAMETER, 2);
		++TOP()->counter;
	}
	;

ClassTypeList:
	/* ClassOrInterfaceType */ Name
	{   COMBINE(NID_THROWS, 1);   }
	| ClassTypeList TOK_CM /* ClassOrInterfaceType */ Name
	{   COMBINE(0, 1);   }
	;

MethodBodyOpt:
	Block
	| {   SPUSH(NID_BLOCK, "MethodBody");   }
	;

StaticInitializer:
	TOK_STATIC Block
	{   COMBINE(NID_STATIC_INIT, 1);   }
	;

ConstructorDeclaration:
	AnnotationDeclarationsOpt ModifiersOpt SimpleName TOK_LP FormalParameterListOpt TOK_RP ThrowsOpt TOK_EOL ConstructorBody
	{   COMBINE(NID_CONSTRUCTOR, 6);   }
	;

ArgumentListOpt:
	ArgumentList
	| {   PUSH(NID_NULL, NULL /* "ArgumentList" */ );   }
	;

ConstructorBody:
	BeginBlock ExplicitConstructorInvocation EndBlock
	{   COMBINE(NID_BLOCK, 1);   }
	| BeginBlock BlockStatements EndBlock
	| BeginBlock ExplicitConstructorInvocation BlockStatements EndBlock
	{   COMBINE(NID_BLOCK, 2);   }
	;

ExplicitConstructorInvocation:
	TOK_THIS TOK_LP ArgumentListOpt TOK_RP TOK_EOL
	{   TOP()->type = NID_THIS;   }
	| TOK_SUPER TOK_LP ArgumentListOpt TOK_RP TOK_EOL
	{   TOP()->type = NID_SUPER;   }
	;

ExtendsInterfacesOpt:
	ExtendsInterfaces
	| {   PUSH(NID_NULL, NULL /* "ExtendsInterfaces" */ );   }
	;

InterfaceDeclaration:
	AnnotationDeclarationsOpt ModifiersOpt TOK_INTERFACE SimpleName ExtendsInterfacesOpt TOK_EOL InterfaceBody
	{
		// Notice: we need to insert an NID_NULL between 'SimpleName' and 'ExtendsInterfacesOpt'
		//         to make NID_INTERFACE similar to NID_CLASS
		beagle::compiler::Node *intfBody = POP();
		beagle::compiler::Node *extends = POP();
		PUSH(NID_NULL, NULL);
		NPUSH(extends);
		NPUSH(intfBody);
		COMBINE(NID_INTERFACE, 6);
	}
	;

ExtendsInterfaces:
	TOK_EXTENDS /* ClassOrInterfaceType */ Name
	{    COMBINE(NID_TYPES, 1);   }
	| ExtendsInterfaces TOK_CM /* ClassOrInterfaceType */ Name
	{    COMBINE(0, 1);   }
	;

InterfaceBody:
	BeginBlock InterfaceMemberDeclarationsOpt EndBlock
	;

InterfaceMemberDeclarationsOpt:
	InterfaceMemberDeclarations
	| {   PUSH(NID_NULL, NULL /* "InterfaceMemberDeclarations" */ );   }
	;

InterfaceMemberDeclarations:
	InterfaceMemberDeclaration
	{   COMBINE(NID_BODY, 1);   }
	| InterfaceMemberDeclarations InterfaceMemberDeclaration
	{   COMBINE(0, 1);   }
	;

InterfaceMemberDeclaration:
	ConstantDeclaration
	| AbstractMethodDeclaration
	;

ConstantDeclaration:
	FieldDeclaration
	;

AbstractMethodDeclaration:
	MethodHeader TOK_EOL
	{
		SPUSH(NID_NULL, "MethodBody" );
		COMBINE(0, 1);
	}
	;

ArrayInitializer:
	TOK_LC VariableInitializersOpt TOK_RC
	;

VariableInitializersOpt:
	VariableInitializers
	| {   SPUSH(NID_NULL, "VariableInitializers"); }
	;

VariableInitializers:
	VariableInitializer
	{   COMBINE(NID_ARRAY, 1);   }
	| VariableInitializers TOK_CM VariableInitializer
	{   COMBINE(0, 1);   }
	;

Block:
	BeginBlock BlockStatements EndBlock
	;

BlockStatements:
	BlockStatement
	{   COMBINE(NID_BLOCK, 1);   }
	| BlockStatements BlockStatement
	{   COMBINE(0, 1);   }
	;

BlockStatement:
	Statement
	;

LocalVariableDeclarationStatement:
	LocalVariableDeclaration TOK_EOL
	;

LocalVariableDeclaration:
	Type VariableDeclarators
	{   COMBINE(NID_LOCAL, 2);   }
	;

Statement:
	StatementWithoutTrailingSubstatement
	| IfThenStatement
	| IfThenInlineStatement
	| IfThenElseStatement
	| WhileStatement
	| ForStatement
	| ForEachStatement
	| LocalVariableDeclarationStatement
	;

StatementWithoutTrailingSubstatement:
	ExpressionStatement
	| SwitchStatement
	| DoStatement
	| BreakStatement
	| ContinueStatement
	| ReturnStatement
	| LockStatement
	| ThrowStatement
	| TryStatement
	| EmptyStatement
	;

EmptyStatement:
	TOK_PASS TOK_EOL
	{   PUSH(NID_PASS, $1);   }
	;

ExpressionStatement:
	StatementExpression TOK_EOL
	;

StatementExpression:
	Assignment
	| PreIncrementExpression
	| PreDecrementExpression
	| PostIncrementExpression
	| PostDecrementExpression
	| MethodInvocation
	| ClassInstanceCreationExpression
	;

IfThenStatement:
	TOK_IF TOK_LP Expression TOK_RP TOK_EOL Block
	{
		SPUSH(NID_NULL, "Block");
		COMBINE(NID_IF, 3);
	}
	;

IfThenInlineStatement:
	TOK_IF TOK_LP Expression TOK_RP StatementExpression TOK_EOL
	{
		COMBINE(NID_BLOCK, 1);
		SPUSH(NID_NULL, "Block");
		COMBINE(NID_IF, 3);
	}
	;

IfThenElseStatement:
	TOK_IF TOK_LP Expression TOK_RP TOK_EOL Block TOK_ELSE TOK_EOL Block
	{   COMBINE(NID_IF, 3);   }
	;

SwitchStatement:
	TOK_SWITCH TOK_LP Expression TOK_RP TOK_EOL SwitchBlock
	{   COMBINE(NID_SWITCH, 2);   }
	;

SwitchBlockStatementGroupsOpt:
	SwitchBlockStatementGroups
	| {   SPUSH(NID_NULL, "SwitchBlockStatementGroups" );   }
	;

SwitchBlock:
	BeginBlock SwitchBlockStatementGroupsOpt EndBlock
	;

SwitchBlockStatementGroups:
	SwitchBlockStatementGroup
	{   COMBINE(NID_LIST, 1);   }
	| SwitchBlockStatementGroups SwitchBlockStatementGroup
	{   COMBINE(0, 1);   }
	;

SwitchBlockStatementGroup:
	SwitchLabels Block
	{   COMBINE(NID_GROUP, 2);   }
	;

SwitchLabels:
	SwitchLabel
	{   COMBINE(NID_LIST, 1);   }
	| SwitchLabels SwitchLabel
	{   COMBINE(0, 1);   }
	;

SwitchLabel:
	TOK_CASE ConstantExpression TOK_COLON TOK_EOL
	{   COMBINE(NID_CASE, 1);   }
	| TOK_DEFAULT TOK_COLON TOK_EOL
	{
		PUSH(NID_DEFAULT, $1);
		COMBINE(NID_CASE, 1);
	}
	;

WhileStatement:
	TOK_WHILE TOK_LP Expression TOK_RP TOK_EOL Block
	{   COMBINE(NID_WHILE, 2);   }
	;


DoStatement:
	TOK_DO TOK_EOL Block TOK_WHILE TOK_LP Expression TOK_RP TOK_EOL
	{   COMBINE(NID_DO, 2);   }
	;

ForInitOpt:
	ForInit
	| {   PUSH(NID_NULL, NULL /* "ForInit" */ );   }
	;

ExpressionOpt:
	Expression
	| {   PUSH(NID_NULL, NULL /* "Expression" */ );   }
	;

ForUpdateOpt:
	ForUpdate
	| {   PUSH(NID_NULL, NULL /* "ForUpdate" */ );   }
	;

ForStatement:
	TOK_FOR TOK_LP ForInitOpt TOK_SM ExpressionOpt TOK_SM ForUpdateOpt TOK_RP TOK_EOL Block
	{   COMBINE(NID_FOR, 4);   }
	;

ForEachStatement:
	TOK_FOR TOK_LP Type SimpleName TOK_IN Expression TOK_RP TOK_EOL Block
	{   COMBINE(NID_FOR_EACH, 4);   }
	| TOK_FOR TOK_LP Type SimpleName TOK_IN Range TOK_RP TOK_EOL Block
	{   COMBINE(NID_FOR_EACH, 4);   }
	;

Range:
	TOK_RANGE TOK_LP Expression TOK_CM Expression TOK_RP
	{   COMBINE(NID_RANGE, 2);   }
	;

ForInit:
	StatementExpressionList
	| LocalVariableDeclaration
	;

ForUpdate:
	StatementExpressionList
	;

StatementExpressionList:
	StatementExpression
	{   COMBINE(NID_LIST, 1);   }
	| StatementExpressionList TOK_CM StatementExpression
	{   COMBINE(0, 1);   }
	;

BreakStatement:
	TOK_BREAK TOK_INTLITERAL TOK_EOL
	{
		PUSH(NID_BREAK, $2);
		COMBINE(NID_BREAK, 1);
	}
	| TOK_BREAK TOK_EOL
	{
		PUSH(NID_INTLITERAL, NULL);
		COMBINE(NID_BREAK, 1);
	}
	;

ContinueStatement:
	TOK_CONTINUE TOK_INTLITERAL TOK_EOL
	{
		PUSH(NID_BREAK, $2);
		COMBINE(NID_CONTINUE, 1);
	}
	| TOK_CONTINUE TOK_EOL
	{
		PUSH(NID_INTLITERAL, NULL);
		COMBINE(NID_CONTINUE, 1);
	}
	;

ReturnStatement:
	TOK_RETURN ExpressionOpt TOK_EOL
	{   COMBINE(NID_RETURN, 1);   }
	;


ThrowStatement:
	TOK_THROW Expression TOK_EOL
	{   COMBINE(NID_THROW, 1);   }
	;

LockStatement:
	TOK_READLOCK TOK_LP Expression TOK_RP TOK_EOL Block
	{   COMBINE(NID_READLOCK, 2);   }
	| TOK_WRITELOCK TOK_LP Expression TOK_RP TOK_EOL Block
	{   COMBINE(NID_READLOCK, 2);   }
	;

CatchesOpt:
	Catches
	| {   PUSH(NID_NULL, NULL /* "Catches" */ );   }
	;

TryStatement:
	TOK_TRY TOK_EOL Block Catches
	{
		PUSH(NID_NULL, NULL /* "finally" */ );
		COMBINE(NID_TRY, 3);
	}
	| TOK_TRY TOK_EOL Block CatchesOpt Finally
	{   COMBINE(NID_TRY, 3);   }
	;

Catches:
	CatchClause
	{   COMBINE(NID_LIST, 1);   }
	| Catches CatchClause
	{   COMBINE(0, 1);   }
	;

CatchClause:
	TOK_CATCH TOK_LP FormalParameter TOK_RP TOK_EOL Block
	{   COMBINE(NID_CATCH, 2);   }
	;

Finally:
	TOK_FINALLY TOK_EOL Block
	{   TOP()->type = NID_FINALLY;   }
	;

Primary:
	PrimaryNoNewArray
	| ArrayCreationExpression
	;

PrimaryNoNewArray:
	Literal
	| TOK_THIS
	{   PUSH(NID_THIS, $1);   }
	| TOK_LP Expression TOK_RP
	| ClassInstanceCreationExpression
	| FieldAccess
	| MethodInvocation
	| ArrayAccess
	;

ClassInstanceCreationExpression:
	TOK_NEW /* ClassOrInterfaceType */ Name TOK_LP ArgumentListOpt TOK_RP
	{   COMBINE(NID_NEW, 2);   }
	;

ArgumentList:
	Expression
	{   COMBINE(NID_ARGUMENTS, 1);   }
	| ArgumentList TOK_CM Expression
	{   COMBINE(0, 1);   }
	;

ArrayCreationExpression:
	TOK_NEW PrimitiveType DimensionsExpr
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
	| TOK_NEW /* ClassOrInterfaceType */ Name DimensionsExpr
	{   COMBINE(NID_NEW_ARRAY, 3);   }
	;

Dimensions:
	TOK_LB TOK_RB
	{
		PUSH(NID_TYPE_ARRAY, NULL);
		TOP()->counter = 1;
	}
	| Dimensions TOK_LB TOK_RB
	{
		++TOP()->counter;
	}
	;

DimensionsExpr:
	TOK_LB Expression TOK_RB
	{
		PUSH(NID_TYPE_ARRAY, NULL);
		TOP()->counter = 1;
	}
	| DimensionsExpr TOK_LB Expression TOK_RB
	{
		++TOP()->counter;
	}
	;

FieldAccess:
	Primary TOK_DOT SimpleName
	{   COMBINE(NID_ACCESS_FIELD, 2);   }
	| TOK_SUPER TOK_DOT SimpleName
	{
		PUSH(NID_SUPER, $1);
		COMBINE(NID_ACCESS_FIELD, 2);
	}
	;

MethodInvocation:
	Name TOK_LP ArgumentListOpt TOK_RP
	{
		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(NID_NULL, NULL /* "Primary" */ );
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CALL, 3);
	}
	| Primary TOK_DOT SimpleName TOK_LP ArgumentListOpt TOK_RP
	{   COMBINE(NID_CALL, 3);   }
	| TOK_SUPER TOK_DOT SimpleName TOK_LP ArgumentListOpt TOK_RP
	{

		beagle::compiler::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(NID_SUPER, NULL);
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CALL, 3);
	/*
	| Name BeginBlock ArgumentListOpt EndBlock
	| Primary TOK_DOT SimpleName BeginBlock ArgumentListOpt EndBlock
	| TOK_SUPER TOK_DOT TOK_NAME BeginBlock ArgumentListOpt EndBlock
	*/

	}
	;

ArrayAccess:
	Name TOK_LB Expression TOK_RB
	{   COMBINE(NID_ACCESS_ARRAY, 2);   }
	| ArrayAccess TOK_LB Expression TOK_RB
	{   COMBINE(NID_ACCESS_ARRAY, 2);   }
	;

PostFixExpression:
	Primary
	| Name
	| PostIncrementExpression
	| PostDecrementExpression
	;

PostIncrementExpression:
	PostFixExpression TOK_INC
	{   COMBINE(NID_INC, 1);   }
	;

PostDecrementExpression:
	PostFixExpression TOK_DEC
	{   COMBINE(NID_DEC, 1);   }
	;

UnaryExpression:
	PreIncrementExpression
	| PreDecrementExpression
	| TOK_PLUS UnaryExpression
	{   COMBINE(NID_PLUS, 1);   }
	| TOK_MINUS UnaryExpression
	{   COMBINE(NID_MINUS, 1);   }
	| UnaryExpressionNotPlusMinus
	;

PreIncrementExpression:
	TOK_INC UnaryExpression
	{   COMBINE(NID_INC, 1);   }
	;

PreDecrementExpression:
	TOK_DEC UnaryExpression
	{   COMBINE(NID_DEC, 1);   }
	;

UnaryExpressionNotPlusMinus:
	PostFixExpression
	| TOK_TILDE UnaryExpression
	{   COMBINE(NID_TILDE, 1);   }
	| TOK_BANG UnaryExpression
	{   COMBINE(NID_BANG, 1);   }
	| CastExpression
	;

CastExpression:
	TOK_LP PrimitiveType Dimensions TOK_RP UnaryExpression
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
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CAST, 2);
	}
	| TOK_LP Expression TOK_RP UnaryExpressionNotPlusMinus
	{   COMBINE(NID_CAST, 2);   }
	| TOK_LP Name Dimensions TOK_RP UnaryExpressionNotPlusMinus
	{
		beagle::compiler::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		second->add(first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(NID_CAST, 2);
	}
	;

MultiplicativeExpression:
	UnaryExpression
	| MultiplicativeExpression TOK_MUL UnaryExpression
	{   COMBINE(NID_MUL, 2);   }
	| MultiplicativeExpression TOK_DIV UnaryExpression
	{   COMBINE(NID_DIV, 2);   }
	| MultiplicativeExpression TOK_MOD UnaryExpression
	{   COMBINE(NID_MOD, 2);   }
	;

AdditiveExpression:
	MultiplicativeExpression
	| AdditiveExpression TOK_PLUS MultiplicativeExpression
	{   COMBINE(NID_PLUS, 2);   }
	| AdditiveExpression TOK_MINUS MultiplicativeExpression
	{   COMBINE(NID_MINUS, 2);   }
	;

ShiftExpression:
	AdditiveExpression
	| ShiftExpression TOK_SHL AdditiveExpression
	{   COMBINE(NID_SHL, 2);   }
	| ShiftExpression TOK_SHR AdditiveExpression
	{   COMBINE(NID_SHR, 2);   }
	;

RelationalExpression:
	ShiftExpression
	| RelationalExpression TOK_LT ShiftExpression
	{   COMBINE(NID_LT, 2);   }
	| RelationalExpression TOK_GT ShiftExpression
	{   COMBINE(NID_GT, 2);   }
	| RelationalExpression TOK_LE ShiftExpression
	{   COMBINE(NID_LE, 2);   }
	| RelationalExpression TOK_GE ShiftExpression
	{   COMBINE(NID_GE, 2);   }
	| RelationalExpression TOK_INSTANCEOF ReferenceType
	{   COMBINE(NID_INSTANCEOF, 2);   }
	;

EqualityExpression:
	RelationalExpression
	| EqualityExpression TOK_EQ RelationalExpression
	{   COMBINE(NID_EQ, 2);   }
	| EqualityExpression TOK_NE RelationalExpression
	{   COMBINE(NID_NE, 2);   }
	;

AndExpression:
	EqualityExpression
	| AndExpression TOK_AND EqualityExpression
	{   COMBINE(NID_AND, 2);   }
	;

ExclusiveOrExpression:
	AndExpression
	| ExclusiveOrExpression TOK_CARET AndExpression
	{   COMBINE(NID_CARET, 2);   }
	;

InclusiveOrExpression:
	ExclusiveOrExpression
	| InclusiveOrExpression TOK_OR ExclusiveOrExpression
	{   COMBINE(NID_OR, 2);   }
	;

ConditionalAndExpression:
	InclusiveOrExpression
	| ConditionalAndExpression TOK_ANDAND InclusiveOrExpression
	{   COMBINE(NID_ANDAND, 2);   }
	;

ConditionalOrExpression:
	ConditionalAndExpression
	| ConditionalOrExpression TOK_OROR ConditionalAndExpression
	{   COMBINE(NID_OROR, 2);   }
	;

ConditionalExpression:
	ConditionalOrExpression
	| ConditionalOrExpression TOK_QUEST Expression TOK_COLON ConditionalExpression
	{   COMBINE(NID_QUEST, 3);   }
	;

AssignmentExpression:
	ConditionalExpression
	| Assignment
	;

Assignment:
	LeftHandSide AssignmentOperator AssignmentExpression
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
		NPUSH(oper);
	}
	;

LeftHandSide:
	FieldAccess
	| ArrayAccess
	| Name
	;

AssignmentOperator:
	TOK_ASN
	{   PUSH(NID_ASN, $1);   }
	| TOK_MUASN
	{   PUSH(NID_MUASN, $1);   }
	| TOK_DIASN
	{   PUSH(NID_DIASN, $1);   }
	| TOK_MODASN
	{   PUSH(NID_MODASN, $1);   }
	| TOK_PLASN
	{   PUSH(NID_PLASN, $1);   }
	| TOK_MIASN
	{   PUSH(NID_MIASN, $1);   }
	| TOK_SLASN
	{   PUSH(NID_SLASN, $1);   }
	| TOK_SRASN
	{   PUSH(NID_SRASN, $1);   }
	| TOK_ANDASN
	{   PUSH(NID_ANDASN, $1);   }
	| TOK_CARETASN
	{   PUSH(NID_CARETASN, $1);   }
	| TOK_ORASN
	{   PUSH(NID_ORASN, $1);   }
	;

Expression:
	AssignmentExpression
	;

ConstantExpression:
	Expression
	;

BeginBlock:
	TOK_INDENT
	;

EndBlock:
	TOK_DEDENT
	;

Literal:
	TOK_INTLITERAL
	{   PUSH(NID_INTLITERAL, $1);   }
	| TOK_FLOATLITERAL
	{   PUSH(NID_FLOATLITERAL, $1);   }
	| TOK_BOOLLITERAL
	{   PUSH(NID_BOOLLITERAL, $1);   }
	| TOK_STRINGLITERAL
	{   PUSH(NID_STRINGLITERAL, $1);   }
	| TOK_CHARLITERAL
	{   PUSH(NID_CHARLITERAL, $1);   }
	| TOK_NULLLITERAL
	{   PUSH(NID_NULLLITERAL, $1);   }
	;

Type:
	PrimitiveType
	| ReferenceType
	;

PrimitiveType:
	NumericType
	| TOK_BOOLEAN
	{    PUSH(NID_BOOLEAN, $1);    }
	;

NumericType:
	IntegralType
	| FloatingPointType
	;

IntegralType:
	TOK_UINT8
	{    PUSH(NID_UINT8, $1);    }
	| TOK_UINT16
	{    PUSH(NID_UINT16, $1);    }
	| TOK_UINT32
	{    PUSH(NID_UINT32, $1);    }
	| TOK_UINT64
	{    PUSH(NID_UINT64, $1);    }
	| TOK_INT8
	{    PUSH(NID_INT8, $1);    }
	| TOK_INT16
	{    PUSH(NID_INT16, $1);    }
	| TOK_INT32
	{    PUSH(NID_INT32, $1);    }
	| TOK_INT64
	{    PUSH(NID_INT64, $1);    }
	| TOK_CHAR
	{    PUSH(NID_CHAR, $1);    }
	;

FloatingPointType:
	TOK_FLOAT
	{    PUSH(NID_FLOAT, $1);    }
	| TOK_DOUBLE
	{    PUSH(NID_DOUBLE, $1);    }
	;

ReferenceType:
	/* ClassOrInterfaceType */ Name
	| ArrayType
	;

ArrayType:
	PrimitiveType TOK_LB TOK_RB
	{
		COMBINE(NID_TYPE_ARRAY, 1);
		TOP()->counter = 1;
	}
	| /* ClassOrInterfaceType */ Name TOK_LB TOK_RB
	{
		COMBINE(NID_TYPE_ARRAY, 1);
		TOP()->counter = 1;
	}
	| ArrayType TOK_LB TOK_RB
	{
		beagle::compiler::Node *node = TOP();
		++node->counter;
	}

SimpleName:
	TOK_NAME
	{   PUSH(NID_NAME, $1);   }
	;

Name:
	SimpleName
	| Name TOK_DOT SimpleName
	{
		/*beagle::compiler::Node *current = POP();

		if (TOP()->getChildCount() > 0)
		{
			TOP()->addChild( *current );
		}
		else
		{
			NPUSH(current);
			COMBINE(NID_QNAME, 2);
		}*/
		beagle::compiler::Node *current = POP();
		TOP()->text += '.';
		TOP()->text += current->text;
		delete current;
	}
	;

%%


#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
	return yytname[YYTRANSLATE(tok)];
}



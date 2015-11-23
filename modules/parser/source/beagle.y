/*
 * Godiva Grammar: godgram.y
 *
 * Based on Java grammar in Gosling/Joy/Steele, Chapter 19
 */


/* Require bison 2.3 or later */
%require "2.3"
%define api.pure full
%lex-param   { yyscan_t scanner }
%parse-param { yyscan_t scanner }


%code requires {


#include <fstream>
#include <iostream>
#include <sstream>


/*
 * The parser need to know about the 'yyscan_t' type,
 * but the generated header by Flex don't provide this information.
 */
typedef void *yyscan_t;

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

void beagle_error(yyscan_t scanner, const char *msg)
{
	printf ("%s:%d:%d: error: %s\n", "String.bgl", beagle_get_lineno(scanner), beagle_get_column(scanner), msg);
    return;
}

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
   char* node;
   }

/*
 * each token is declared.  tokens store leaf values on the value stack
 *
 * Back in javalex.l, we put things on the stack by assigning to yylval

 "abstract"           { yylval.node = alcnode(ABSTRACT, 0); return ABSTRACT; }

 *
 */
%token < node > TOK_ABSTRACT
%token < node > TOK_BOOLEAN
%token < node > TOK_BREAK
%token < node > TOK_CASE
%token < node > TOK_CATCH
%token < node > TOK_CHAR
%token < node > TOK_CLASS
%token < node > TOK_CONST
%token < node > TOK_DEFAULT
%token < node > TOK_DO
%token < node > TOK_DOUBLE
%token < node > TOK_ELSE
%token < node > TOK_EXTENDS
%token < node > TOK_FINAL
%token < node > TOK_FINALLY
%token < node > TOK_FLOAT
%token < node > TOK_FOR
%token < node > TOK_GOTO
%token < node > TOK_IF
%token < node > TOK_IMPLEMENTS
%token < node > TOK_IMPORT
%token < node > TOK_INSTANCEOF
%token < node > TOK_INT
%token < node > TOK_INTERFACE
%token < node > TOK_LONG
%token < node > TOK_NATIVE
%token < node > TOK_NEW
%token < node > TOK_PACKAGE
%token < node > TOK_PRIVATE
%token < node > TOK_PROTECTED
%token < node > TOK_PUBLIC
%token < node > TOK_RETURN
%token < node > TOK_SUSPEND
%token < node > TOK_STATIC
%token < node > TOK_SUPER
%token < node > TOK_SWITCH
%token < node > TOK_SYNCHRONIZED
%token < node > TOK_THIS
%token < node > TOK_THROW
%token < node > TOK_THROWS
%token < node > TOK_VOID
%token < node > TOK_VOLATILE
%token < node > TOK_WHILE
%token < node > TOK_IDENT
%token < node > TOK_CONTINUE
%token < node > TOK_TRANSIENT
%token < node > TOK_TRY
%token < node > TOK_NULLLITERAL
%token < node > TOK_BOOLLITERAL
%token < node > TOK_INTLITERAL
%token < node > TOK_CHARLITERAL
%token < node > TOK_FLOATLITERAL
%token < node > TOK_STRINGLITERAL
%token < node > TOK_UINT8
%token < node > TOK_UINT16
%token < node > TOK_UINT32
%token < node > TOK_UINT64
%token < node > TOK_INT8
%token < node > TOK_INT16
%token < node > TOK_INT32
%token < node > TOK_INT64
%token < node > TOK_LP
%token < node > TOK_RP
%token < node > TOK_LC
%token < node > TOK_RC
%token < node > TOK_LB
%token < node > TOK_RB
%token < node > TOK_SM
%token < node > TOK_CM
%token < node > TOK_DOT
%token < node > TOK_ASN
%token < node > TOK_LT
%token < node > TOK_GT
%token < node > TOK_BANG
%token < node > TOK_TILDE
%token < node > TOK_QUEST
%token < node > TOK_COLON
%token < node > TOK_EQ
%token < node > TOK_NE
%token < node > TOK_LE
%token < node > TOK_GE
%token < node > TOK_ANDAND
%token < node > TOK_OROR
%token < node > TOK_INC
%token < node > TOK_DEC
%token < node > TOK_PLUS
%token < node > TOK_MINUS
%token < node > TOK_MUL
%token < node > TOK_DIV
%token < node > TOK_AND
%token < node > TOK_OR
%token < node > TOK_CARET
%token < node > TOK_MOD
%token < node > TOK_SHL
%token < node > TOK_SHR
%token < node > TOK_PLASN
%token < node > TOK_MIASN
%token < node > TOK_MUASN
%token < node > TOK_DIASN
%token < node > TOK_ANDASN
%token < node > TOK_ORASN
%token < node > TOK_CARETASN
%token < node > TOK_SLASN
%token < node > TOK_SRASN
%token < node > TOK_LSRASN
%token < node > TOK_MODASN
%token < node > TOK_BAD_TOKEN
%token < node > TOK_EOL
%token < node > TOK_AT
%token < node > TOK_VARARG
%token < node > TOK_INDENT
%token < node > TOK_DEDENT

/*
 * each nonterminal is declared.  nonterminals correspond to internal nodes
 */
%type < node > Goal Literal Type PrimitiveType NumericType IntegralType
%type < node > FloatingPointType ReferenceType ClassOrInterfaceType
%type < node > ClassType InterfaceType ArrayType Name SimpleName
%type < node > QualifiedName CompilationUnit ImportDeclarations
%type < node > TypeDeclarations PackageDeclaration ImportDeclaration
%type < node > SingleTypeImportDeclaration TypeImportOnDemandDeclaration
%type < node > TypeDeclaration Modifiers Modifier ClassDeclaration
%type < node > Super Interfaces InterfaceTypeList ClassBody
%type < node > ClassBodyDeclarations ClassBodyDeclaration
%type < node > ClassMemberDeclaration FieldDeclaration VariableDeclarators
%type < node > VariableDeclarator VariableDeclaratorId VariableInitializer
%type < node > MethodDeclaration MethodHeader MethodDeclarator
%type < node > FormalParameterList FormalParameter Throws ClassTypeList
%type < node > MethodBody StaticInitializer ConstructorDeclaration
%type < node > ConstructorDeclarator ConstructorBody
%type < node > ExplicitConstructorInvocation InterfaceDeclaration
%type < node > ExtendsInterfaces InterfaceBody InterfaceMemberDeclarations
%type < node > InterfaceMemberDeclaration ConstantDeclaration
%type < node > AbstractMethodDeclaration ArrayInitializer
%type < node > VariableInitializers Block BlockStatements BlockStatement
%type < node > LocalVariableDeclarationStatement LocalVariableDeclaration
%type < node > Statement StatementNoShortIf
%type < node > StatementWithoutTrailingSubstatement EmptyStatement
%type < node > ExpressionStatement StatementExpression IfThenStatement
%type < node > IfThenElseStatement IfThenElseStatementNoShortIf
%type < node > SwitchStatement SwitchBlock SwitchBlockStatementGroups
%type < node > SwitchBlockStatementGroup SwitchLabels SwitchLabel
%type < node > WhileStatement WhileStatementNoShortIf DoStatement
%type < node > ForStatement ForStatementNoShortIf ForInit ForUpdate
%type < node > StatementExpressionList BreakStatement ContinueStatement
%type < node > ReturnStatement ThrowStatement SynchronizedStatement
%type < node > TryStatement Catches CatchClause Finally Primary
%type < node > PrimaryNoNewArray ClassInstanceCreationExpression
%type < node > ArgumentList ArrayCreationExpression DimExprs DimExpr Dims
%type < node > FieldAccess MethodInvocation ArrayAccess PostFixExpression
%type < node > PostIncrementExpression PostDecrementExpression
%type < node > UnaryExpression PreIncrementExpression PreDecrementExpression
%type < node > UnaryExpressionNotPlusMinus CastExpression
%type < node > MultiplicativeExpression AdditiveExpression ShiftExpression
%type < node > RelationalExpression EqualityExpression AndExpression
%type < node > ExclusiveOrExpression InclusiveOrExpression
%type < node > ConditionalAndExpression ConditionalOrExpression
%type < node > ConditionalExpression AssignmentExpression Assignment
%type < node > LeftHandSide AssignmentOperator Expression ConstantExpression
%type < node > PackageDeclarationOpt ImportDeclarationsOpt TypeDeclarationsOpt
%type < node > ModifiersOpt SuperOpt InterfacesOpt ClassBodyDeclarationsOpt
%type < node > ThrowsOpt FormalParameterListOpt IDENTOpt CatchesOpt
%type < node > BlockStatementsOpt
%type < node > ArgumentListOpt ExplicitConstructorInvocationOpt DimsOpt
%type < node > ExtendsInterfacesOpt InterfaceMemberDeclarationsOpt
%type < node > VariableInitializersOpt CMOpt SwitchBlockStatementGroupsOpt
%type < node > SwitchLabelsOpt ForInitOpt ExpressionOpt ForUpdateOpt
%type < node > AnnotationDeclarations AnnotationDeclaration
%type < node > BeginBlock EndBlock EndPart AnnotationDeclarationsOpt

/*
 * the start symbol, Goal, may seem to be here for rhetorical purposes,
 * but it is also the ideal spot to insert a semantic action that passes
 * the completed parse tree to a later phase of compilation.
 */
%start Goal

%%

Goal: CompilationUnit
        ;

Literal:
	TOK_INTLITERAL
    | TOK_FLOATLITERAL
    | TOK_BOOLLITERAL
    | TOK_STRINGLITERAL
    | TOK_CHARLITERAL
    | TOK_NULLLITERAL
    ;

Type:         PrimitiveType
        | ReferenceType
        ;

PrimitiveType:    NumericType
        | TOK_BOOLEAN
        ;

NumericType:      IntegralType
        | FloatingPointType
        ;

IntegralType:
    TOK_UINT8
    | TOK_UINT16
    | TOK_UINT32
    | TOK_UINT64
    | TOK_INT8
    | TOK_INT16
    | TOK_INT32
    | TOK_INT64
    | TOK_INT
    | TOK_LONG
    | TOK_CHAR
    ;

FloatingPointType:
    TOK_FLOAT
    | TOK_DOUBLE
    ;

ReferenceType:    ClassOrInterfaceType
        | ArrayType
        ;

ClassOrInterfaceType:
	Name
	| Name TOK_LT InterfaceTypeList TOK_GT
    ;

ClassType:    ClassOrInterfaceType
        ;

InterfaceType:    ClassOrInterfaceType
        ;

ArrayType:    PrimitiveType TOK_LB TOK_RB
        | Name TOK_LB TOK_RB
        | ArrayType TOK_LB TOK_RB
        ;

Name:         SimpleName
        | QualifiedName
        ;

SimpleName:   TOK_IDENT
        ;

QualifiedName:
	Name TOK_DOT TOK_IDENT
    ;

CompilationUnit:
	PackageDeclarationOpt ImportDeclarationsOpt TypeDeclarationsOpt
    ;

PackageDeclarationOpt: PackageDeclaration | { $$ = NULL; } ;

ImportDeclarationsOpt: ImportDeclarations | { $$ = NULL; } ;

TypeDeclarationsOpt: TypeDeclarations | { $$ = NULL; } ;

ImportDeclarations: ImportDeclaration
        | ImportDeclarations ImportDeclaration
        ;

TypeDeclarations: TypeDeclaration
        | TypeDeclarations TypeDeclaration
        ;

PackageDeclaration: TOK_PACKAGE Name TOK_EOL
        ;

ImportDeclaration: SingleTypeImportDeclaration
        | TypeImportOnDemandDeclaration
        ;

SingleTypeImportDeclaration: TOK_IMPORT Name TOK_EOL
        ;

TypeImportOnDemandDeclaration: TOK_IMPORT Name TOK_DOT TOK_MUL TOK_EOL
        ;

TypeDeclaration:
	AnnotationDeclarationsOpt ClassDeclaration
	| AnnotationDeclarationsOpt InterfaceDeclaration
    ;

AnnotationDeclarationsOpt:
	AnnotationDeclarations
	| { $$ = NULL; }
	;

AnnotationDeclarations:
	AnnotationDeclaration
	| AnnotationDeclarations AnnotationDeclaration
	;

AnnotationDeclaration:
	TOK_AT TOK_IDENT TOK_LP ArgumentListOpt TOK_RP TOK_EOL
	| TOK_AT TOK_IDENT TOK_EOL
	;

Modifiers: Modifier
        | Modifiers Modifier
        ;

Modifier:     TOK_PUBLIC
        | TOK_PROTECTED
        | TOK_PRIVATE
        | TOK_STATIC
        | TOK_ABSTRACT
        | TOK_FINAL
        | TOK_NATIVE
        | TOK_SYNCHRONIZED
        | TOK_TRANSIENT
        | TOK_VOLATILE
        ;

ClassDeclaration:
	ModifiersOpt TOK_CLASS TOK_IDENT SuperOpt InterfacesOpt TOK_EOL ClassBody
    ;

ModifiersOpt: Modifiers | { $$ = NULL; } ;

SuperOpt:     Super | { $$ = NULL; } ;

InterfacesOpt:    Interfaces | { $$ = NULL; } ;

Super:        TOK_EXTENDS ClassType
        ;

Interfaces:   TOK_IMPLEMENTS InterfaceTypeList
        ;

InterfaceTypeList: InterfaceType
        | InterfaceTypeList TOK_CM InterfaceType
        ;

ClassBody:    BeginBlock ClassBodyDeclarationsOpt EndBlock
        ;

ClassBodyDeclarationsOpt: ClassBodyDeclarations | { $$ = NULL; } ;

ClassBodyDeclarations: ClassBodyDeclaration
        | ClassBodyDeclarations ClassBodyDeclaration
        ;

ClassBodyDeclaration:
	AnnotationDeclarationsOpt ClassMemberDeclaration
    | AnnotationDeclarationsOpt StaticInitializer
    | AnnotationDeclarationsOpt ConstructorDeclaration
    ;

ClassMemberDeclaration: FieldDeclaration
        | MethodDeclaration
        ;

FieldDeclaration: ModifiersOpt Type VariableDeclarators TOK_EOL
        ;

VariableDeclarators:
	VariableDeclarator
    | VariableDeclarators TOK_CM VariableDeclarator
    ;

VariableDeclarator: VariableDeclaratorId
        | VariableDeclaratorId TOK_ASN VariableInitializer
        ;

VariableDeclaratorId: TOK_IDENT
        | VariableDeclaratorId TOK_LB TOK_RB
        ;

VariableInitializer:
	Expression
    | ArrayInitializer
    ;

MethodDeclaration: MethodHeader TOK_EOL MethodBody
        ;

MethodHeader: ModifiersOpt Type MethodDeclarator ThrowsOpt
        |  ModifiersOpt TOK_VOID MethodDeclarator ThrowsOpt
        ;


ThrowsOpt:    Throws | { $$ = NULL; } ;


FormalParameterListOpt: FormalParameterList | { $$ = NULL; } ;

MethodDeclarator: TOK_IDENT TOK_LP FormalParameterListOpt TOK_RP
        | MethodDeclarator TOK_LB TOK_RB
        ;

FormalParameterList: FormalParameter
        | FormalParameterList TOK_CM FormalParameter
        ;

FormalParameter:
	Type VariableDeclaratorId
	| TOK_VARARG Type VariableDeclaratorId
    ;


Throws: TOK_THROWS ClassTypeList
        ;


ClassTypeList: ClassType
        | ClassTypeList TOK_CM ClassType
        ;

MethodBody: Block
        ;

StaticInitializer: TOK_STATIC Block
        ;

ConstructorDeclaration:
	ModifiersOpt ConstructorDeclarator ThrowsOpt EndPart ConstructorBody
	{ std::cout << "ConstructorDeclaration" << std::endl; }
	;

ConstructorDeclarator:
	SimpleName TOK_LP FormalParameterListOpt TOK_RP
    ;

ExplicitConstructorInvocationOpt: ExplicitConstructorInvocation | { $$ = NULL; } ;

BlockStatementsOpt:
	BlockStatements
	{ std::cout << "BlockStatementsOpt" << std::endl; }
	| { $$ = NULL; }
	;

ArgumentListOpt:  ArgumentList | { $$ = NULL; } ;

ConstructorBody:
	BeginBlock ExplicitConstructorInvocationOpt BlockStatementsOpt EndBlock
    ;

ExplicitConstructorInvocation:
	TOK_THIS TOK_LP ArgumentListOpt TOK_RP TOK_EOL
	{ std::cout << "ExplicitConstructorInvocation" << std::endl; }
    | TOK_SUPER TOK_LP ArgumentListOpt TOK_RP TOK_EOL
    ;

ExtendsInterfacesOpt: ExtendsInterfaces | { $$ = NULL; } ;

InterfaceDeclaration: ModifiersOpt TOK_INTERFACE TOK_IDENT
            ExtendsInterfacesOpt InterfaceBody
        ;

ExtendsInterfaces: TOK_EXTENDS InterfaceType
        | ExtendsInterfaces TOK_CM InterfaceType
        ;

InterfaceMemberDeclarationsOpt: InterfaceMemberDeclarations | { $$ = NULL; } ;

InterfaceBody: BeginBlock InterfaceMemberDeclarationsOpt EndBlock
        ;

InterfaceMemberDeclarations: InterfaceMemberDeclaration
        | InterfaceMemberDeclarations InterfaceMemberDeclaration
        ;

InterfaceMemberDeclaration: ConstantDeclaration
        | AbstractMethodDeclaration
        ;

ConstantDeclaration: FieldDeclaration
        ;

AbstractMethodDeclaration: MethodHeader TOK_EOL
        ;

VariableInitializersOpt: VariableInitializers | { $$ = NULL; } ;

CMOpt:  TOK_CM { $$ = NULL; } | { $$ = NULL; } ;

ArrayInitializer: TOK_LC VariableInitializersOpt CMOpt TOK_RC
        ;

VariableInitializers: VariableInitializer
        | VariableInitializers TOK_CM VariableInitializer
        ;

Block:
	BeginBlock BlockStatementsOpt EndBlock
    ;

BlockStatements:
	BlockStatement
    | BlockStatements BlockStatement
    ;

BlockStatement:   LocalVariableDeclarationStatement
        | Statement
        ;

LocalVariableDeclarationStatement: LocalVariableDeclaration TOK_EOL
        ;

LocalVariableDeclaration: Type VariableDeclarators
        ;

Statement:    StatementWithoutTrailingSubstatement
        | IfThenStatement
        | IfThenElseStatement
        | WhileStatement
        | ForStatement
        ;

StatementNoShortIf: StatementWithoutTrailingSubstatement
        | IfThenElseStatementNoShortIf
        | WhileStatementNoShortIf
        | ForStatementNoShortIf
        ;

StatementWithoutTrailingSubstatement: Block
        | EmptyStatement
        | ExpressionStatement
        | SwitchStatement
        | DoStatement
        | BreakStatement
        | ContinueStatement
        | ReturnStatement
        | SynchronizedStatement
        | ThrowStatement
        | TryStatement
        ;

EmptyStatement:
	TOK_EOL
    ;


ExpressionStatement: StatementExpression TOK_EOL
        ;

StatementExpression: Assignment
        | PreIncrementExpression
        | PreDecrementExpression
        | PostIncrementExpression
        | PostDecrementExpression
        | MethodInvocation
        | ClassInstanceCreationExpression
        ;

IfThenStatement:
	TOK_IF TOK_LP Expression TOK_RP EndPart Statement
    ;

IfThenElseStatement:
	TOK_IF TOK_LP Expression TOK_RP EndPart StatementNoShortIf TOK_ELSE EndPart Statement
    ;

IfThenElseStatementNoShortIf:
	TOK_IF TOK_LP Expression TOK_RP EndPart StatementNoShortIf TOK_ELSE EndPart StatementNoShortIf
    ;

SwitchStatement:
	TOK_SWITCH TOK_LP Expression TOK_RP EndPart SwitchBlock
    ;

SwitchBlockStatementGroupsOpt: SwitchBlockStatementGroups | { $$ = NULL; } ;

SwitchLabelsOpt: SwitchLabels | { $$ = NULL; } ;

SwitchBlock:      BeginBlock SwitchBlockStatementGroupsOpt SwitchLabelsOpt EndBlock
        ;

SwitchBlockStatementGroups: SwitchBlockStatementGroup
        | SwitchBlockStatementGroups SwitchBlockStatementGroup
        ;

SwitchBlockStatementGroup: SwitchLabels BlockStatements
        ;

SwitchLabels:     SwitchLabel
        | SwitchLabels SwitchLabel
        ;

SwitchLabel:      TOK_CASE ConstantExpression TOK_COLON
        | TOK_DEFAULT TOK_COLON
        ;

WhileStatement:   TOK_WHILE TOK_LP Expression TOK_RP Statement
        ;

WhileStatementNoShortIf:  TOK_WHILE TOK_LP Expression TOK_RP StatementNoShortIf
        ;

DoStatement:      TOK_DO Statement TOK_WHILE TOK_LP Expression TOK_RP TOK_EOL
        ;

ForInitOpt: ForInit | { $$ = NULL; } ;

ExpressionOpt: Expression | { $$ = NULL; } ;

ForUpdateOpt: ForUpdate | { $$ = NULL; } ;

ForStatement:     TOK_FOR TOK_LP ForInitOpt TOK_SM ExpressionOpt TOK_SM ForUpdateOpt TOK_RP
            Statement
        ;

ForStatementNoShortIf:    TOK_FOR TOK_LP ForInitOpt TOK_SM ExpressionOpt TOK_SM ForUpdateOpt TOK_RP
            StatementNoShortIf
        ;


ForInit:      StatementExpressionList
        | LocalVariableDeclaration
        ;

ForUpdate:    StatementExpressionList
        ;

StatementExpressionList: StatementExpression
        | StatementExpressionList TOK_CM StatementExpression
        ;

IDENTOpt: TOK_IDENT | { $$ = NULL; } ;

BreakStatement:   TOK_BREAK IDENTOpt TOK_EOL
        ;

ContinueStatement: TOK_CONTINUE IDENTOpt TOK_EOL
        ;

ReturnStatement:  TOK_RETURN ExpressionOpt TOK_EOL
        | TOK_SUSPEND ExpressionOpt TOK_EOL
        ;


ThrowStatement:  TOK_THROW Expression TOK_EOL
        ;

SynchronizedStatement:  TOK_SYNCHRONIZED TOK_LP Expression TOK_RP Block
        ;

CatchesOpt: Catches | { $$ = NULL; } ;

TryStatement:     TOK_TRY Block Catches
        | TOK_TRY Block CatchesOpt Finally
        ;
Catches:      CatchClause
        | Catches CatchClause
        ;

CatchClause:      TOK_CATCH TOK_LP FormalParameter TOK_RP Block

        ;

Finally:      TOK_FINALLY Block
        ;

Primary:      PrimaryNoNewArray
        | ArrayCreationExpression
        ;

PrimaryNoNewArray: Literal
        | TOK_THIS
        | TOK_LP Expression TOK_RP
        | ClassInstanceCreationExpression
        | FieldAccess
        | MethodInvocation
        | ArrayAccess
        ;

ClassInstanceCreationExpression: TOK_NEW ClassType TOK_LP ArgumentListOpt TOK_RP
        ;

ArgumentList:     Expression
        | ArgumentList TOK_CM Expression
        ;

DimsOpt: Dims | { $$ = NULL; } ;

ArrayCreationExpression: TOK_NEW PrimitiveType DimExprs DimsOpt
        | TOK_NEW ClassOrInterfaceType DimExprs DimsOpt
        ;

DimExprs:     DimExpr
        | DimExprs DimExpr
        ;

DimExpr:      TOK_LB Expression TOK_RB
        ;

Dims:         TOK_LB TOK_RB
        | Dims TOK_LB TOK_RB
        ;

FieldAccess:      Primary TOK_DOT TOK_IDENT
        | TOK_SUPER TOK_DOT TOK_IDENT
        ;

MethodInvocation: Name TOK_LP ArgumentListOpt TOK_RP
        | Primary TOK_DOT TOK_IDENT TOK_LP ArgumentListOpt TOK_RP
        | TOK_SUPER TOK_DOT TOK_IDENT TOK_LP ArgumentListOpt TOK_RP
        | Name BeginBlock ArgumentListOpt EndBlock
        | Primary TOK_DOT TOK_IDENT BeginBlock ArgumentListOpt EndBlock
        | TOK_SUPER TOK_DOT TOK_IDENT BeginBlock ArgumentListOpt EndBlock
        ;

ArrayAccess:      Name TOK_LB Expression TOK_RB
        | PrimaryNoNewArray TOK_LB Expression TOK_RB
        ;

PostFixExpression: Primary
        | Name
        | PostIncrementExpression
        | PostDecrementExpression
        ;

PostIncrementExpression: PostFixExpression TOK_INC
        ;

PostDecrementExpression: PostFixExpression TOK_DEC
        ;

UnaryExpression:  PreIncrementExpression
        | PreDecrementExpression
        | TOK_PLUS UnaryExpression
        | TOK_MINUS UnaryExpression
        | UnaryExpressionNotPlusMinus
        ;

PreIncrementExpression: TOK_INC UnaryExpression
        ;

PreDecrementExpression: TOK_DEC UnaryExpression
        ;

UnaryExpressionNotPlusMinus: PostFixExpression
        | TOK_TILDE UnaryExpression
        | TOK_BANG UnaryExpression
        | CastExpression
        ;

CastExpression:   TOK_LP PrimitiveType DimsOpt TOK_RP UnaryExpression
        | TOK_LP Expression TOK_RP UnaryExpressionNotPlusMinus
        | TOK_LP Name Dims TOK_RP UnaryExpressionNotPlusMinus
        ;

MultiplicativeExpression: UnaryExpression
        | MultiplicativeExpression TOK_MUL UnaryExpression
        | MultiplicativeExpression TOK_DIV UnaryExpression
        | MultiplicativeExpression TOK_MOD UnaryExpression
        ;

AdditiveExpression: MultiplicativeExpression
        | AdditiveExpression TOK_PLUS MultiplicativeExpression
        | AdditiveExpression TOK_MINUS MultiplicativeExpression
        ;

ShiftExpression:  AdditiveExpression
        | ShiftExpression TOK_SHL AdditiveExpression
        | ShiftExpression TOK_SHR AdditiveExpression
        ;

RelationalExpression: ShiftExpression
        | RelationalExpression TOK_LT ShiftExpression
        | RelationalExpression TOK_GT ShiftExpression
        | RelationalExpression TOK_LE ShiftExpression
        | RelationalExpression TOK_GE ShiftExpression
        | RelationalExpression TOK_INSTANCEOF ReferenceType
        ;

EqualityExpression: RelationalExpression
        | EqualityExpression TOK_EQ RelationalExpression
        | EqualityExpression TOK_NE RelationalExpression
        ;

AndExpression: EqualityExpression
        | AndExpression TOK_AND EqualityExpression
        ;

ExclusiveOrExpression: AndExpression
        | ExclusiveOrExpression TOK_CARET AndExpression
        ;

InclusiveOrExpression: ExclusiveOrExpression
        | InclusiveOrExpression TOK_OR ExclusiveOrExpression
        ;

ConditionalAndExpression: InclusiveOrExpression
        | ConditionalAndExpression TOK_ANDAND InclusiveOrExpression
        ;

ConditionalOrExpression: ConditionalAndExpression
        | ConditionalOrExpression TOK_OROR ConditionalAndExpression
        ;

ConditionalExpression: ConditionalOrExpression
        | ConditionalOrExpression TOK_QUEST Expression
            TOK_COLON ConditionalExpression
        ;

AssignmentExpression: ConditionalExpression
        | Assignment
        ;

Assignment:   LeftHandSide AssignmentOperator AssignmentExpression
        ;

LeftHandSide:     Name
        | FieldAccess
        | ArrayAccess
        ;

AssignmentOperator: TOK_ASN
        | TOK_MUASN
        | TOK_DIASN
        | TOK_MODASN
        | TOK_PLASN
        | TOK_MIASN
        | TOK_SLASN
        | TOK_SRASN
        | TOK_LSRASN
        | TOK_ANDASN
        | TOK_CARETASN
        | TOK_ORASN
        ;

Expression:   AssignmentExpression
        ;

ConstantExpression: Expression
        ;

BeginBlock:
	TOK_INDENT
	;

EndBlock:
	TOK_DEDENT
	;

EndPart:
	TOK_EOL
	;


%%

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}



package beagle.compiler.ast.visitor;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.BlockComment;
import beagle.compiler.ast.CompilationUnit;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.ImportDeclaration;
import beagle.compiler.ast.LineComment;
import beagle.compiler.ast.PackageDeclaration;
import beagle.compiler.ast.body.AnnotationDeclaration;
import beagle.compiler.ast.body.AnnotationMemberDeclaration;
import beagle.compiler.ast.body.ClassOrInterfaceDeclaration;
import beagle.compiler.ast.body.ConstructorDeclaration;
import beagle.compiler.ast.body.EmptyTypeDeclaration;
import beagle.compiler.ast.body.EnumConstantDeclaration;
import beagle.compiler.ast.body.EnumDeclaration;
import beagle.compiler.ast.body.FieldDeclaration;
import beagle.compiler.ast.body.MethodDeclaration;
import beagle.compiler.ast.body.ModifierDeclaration;
import beagle.compiler.ast.body.Parameter;
import beagle.compiler.ast.body.VariableDeclarator;
import beagle.compiler.ast.expression.ArrayAccessExpr;
import beagle.compiler.ast.expression.ArrayCreationExpr;
import beagle.compiler.ast.expression.ArrayInitializerExpr;
import beagle.compiler.ast.expression.AssignExpr;
import beagle.compiler.ast.expression.BinaryExpr;
import beagle.compiler.ast.expression.BooleanLiteralExpr;
import beagle.compiler.ast.expression.CastExpr;
import beagle.compiler.ast.expression.CharLiteralExpr;
import beagle.compiler.ast.expression.ClassExpr;
import beagle.compiler.ast.expression.ConditionalExpr;
import beagle.compiler.ast.expression.DoubleLiteralExpr;
import beagle.compiler.ast.expression.EnclosedExpr;
import beagle.compiler.ast.expression.FieldAccessExpr;
import beagle.compiler.ast.expression.InstanceOfExpr;
import beagle.compiler.ast.expression.IntegerLiteralExpr;
import beagle.compiler.ast.expression.LongLiteralExpr;
import beagle.compiler.ast.expression.MarkerAnnotationExpr;
import beagle.compiler.ast.expression.MemberValuePair;
import beagle.compiler.ast.expression.MethodCallExpr;
import beagle.compiler.ast.expression.NameExpr;
import beagle.compiler.ast.expression.NormalAnnotationExpr;
import beagle.compiler.ast.expression.NullLiteralExpr;
import beagle.compiler.ast.expression.ObjectCreationExpr;
import beagle.compiler.ast.expression.QualifiedNameExpr;
import beagle.compiler.ast.expression.SingleMemberAnnotationExpr;
import beagle.compiler.ast.expression.StringLiteralExpr;
import beagle.compiler.ast.expression.SuperExpr;
import beagle.compiler.ast.expression.ThisExpr;
import beagle.compiler.ast.expression.UnaryExpr;
import beagle.compiler.ast.expression.VariableDeclarationExpr;
import beagle.compiler.ast.statement.AssertStmt;
import beagle.compiler.ast.statement.BlockStmt;
import beagle.compiler.ast.statement.BreakStmt;
import beagle.compiler.ast.statement.CatchClause;
import beagle.compiler.ast.statement.ContinueStmt;
import beagle.compiler.ast.statement.DoWhileStmt;
import beagle.compiler.ast.statement.EmptyStmt;
import beagle.compiler.ast.statement.ExplicitConstructorInvocationStmt;
import beagle.compiler.ast.statement.ExpressionStmt;
import beagle.compiler.ast.statement.ForStmt;
import beagle.compiler.ast.statement.ForeachStmt;
import beagle.compiler.ast.statement.IfStmt;
import beagle.compiler.ast.statement.ReturnStmt;
import beagle.compiler.ast.statement.SwitchEntryStmt;
import beagle.compiler.ast.statement.SwitchStmt;
import beagle.compiler.ast.statement.SynchronizedStmt;
import beagle.compiler.ast.statement.ThrowStmt;
import beagle.compiler.ast.statement.TryStmt;
import beagle.compiler.ast.statement.TypeDeclarationStmt;
import beagle.compiler.ast.statement.WhileStmt;
import beagle.compiler.ast.type.ArrayType;
import beagle.compiler.ast.type.ClassOrInterfaceType;
import beagle.compiler.ast.type.PrimitiveType;
import beagle.compiler.ast.type.VoidType;

/**
 * <p>Basic abstrat syntatic tree visitor.</p>
 * 
 * <p>This class was inpired by "VoidVisitor" class from "javaparser" by Júlio Gesser.</p>
 * 
 * @author Bruno Ribeiro
 *
 * @param <C> Type of context object.
 */
public interface TreeVisitor<C>
{

	/*
	 * Nodes that compound the compilation unit.
	 */

	public void visit( CompilationUnit n, C context ) throws CompilerException;

	public void visit( PackageDeclaration n, C context ) throws CompilerException;

	public void visit( ImportDeclaration n, C context ) throws CompilerException;

	public void visit( LineComment n, C context ) throws CompilerException;

	public void visit( BlockComment n, C context ) throws CompilerException;

	/*
	 * Node for type definition.
	 */

	public void visit( ClassOrInterfaceDeclaration n, C context ) throws CompilerException;

	public void visit( EnumDeclaration n, C context ) throws CompilerException;

	public void visit( EmptyTypeDeclaration n, C context ) throws CompilerException;

	public void visit( EnumConstantDeclaration n, C context ) throws CompilerException;

	public void visit( AnnotationDeclaration n, C context ) throws CompilerException;

	public void visit( AnnotationMemberDeclaration n, C context ) throws CompilerException;

	public void visit( FieldDeclaration n, C context ) throws CompilerException;

	public void visit( VariableDeclarator n, C context ) throws CompilerException;

	public void visit( ConstructorDeclaration n, C context ) throws CompilerException;

	public void visit( MethodDeclaration n, C context ) throws CompilerException;

	public void visit( Parameter n, C context ) throws CompilerException;

	public void visit( ModifierDeclaration n, C context ) throws CompilerException;

	public void visit( DocComment n, C context ) throws CompilerException;

	/*
	 * Nodes for type reference.
	 */

	public void visit( ClassOrInterfaceType n, C context ) throws CompilerException;

	public void visit( PrimitiveType n, C context ) throws CompilerException;

	public void visit( ArrayType n, C context ) throws CompilerException;

	public void visit( VoidType n, C context ) throws CompilerException;

	/*
	 * Nodes for expressions.
	 */

	public void visit( ArrayAccessExpr n, C context ) throws CompilerException;

	public void visit( ArrayCreationExpr n, C context ) throws CompilerException;

	public void visit( ArrayInitializerExpr n, C context ) throws CompilerException;

	public void visit( AssignExpr n, C context ) throws CompilerException;

	public void visit( BinaryExpr n, C context ) throws CompilerException;

	public void visit( CastExpr n, C context ) throws CompilerException;

	public void visit( ClassExpr n, C context ) throws CompilerException;

	public void visit( ConditionalExpr n, C context ) throws CompilerException;

	public void visit( EnclosedExpr n, C context ) throws CompilerException;

	public void visit( FieldAccessExpr n, C context ) throws CompilerException;

	public void visit( InstanceOfExpr n, C context ) throws CompilerException;

	public void visit( StringLiteralExpr n, C context ) throws CompilerException;

	public void visit( LongLiteralExpr n, C context ) throws CompilerException;

	public void visit( IntegerLiteralExpr n, C context ) throws CompilerException;

	public void visit( CharLiteralExpr n, C context ) throws CompilerException;

	public void visit( DoubleLiteralExpr n, C context ) throws CompilerException;

	public void visit( BooleanLiteralExpr n, C context ) throws CompilerException;

	public void visit( NullLiteralExpr n, C context ) throws CompilerException;

	public void visit( MethodCallExpr n, C context ) throws CompilerException;

	public void visit( NameExpr n, C context ) throws CompilerException;

	public void visit( ObjectCreationExpr n, C context ) throws CompilerException;

	public void visit( QualifiedNameExpr n, C context ) throws CompilerException;

	public void visit( ThisExpr n, C context ) throws CompilerException;

	public void visit( SuperExpr n, C context ) throws CompilerException;

	public void visit( UnaryExpr n, C context ) throws CompilerException;

	public void visit( VariableDeclarationExpr n, C context ) throws CompilerException;

	public void visit( MarkerAnnotationExpr n, C context ) throws CompilerException;

	public void visit( SingleMemberAnnotationExpr n, C context ) throws CompilerException;

	public void visit( NormalAnnotationExpr n, C context ) throws CompilerException;

	public void visit( MemberValuePair n, C context ) throws CompilerException;

	/*
	 * Node for language statements.
	 */

	public void visit( ExplicitConstructorInvocationStmt n, C context ) throws CompilerException;

	public void visit( TypeDeclarationStmt n, C context ) throws CompilerException;

	public void visit( AssertStmt n, C context ) throws CompilerException;

	public void visit( BlockStmt n, C context ) throws CompilerException;

	public void visit( EmptyStmt n, C context ) throws CompilerException;

	public void visit( ExpressionStmt n, C context ) throws CompilerException;

	public void visit( SwitchStmt n, C context ) throws CompilerException;

	public void visit( SwitchEntryStmt n, C context ) throws CompilerException;

	public void visit( BreakStmt n, C context ) throws CompilerException;

	public void visit( ReturnStmt n, C context ) throws CompilerException;

	public void visit( IfStmt n, C context ) throws CompilerException;

	public void visit( WhileStmt n, C context ) throws CompilerException;

	public void visit( ContinueStmt n, C context ) throws CompilerException;

	public void visit( DoWhileStmt n, C context ) throws CompilerException;

	public void visit( ForeachStmt n, C context ) throws CompilerException;

	public void visit( ForStmt n, C context ) throws CompilerException;

	public void visit( ThrowStmt n, C context ) throws CompilerException;

	public void visit( SynchronizedStmt n, C context ) throws CompilerException;

	public void visit( TryStmt n, C context ) throws CompilerException;

	public void visit( CatchClause n, C context ) throws CompilerException;

}

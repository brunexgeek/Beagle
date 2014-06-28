package beagle.compiler.pst.visitor;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.CompilationGroup;
import beagle.compiler.pst.body.FieldDeclaration;
import beagle.compiler.pst.body.Parameter;
import beagle.compiler.pst.body.ProcedureDeclaration;
import beagle.compiler.pst.body.TypeDeclaration;
import beagle.compiler.pst.statement.BlockStmt;
import beagle.compiler.pst.statement.BreakStmt;
import beagle.compiler.pst.type.ArrayType;
import beagle.compiler.pst.type.ClassOrInterfaceType;
import beagle.compiler.pst.type.PrimitiveType;
import beagle.compiler.pst.type.VoidType;

public interface TreeVisitor<C>
{

	/*
	 * Nodes that compound the compilation unit.
	 */
	
	public void visit( CompilationGroup n, C context ) throws CompilerException;
	
	public void visit( TypeDeclaration n, C context ) throws CompilerException;
	
	public void visit( PrimitiveType n, C context ) throws CompilerException;
	
	public void visit( ClassOrInterfaceType n, C context ) throws CompilerException;
	
	public void visit( ArrayType n, C context ) throws CompilerException;
	
	public void visit( VoidType n, C context ) throws CompilerException;
	
	public void visit( FieldDeclaration n, C context ) throws CompilerException;
	
	public void visit( Parameter n, C context ) throws CompilerException;
	
	public void visit( ProcedureDeclaration n, C context ) throws CompilerException;
	
	public void visit( BreakStmt n, C context ) throws CompilerException;
	
	public void visit( BlockStmt n, C context ) throws CompilerException;
}

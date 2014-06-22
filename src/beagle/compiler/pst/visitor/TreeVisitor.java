package beagle.compiler.pst.visitor;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.CompilationGroup;
import beagle.compiler.pst.body.FieldDeclaration;
import beagle.compiler.pst.body.Parameter;
import beagle.compiler.pst.body.ProcedureDeclaration;
import beagle.compiler.pst.type.TypeDeclaration;
import beagle.compiler.pst.type.Type;

public interface TreeVisitor<C>
{

	/*
	 * Nodes that compound the compilation unit.
	 */
	
	public void visit( CompilationGroup n, C context ) throws CompilerException;
	
	public void visit( TypeDeclaration n, C context ) throws CompilerException;
	
	public void visit( Type n, C context ) throws CompilerException;
	
	public void visit( FieldDeclaration n, C context ) throws CompilerException;
	
	public void visit( Parameter n, C context ) throws CompilerException;
	
	public void visit( ProcedureDeclaration n, C context ) throws CompilerException;
}

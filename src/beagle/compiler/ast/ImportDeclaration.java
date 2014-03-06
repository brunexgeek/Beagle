package beagle.compiler.ast;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.expression.NameExpr;
import beagle.compiler.ast.visitor.TreeVisitor;



public final class ImportDeclaration extends Node
{

	public NameExpr name;

	public boolean isAsterisk;

	public ImportDeclaration( LineInfo linfo, NameExpr name, boolean isAsterisk )
	{
		super(linfo);
		this.name = name;
		this.isAsterisk = isAsterisk;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

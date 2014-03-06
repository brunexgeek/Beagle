package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class EmptyStmt extends Statement
{

	public EmptyStmt()
	{
	}

	public EmptyStmt( LineInfo linfo )
	{
		super(linfo);
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
}

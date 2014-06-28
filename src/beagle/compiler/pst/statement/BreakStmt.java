package beagle.compiler.pst.statement;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.visitor.TreeVisitor;


public class BreakStmt extends Statement
{

	public BreakStmt()
	{
		// TODO Auto-generated constructor stub
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

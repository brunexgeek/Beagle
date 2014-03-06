package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class NullLiteralExpr extends LiteralExpr
{

	public NullLiteralExpr()
	{
	}

	public NullLiteralExpr( LineInfo linfo )
	{
		super(linfo);
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
}

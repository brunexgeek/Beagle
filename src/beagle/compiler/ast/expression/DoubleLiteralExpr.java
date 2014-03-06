package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class DoubleLiteralExpr extends StringLiteralExpr
{

	public DoubleLiteralExpr()
	{
	}

	public DoubleLiteralExpr( LineInfo linfo, String value )
	{
		super(linfo, value);
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
}

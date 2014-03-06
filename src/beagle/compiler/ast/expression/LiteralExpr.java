package beagle.compiler.ast.expression;

import beagle.compiler.ast.LineInfo;


public abstract class LiteralExpr extends Expression
{

	public LiteralExpr()
	{
	}

	public LiteralExpr( LineInfo linfo )
	{
		super(linfo);
	}
}

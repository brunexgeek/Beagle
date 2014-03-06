package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ConditionalExpr extends Expression
{

	public Expression condition;

	public Expression thenExpression;

	public Expression elseExpression;

	public ConditionalExpr()
	{
	}

	public ConditionalExpr( LineInfo linfo, Expression condition, Expression thenExpression,
		Expression elseExpression )
	{
		super(linfo);
		this.condition = condition;
		this.thenExpression = thenExpression;
		this.elseExpression = elseExpression;
	}



	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

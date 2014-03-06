package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class UnaryExpr extends Expression
{

	public Expression expression;

	public UnaryOperator operator;

	public UnaryExpr()
	{
	}

	public UnaryExpr( LineInfo linfo, Expression expression, UnaryOperator operator )
	{
		super(linfo);
		this.expression = expression;
		this.operator = operator;
	}


	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

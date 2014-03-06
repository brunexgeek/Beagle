package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class BinaryExpr extends Expression
{

	public Expression left;

	public Expression right;

	public BinaryOperator operator;

	public BinaryExpr()
	{
	}

	public BinaryExpr( LineInfo linfo, Expression left, Expression right, BinaryOperator operator )
	{
		super(linfo);
		this.left = left;
		this.right = right;
		this.operator = operator;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

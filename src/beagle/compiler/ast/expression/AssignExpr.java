package beagle.compiler.ast.expression;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class AssignExpr extends Expression
{

	public Expression destination;

	public Expression source;

	public AssignOperator operator;

	public AssignExpr()
	{
	}

	public AssignExpr( LineInfo linfo, Expression destination, Expression source, AssignOperator operator )
	{
		super(linfo);
		this.destination = destination;
		this.source = source;
		this.operator = operator;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

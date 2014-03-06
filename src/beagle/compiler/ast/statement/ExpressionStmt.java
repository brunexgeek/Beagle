package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ExpressionStmt extends Statement
{

	public Expression expression;

	public ExpressionStmt()
	{
	}

	public ExpressionStmt( LineInfo linfo, Expression expression )
	{
		super(linfo);
		this.expression = expression;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

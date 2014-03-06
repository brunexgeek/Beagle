package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ReturnStmt extends Statement
{

	public Expression expression;

	public ReturnStmt()
	{
	}

	public ReturnStmt( LineInfo linfo, Expression expr )
	{
		super(linfo);
		this.expression = expr;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

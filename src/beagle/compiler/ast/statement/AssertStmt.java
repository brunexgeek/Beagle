package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class AssertStmt extends Statement
{

	public Expression condition = null;

	public Expression message = null;

	public AssertStmt()
	{
	}

	public AssertStmt( LineInfo linfo, Expression condition, Expression message )
	{
		super(linfo);
		this.condition = condition;
		this.message = message;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
}

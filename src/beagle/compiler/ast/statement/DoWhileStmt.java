package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class DoWhileStmt extends Statement
{

	public Statement body;

	public Expression condition;

	public DoWhileStmt()
	{
	}

	public DoWhileStmt( LineInfo linfo, Statement body, Expression condition )
	{
		super(linfo);
		this.body = body;
		this.condition = condition;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

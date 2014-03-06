package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class IfStmt extends Statement
{

	public Expression condition;

	public Statement thenStatement;

	public Statement elseStatement;

	public IfStmt()
	{
	}

	public IfStmt( LineInfo linfo, Expression condition, Statement thenStatement, Statement elseStatement )
	{
		super(linfo);
		this.condition = condition;
		this.thenStatement = thenStatement;
		this.elseStatement = elseStatement;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class WhileStmt extends Statement
{

	public Expression condition;

	public Statement block;

	public WhileStmt()
	{
	}

	public WhileStmt( LineInfo linfo, Expression condition, Statement block )
	{
		super(linfo);
		this.condition = condition;
		this.block = block;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

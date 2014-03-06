package beagle.compiler.ast.statement;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class ForStmt extends Statement
{

	public List<Expression> init;

	public Expression condition;

	public List<Expression> update;

	public Statement block;

	public ForStmt()
	{
	}

	public ForStmt( LineInfo linfo, List<Expression> init, Expression condition,
		List<Expression> update, Statement block )
	{
		super(linfo);
		this.condition = condition;
		this.init = init;
		this.update = update;
		this.block = block;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

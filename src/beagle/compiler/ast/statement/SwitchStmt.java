package beagle.compiler.ast.statement;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class SwitchStmt extends Statement
{

	public Expression expression;

	public List<SwitchEntryStmt> cases;

	public SwitchStmt()
	{
	}

	public SwitchStmt( LineInfo linfo, Expression expression, List<SwitchEntryStmt> cases )
	{
		super(linfo);
		this.expression = expression;
		this.cases = cases;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}
}

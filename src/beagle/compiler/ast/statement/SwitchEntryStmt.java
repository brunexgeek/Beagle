package beagle.compiler.ast.statement;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class SwitchEntryStmt extends Statement
{

	public Expression constant;

	public List<Statement> statements;

	public SwitchEntryStmt()
	{
	}

	public SwitchEntryStmt( LineInfo linfo, Expression constant, List<Statement> statements )
	{
		super(linfo);
		this.constant = constant;
		this.statements = statements;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class SynchronizedStmt extends Statement
{

	public Expression expression;

	public BlockStmt block;

	public SynchronizedStmt()
	{
	}

	public SynchronizedStmt( LineInfo linfo, Expression expr, BlockStmt block )
	{
		super(linfo);
		this.expression = expr;
		this.block = block;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

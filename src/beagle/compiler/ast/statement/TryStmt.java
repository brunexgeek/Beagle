package beagle.compiler.ast.statement;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class TryStmt extends Statement
{

	public BlockStmt tryBlock;

	public List<CatchClause> catchs;

	public BlockStmt finallyBlock;

	public TryStmt()
	{
	}

	public TryStmt( LineInfo linfo, BlockStmt tryBlock, List<CatchClause> catchs,
		BlockStmt finallyBlock )
	{
		super(linfo);
		this.tryBlock = tryBlock;
		this.catchs = catchs;
		this.finallyBlock = finallyBlock;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

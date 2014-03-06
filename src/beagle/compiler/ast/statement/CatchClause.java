package beagle.compiler.ast.statement;


import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.Node;
import beagle.compiler.ast.body.Parameter;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class CatchClause extends Node
{

	public Parameter except;

	public BlockStmt catchBlock;

	public CatchClause()
	{
	}

	public CatchClause( LineInfo linfo, Parameter except, BlockStmt catchBlock )
	{
		super(linfo);
		this.except = except;
		this.catchBlock = catchBlock;
	}


	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

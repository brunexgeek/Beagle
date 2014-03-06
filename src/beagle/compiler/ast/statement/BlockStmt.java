package beagle.compiler.ast.statement;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.Random;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class BlockStmt extends Statement
{

	public List<Statement> statements = null;

	public String name;

	public BlockStmt()
	{
		name = Random.createName("block");
	}

	public BlockStmt( LineInfo linfo, List<Statement> stmts )
	{
		super(linfo);
		this.statements = stmts;
		name = Random.createName("block");
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

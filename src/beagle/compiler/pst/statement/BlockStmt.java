package beagle.compiler.pst.statement;

import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.statement.Statement;
import beagle.compiler.pst.visitor.TreeVisitor;


public class BlockStmt extends Statement
{

	public List<Statement> statements = null;
	
	public BlockStmt()
	{
		// TODO Auto-generated constructor stub
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

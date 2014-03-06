package beagle.compiler.ast.statement;


import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.Node;


public abstract class Statement extends Node
{

	public Statement()
	{
	}

	public Statement( LineInfo info )
	{
		super(info);
	}

}

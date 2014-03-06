package beagle.compiler.ast.expression;


import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.Node;


public abstract class Expression extends Node
{

	public Expression()
	{
	}

	public Expression( LineInfo linfo )
	{
		super(linfo);
	}

}

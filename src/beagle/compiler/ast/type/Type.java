package beagle.compiler.ast.type;


import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.Node;


public abstract class Type extends Node 
{
	
	public Type( )
	{
	}

	public Type( LineInfo linfo )
	{
		super(linfo);
	}
		
}

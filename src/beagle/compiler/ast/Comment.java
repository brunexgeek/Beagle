package beagle.compiler.ast;


public abstract class Comment extends Node
{

	public String comment;

	public Comment()
	{
	}

	public Comment( LineInfo linfo, String comment )
	{
		super(linfo);
		this.comment = comment;
	}

}

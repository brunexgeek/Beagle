package beagle.compiler.generator.ansic;


public class CommentPrinter extends CodePrinter
{
	
	public CommentPrinter( StringBuilder buffer )
	{
		super(buffer);
	}

	public CommentPrinter( StringBuilder buffer, int tabSize )
	{
		super(buffer, tabSize);
	}
	
	public void comment( String comment )
	{
		indent();
		buffer.append("/* ");
		buffer.append(comment);
		buffer.append("*/\n");
	}
		
}

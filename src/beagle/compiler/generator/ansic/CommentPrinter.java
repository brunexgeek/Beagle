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
		buffer.append(" */\n");
	}

	public void section(String value) 
	{
		buffer.append("/");
		for (int i = 0; i < value.length() + 4; ++i)
			buffer.append("*");
		buffer.append("\n * ");
		buffer.append(value);
		buffer.append(" *\n ");
		for (int i = 0; i < value.length() + 4; ++i)
			buffer.append("*");
		buffer.append("/\n");
	}
		
}

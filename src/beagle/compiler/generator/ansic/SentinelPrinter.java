package beagle.compiler.generator.ansic;


public class SentinelPrinter extends CodePrinter
{

	public SentinelPrinter( StringBuilder buffer )
	{
		super(buffer);
	}

	public SentinelPrinter( StringBuilder buffer, int tabSize )
	{
		super(buffer, tabSize);
	}

	public void open( String name )
	{
		name = name.toUpperCase();
		
		buffer.append("#ifndef ");
		buffer.append(name);
		buffer.append("\n#define ");
		buffer.append(name);
		buffer.append("\n\n");
	}
	
	public void close( String name )
	{
		name = name.toUpperCase();
		
		buffer.append("#endif /* ");
		buffer.append(name);
		buffer.append(" */\n\n");
	}
	
}

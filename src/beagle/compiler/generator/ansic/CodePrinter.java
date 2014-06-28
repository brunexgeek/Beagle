package beagle.compiler.generator.ansic;


public abstract class CodePrinter
{

	protected StringBuilder buffer;

	private int tabSize;

	private static int indent = 0;

	public CodePrinter( StringBuilder buffer )
	{
		this(buffer, 4);
	}
	
	public CodePrinter( StringBuilder buffer, int tabSize )
	{
		this.buffer = buffer;
		this.tabSize = (tabSize > 0 && tabSize <= 10) ? tabSize : 4;
	}

	public int getTabSize()
	{
		return tabSize;
	}

	public int incIndent()
	{
		return indent++;
	}

	public int decIndent()
	{
		if (indent > 0) indent--;
		return indent;
	}

	public int getIndent()
	{
		return indent;
	}
	
	public void indent()
	{
		for (int i = 0; i < indent * tabSize; i++)
			buffer.append(' ');
	}

	@Override
	public String toString()
	{
		return buffer.toString();
	}
	
}

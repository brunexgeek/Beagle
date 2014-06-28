package beagle.compiler.generator.ansic;


public class VariablePrinter extends CodePrinter
{

	public VariablePrinter( StringBuilder buffer )
	{
		super(buffer);
	}

	public VariablePrinter( StringBuilder buffer, int tabSize )
	{
		super(buffer, tabSize);
	}

	public void open( int modifiers, String type, boolean isStruct, String name )
	{
	
		indent();
		if ((modifiers & Constants.CONST) > 0)
			buffer.append("const ");
		if (isStruct)
			buffer.append("struct ");
		buffer.append(type);
		buffer.append(" ");
		buffer.append(name);
		if ((modifiers & Constants.ARRAY) > 0)
			buffer.append("[]");
		buffer.append(" = {\n");
		incIndent();
	}
	
	public void close( )
	{
		decIndent();
		buffer.append("};\n");
	}
			
	public void addSizeOf( String name )
	{
		indent();
		buffer.append("sizeof(");
		buffer.append(name);
		buffer.append("),\n");
	}
	
	public void addAddress( String name )
	{
		indent();
		buffer.append("&");
		buffer.append(name);
		buffer.append(",\n");
	}
	
	public void addPlain( String name )
	{
		indent();
		buffer.append(name);
		buffer.append(",\n");
	}
	
	public <A> void addValue( A value )
	{
		indent();
		
		/*if (value != null)
			column += value.toString().length();*/
		
		if (value == null)
			buffer.append("NULL");
		else
			if (value instanceof String)
			{
				buffer.append("\"");
				buffer.append(value);
				buffer.append("\"");
			}	
			else
				buffer.append(value);
		buffer.append(", \n");
	}
	
	public void openBlock()
	{
		indent();
		buffer.append("{ \n");
		incIndent();
	}
	
	public void closeBlock()
	{
		decIndent();
		indent();
		buffer.append("}, \n");			
	}
	
}

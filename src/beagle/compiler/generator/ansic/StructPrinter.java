package beagle.compiler.generator.ansic;


public class StructPrinter extends CodePrinter
{

	public StructPrinter( StringBuilder buffer )
	{
		super(buffer);
	}

	public StructPrinter( StringBuilder buffer, int tabSize )
	{
		super(buffer, tabSize);
	}

	public void open( int modifiers, String name )
	{
		indent();
		if ((modifiers & Constants.PRIVATE) > 0)
			buffer.append("static ");
		if (name == null)
			buffer.append("struct {\n");
		else
		{
			buffer.append("struct ");
			buffer.append(name);
			buffer.append(" {\n");
		}
		incIndent();
	}

	public void open(  String name )
	{
		open(Constants.PRIVATE, name);
	}
	
	public void close()
	{
		decIndent();
		indent();
		buffer.append("};\n\n");
	}

	public void addPrimitive( int modifiers, String type, String name )
	{
		indent();
		if ((modifiers & Constants.CONST) > 0) buffer.append("const ");
		if ((modifiers & Constants.STRUCT) > 0) buffer.append("struct ");
		buffer.append(type);
		if ((modifiers & Constants.POINTER) > 0) buffer.append("*");
		buffer.append(" ");
		buffer.append(name);
		buffer.append(";\n");
	}

	public void addStruct( int modifiers, String type, String name )
	{
		addPrimitive(modifiers | Constants.STRUCT, type, name);
	}

}

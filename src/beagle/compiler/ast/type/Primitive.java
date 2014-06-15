package beagle.compiler.ast.type;


public enum Primitive
{
	Boolean("boolean"), Char("char"), Byte("byte"), Short("short"), Int("int"), Long("long"), Float(
		"float"), Fixed("fixed"), Double("double");

	String name;

	private Primitive( String name )
	{
		this.name = name;
	}

	@Override
	public String toString()
	{
		return name;
	}

}

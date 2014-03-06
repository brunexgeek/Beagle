package beagle.compiler.ast.body;




public enum ModifierSet
{
	
	PUBLIC("public", 0x01),

	PRIVATE("private", 0x02),

	PROTECTED("protected", 0x04),

	STATIC("static", 0x08),

	FINAL("final", 0x10),
	
	CONST("const", 0x20),

	SYNCHRONIZED("synchronized", 0x40),

	NATIVE("native", 0x80),

	ABSTRACT("abstract", 0x100),

	EXPORT("export", 0x200),

	READLOCK("readlock", 0x400),

	WRITELOCK("writelock", 0x800),
	
	INTERNAL("internal", 0x800);
	
	private int value;
	
	private String name;
	
	private ModifierSet( String name, int value )
	{
		this.name = name;
		this.value = value;
	}

	@Override
	public String toString()
	{
		return name;
	}
	
	public int getValue()
	{
		return value;
	}
	
	public static int setModifier( int modifiers, ModifierSet modifier )
	{
		return modifiers | modifier.getValue();
	}

	public static int unsetModifier( int modifiers, ModifierSet modifier )
	{
		return modifiers & ~modifier.getValue();
	}
	
	public static boolean hasModifier( int modifiers, ModifierSet modifier )
	{
		return (modifiers & modifier.getValue()) != 0;
	}
	
}

package beagle.compiler.ast.expression;


public enum BinaryOperator
{
	LOR("or"), LAND("and"), BOR("|"), BAND("&"), XOR("^"), EQ("=="), NE("!="), LT("<"), GT(">"), LE(
		"<="), GE(">="), SHL("<<"), SHR(">>"), ADD("+"), SUB("-"), MUL("*"), DIV("/"), REM("%");

	private String token;

	private BinaryOperator( String token )
	{
		this.token = token;
	}
	
	@Override
	public String toString()
	{
		return token;
	}
	
}

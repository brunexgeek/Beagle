package beagle.compiler.ast.expression;


public enum AssignOperator
{

	ASSIGN("="), ASN_ADD("+="), ASN_SUB("-="), ASN_MUL("*="), ASN_DIV("/="), ASN_BAND("&="), ASN_BOR(
		"|="), ASN_XOR("^="), ASN_REM("%="), ASN_SHL("<<="), ASN_SHR(">>=");

	private String token;

	private AssignOperator( String token )
	{
		this.token = token;
	}

	@Override
	public String toString()
	{
		return token;
	}

}

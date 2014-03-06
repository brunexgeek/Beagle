package beagle.compiler.ast;


public class Random
{

	private static java.util.Random rand = new java.util.Random(System.currentTimeMillis());
	
	private Random()
	{
		// nothing to do
	}
	
	public static String createName( String prefix )
	{
		StringBuilder sb = new StringBuilder();
		sb.append(prefix);
		sb.append("_");
		sb.append(Integer.toHexString( rand.nextInt() ));
		return sb.toString();
	}
	
}

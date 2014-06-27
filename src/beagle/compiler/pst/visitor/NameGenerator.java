package beagle.compiler.pst.visitor;

import beagle.compiler.pst.type.ClassOrInterfaceType;
import beagle.compiler.pst.type.Type;
import beagle.compiler.pst.type.TypeDeclaration;


public class NameGenerator
{

	/**
	 * Append the name to a StringBuffer instance. If the name is full qualified,
	 * each dot character will be replaced by an underline.
	 */
	public static void appendName( StringBuilder sb, String ...names )
	{
		char current;
		for (int c = 0; c < names.length; ++c)
		{
			for (int i = 0; i < names[c].length(); ++i)
			{
				current = names[c].charAt(i);
				if (current == '.') current = '_';
				sb.append(current);
			}
			if (c < names.length - 1) sb.append('_');
		}
	}
	

	public static String procedureName( String pack, String clazz, String name )
	{
		StringBuilder sb = new StringBuilder();

		sb.append("__");
		if (pack != null)
		{
			appendName(sb, pack);
			sb.append("_");
		}
		appendName(sb, clazz, "_", name);
		return sb.toString();
	}
	
	public static String procedureName( TypeDeclaration typeDecl, String name )
	{
		return procedureName(typeDecl.packageName, typeDecl.name, name);
	}
	
	/*public static String genericName( String ...names )
	{
		StringBuilder sb = new StringBuilder();

		sb.append("__");
		// append all names
		for (int c = 0; c < names.length; ++c)
		{
			appendName(sb, names[c]);
			if (c < names.length - 1) sb.append("_");
		}
		return sb.toString();
	}*/
	
	public static String structName( String prefix, String ...names )
	{
		StringBuilder sb = new StringBuilder();

		sb.append("__");
		//sb.append("Beagle_");
		if (prefix != null)
		{
			appendName(sb, prefix);
			sb.append("_");
		}
		appendName(sb, names);
		return sb.toString();
	}
		
	public static String variableName( String prefix, String ...names )
	{
		StringBuilder sb = new StringBuilder();

		if (prefix != null)
		{
			appendName(sb, prefix);
			sb.append("_");
		}
		appendName(sb, names);
		return sb.toString();
	}
	
	public static String dynamicName( TypeDeclaration n )
	{
		return structName("type_dynamic_", n.packageName, n.name);
	}
	
	public static String dynamicName( ClassOrInterfaceType n )
	{
		String scope = n.scope;
		StringBuilder sb = new StringBuilder();
		
		sb.append( structName("type_dynamic_") );
		appendName(sb, scope);
		sb.append("_");
		appendName(sb, n.type);
		return sb.toString();
	}
	
}

package beagle.compiler.pst.visitor;

import beagle.compiler.pst.body.TypeDeclaration;
import beagle.compiler.pst.type.ClassOrInterfaceType;


public class NameGenerator
{

	/**
	 * Append the name to a StringBuffer instance. If the name is full qualified,
	 * each dot character will be replaced by an underline.
	 */
	public static void appendName( StringBuilder sb, String ...names )
	{
		char current = '_';
		for (int c = 0; c < names.length; ++c)
		{
			for (int i = 0; i < names[c].length(); ++i)
			{
				current = names[c].charAt(i);
				if (current == '.') current = '_';
				sb.append(current);
			}
			if (c < names.length - 1 && current != '_') sb.append('_');
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
	
	public static String structName( String ...names )
	{
		StringBuilder sb = new StringBuilder();

		sb.append("__");
		appendName(sb, names);
		return sb.toString();
	}
		
	public static String variableName( String ...names )
	{
		StringBuilder sb = new StringBuilder();

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
		if (scope != null) 
		{
			appendName(sb, scope);
			sb.append("_");
		}	
		appendName(sb, n.name);
		return sb.toString();
	}
	
}

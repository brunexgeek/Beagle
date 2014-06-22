package beagle.compiler.pst.visitor;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.CompilationGroup;
import beagle.compiler.pst.body.FieldDeclaration;
import beagle.compiler.pst.body.Parameter;
import beagle.compiler.pst.body.ProcedureDeclaration;
import beagle.compiler.pst.type.Type;
import beagle.compiler.pst.type.TypeDeclaration;


public class CCodeGenerator implements TreeVisitor<Object>
{

	private static final int POINTER = 0x01;
	
	private static final int CONST = 0x02;
	
	private static final int ARRAY = 0x03;
	
	private class CommentBuilder
	{
		
		private void comment( String comment )
		{
			makeIndent();
			buffer.append("// ");
			buffer.append(comment);
			buffer.append("\n");
		}
		
	}
	
	private class VariableBuilder
	{
		
		private void open( int modifiers, String type, boolean isStruct, String name )
		{
		
			makeIndent();
			if ((modifiers & CONST) > 0)
				buffer.append("const ");
			if (isStruct)
				buffer.append("struct ");
			buffer.append(type);
			buffer.append(" ");
			buffer.append(name);
			if ((modifiers & ARRAY) > 0)
				buffer.append("[]");
			buffer.append(" = {\n");
			indent++;
			column = 0;
			//makeIndent();
		}
		
		private void close( )
		{
			indent--;
			if (column > 0)
			{
				buffer.append("\n");
				makeIndent();
			}
			buffer.append("};\n");
		}
				
		private <A> void addValue( A value )
		{
			if (column > 80)
			{
				buffer.append("\n");
				makeIndent();
				column = 0;
			}
				else
					if (column == 0)
						makeIndent();
			if (value != null)
				column += value.toString().length();
			
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
			buffer.append(", ");
		}
		
		private void openBlock()
		{
			if (column == 0)
				makeIndent();
			buffer.append("{ ");
			column += 2;
			indent++;
		}
		
		private void closeBlock()
		{
			if (column == 0)
				makeIndent();
			indent--;
			column += 3;
			buffer.append("}, ");			
		}
		
	}
	
	/*private class StructVariableBuilder
	{
		
		private void open( int modifiers, String type, String name )
		{
		
			makeIndent();
			if ((modifiers & CONST) > 0)
				buffer.append("const ");
			buffer.append("struct ");
			buffer.append(type);
			buffer.append(" ");
			buffer.append(name);
			if ((modifiers & ARRAY) > 0)
				buffer.append("[]");
			buffer.append(" = {\n");
			indent++;
			column = 0;
			//makeIndent();
		}
		
		private void close( )
		{
			indent--;
			if (column > 0)
			{
				buffer.append("\n");
				makeIndent();
			}
			buffer.append("};\n");
		}
				
		private <A> void addValue( A value )
		{
			if (column > 80)
			{
				makeIndent();
				column = 0;
			}
			else
				if (column == 0)
					makeIndent();
			column += value.toString().length();
			buffer.append(value);
			buffer.append(", ");
		}
		
		private void openBlock()
		{
			buffer.append("{ ");
			indent++;
		}
		
		private void closeBlock()
		{
			indent--;
			buffer.append("}, ");			
		}
		
	}*/
	
	private static String structName(String prefix, String name )
	{
		if (name != null)
		{
			if (prefix != null)
				return String.format("__struct_%s_%s_", prefix, name);
			else
				return String.format("__struct_%s_", name);
		}
		return null;
	}
	
	
	private static String variableName(String prefix, String name )
	{
		if (name != null)
		{
			if (prefix != null)
				return String.format("__global_%s_%s_", prefix, name);
			else
				return String.format("__global_%s_", name);
		}
		return null;
	}
	
	
	private class StructBuilder
	{

		private void open( String name )
		{
			makeIndent();
			if (name == null)
				buffer.append("struct {\n");
			else
			{
				buffer.append("struct ");
				buffer.append(name);
				buffer.append(" {\n");
			}
			indent++;
		}
		
		private void close( )
		{
			indent--;
			makeIndent();
			buffer.append("};\n");
		}
		
		private void addPrimitive( int modifiers, String type, String name )
		{
			makeIndent();
			if ((modifiers & CONST) > 0)
				buffer.append("const ");
			buffer.append(type);
			if ((modifiers & POINTER) > 0)
				buffer.append("*");
			buffer.append(" ");
			buffer.append(name);
			buffer.append(";\n");
		}
		
		private void addStruct( int modifiers, String prefix, String type, String name )
		{
			String structName = structName(prefix, type);
			
			makeIndent();
			if ((modifiers & CONST) > 0)
				buffer.append("const ");
			buffer.append("struct ");
			buffer.append(structName);
			if ((modifiers & POINTER) > 0)
				buffer.append("*");
			buffer.append(" ");
			buffer.append(name);
			buffer.append(";\n");
		}
		
	}
	
	int indent = 0;
	
	int column = 0;
	
	StringBuilder buffer = new StringBuilder();
	
	StructBuilder struct = new StructBuilder();
	
	CommentBuilder comment = new CommentBuilder();
	
	VariableBuilder structVar = new VariableBuilder();
	
	@Override
	public String toString()
	{
		return buffer.toString();
	}
	
	private void makeIndent()
	{
		for (int i = 0; i < indent; i++)
			buffer.append("    ");
	}
	
	/*private void openBlock()
	{
		buffer.append("{\n");
		indent++;
		makeIndent();
	}
	
	private void closeBlock()
	{
		buffer.append("}\n");
		indent--;
		makeIndent();
	}*/
	
	@Override
	public void visit( CompilationGroup n, Object context ) throws CompilerException
	{
		for (TypeDeclaration entry : n.definitions)
			entry.accept(this, context);
	}

	@Override
	public void visit( TypeDeclaration n, Object context ) throws CompilerException
	{
		// generate the meta-information auxiliary C structs
		String fieldStructName = structName("field", n.name);
		struct.open( fieldStructName );
		struct.addPrimitive(POINTER | CONST, "char" , "type");
		struct.addPrimitive(POINTER | CONST, "char" , "name");
		struct.close();
				
		// generate the meta-information C struct
		String typeStructName = structName("type", n.name);
		struct.open( typeStructName );
		struct.addPrimitive(0, "uint32", "signature");
		struct.addPrimitive(0, "uint16", "typeId");
		
		comment.comment("fields meta-information");
		struct.addPrimitive(0, "uint32", "fieldCount");
		struct.addStruct(POINTER | CONST, "field", n.name, "fields");
		
		comment.comment("methods meta-information");
		struct.addPrimitive(0, "uint32", "methodCount");
		struct.addStruct(POINTER | CONST, "method", n.name, "methods");
		
		comment.comment("amount of memory necessary for static fields");
		struct.addPrimitive(0, "uint32", "staticSize");
		
		comment.comment("amount of memory necessary for dynamic fields (objects)");
		struct.addPrimitive(0, "uint32", "dynamicSize");
		struct.close();
		
		// create a variable for the type declaration
		structVar.open(CONST, typeStructName, true, variableName("type", n.name));
		structVar.addValue("0xDEADBEEF");
		structVar.addValue(1);
		structVar.close();
		
		// create a variable for the class field list
		structVar.open(CONST | ARRAY, fieldStructName, false, variableName("field", n.name));
		if (n.staticFields.size() > 0)
		{
			comment.comment("static fields");
			for (FieldDeclaration entry : n.staticFields)
				entry.accept(this, context);
		}
		if (n.dynamicFields.size() > 0)
		{
			comment.comment("dynamic fields");
			for (FieldDeclaration entry : n.dynamicFields)
				entry.accept(this, context);
		}
		structVar.addValue(null);
		structVar.close();
		
		for (ProcedureDeclaration proc : n.procedures)
			proc.accept(this, context);
	}

	@Override
	public void visit( Type n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub
		
	}

	@Override
	public void visit( FieldDeclaration n, Object context ) throws CompilerException
	{
		structVar.openBlock();
		structVar.addValue(n.type.toString());
		structVar.addValue(n.name);
		structVar.closeBlock();
	}

	@Override
	public void visit( Parameter n, Object context ) throws CompilerException
	{
		buffer.append(n.type);
		buffer.append(" ");
		buffer.append(n.name);
		buffer.append(",");
	}

	@Override
	public void visit( ProcedureDeclaration n, Object context ) throws CompilerException
	{
		buffer.append(n.result.toString());
		buffer.append(" ");
		buffer.append(n.name);
		buffer.append("( ");
		for (Parameter param : n.parameters)
			param.accept(this, n);
		buffer.append(" ) {\n}\n");
	}

}

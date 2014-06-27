package beagle.compiler.pst.visitor;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.CompilationGroup;
import beagle.compiler.pst.body.FieldDeclaration;
import beagle.compiler.pst.body.Parameter;
import beagle.compiler.pst.body.ProcedureDeclaration;
import beagle.compiler.pst.type.ArrayType;
import beagle.compiler.pst.type.ClassOrInterfaceType;
import beagle.compiler.pst.type.PrimitiveType;
import beagle.compiler.pst.type.Type;
import beagle.compiler.pst.type.TypeDeclaration;
import beagle.compiler.pst.type.VoidType;


public class CCodeGenerator implements TreeVisitor<Object>
{

	private static final int POINTER = 0x01;
	
	private static final int CONST = 0x02;
	
	private static final int ARRAY = 0x04;
	
	private static final int STRUCT = 0x08;
	
	private static final String fieldStructName = NameGenerator.structName("field", "metainfo");
	
	private static final String methodStructName = NameGenerator.structName("method", "metainfo");
	
	private String typeStructName = NameGenerator.structName("type", "metainfo");
	
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
	
	private class SentinelBuilder
	{
		
		private void open( String name )
		{
			buffer.append("#ifndef ");
			buffer.append(name);
			buffer.append("\n#define ");
			buffer.append(name);
			buffer.append("\n\n");
		}
		
		private void close( String name )
		{
			buffer.append("#endif /* ");
			buffer.append(name);
			buffer.append(" */\n\n");
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
			buffer.append("};\n\n");
		}
		
		private void addPrimitive( int modifiers, String type, String name )
		{
			makeIndent();
			if ((modifiers & CONST) > 0)
				buffer.append("const ");
			if ((modifiers & STRUCT) > 0)
				buffer.append("struct ");
			buffer.append(type);
			if ((modifiers & POINTER) > 0)
				buffer.append("*");
			buffer.append(" ");
			buffer.append(name);
			buffer.append(";\n");
		}
		
		private void addStruct( int modifiers, String type, String name )
		{
			addPrimitive(modifiers | STRUCT, type, name);
		}
		
	}
	
	int indent = 0;
	
	int column = 0;
	
	StringBuilder buffer = new StringBuilder();
	
	StructBuilder struct = new StructBuilder();
	
	CommentBuilder comment = new CommentBuilder();
	
	VariableBuilder structVar = new VariableBuilder();
	
	SentinelBuilder sentinel = new SentinelBuilder();
	
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
	
	@Override
	public void visit( CompilationGroup n, Object context ) throws CompilerException
	{
		for (TypeDeclaration entry : n.definitions)
			entry.accept(this, context);
	}
	
	private void printTypeStructures( TypeDeclaration n )
	{
		// create the structure to hold the dynamic fields
		struct.open( NameGenerator.structName("type_dynamic_", n.packageName, n.name));
		if (n.dynamicFields.size() > 0)
		{
			comment.comment("dynamic fields");
			for (FieldDeclaration entry : n.dynamicFields)
			{
				struct.addPrimitive(0, getTypeName(entry.type), entry.name);
			}
		}
		struct.close();
		
		// create the structure to hold the static fields
		struct.open( NameGenerator.structName("type_static_", n.packageName, n.name));
		if (n.dynamicFields.size() > 0)
		{
			comment.comment("static fields");
			for (FieldDeclaration entry : n.staticFields)
			{
				struct.addPrimitive(0, getTypeName(entry.type), entry.name);
			}
		}
		struct.close();
	}
	
	private void printCommomTypeStructures()
	{
		// generate the field meta-information C structs
		sentinel.open("FIELD_METAINFO_STRUCT");
		struct.open( fieldStructName );
		struct.addPrimitive(POINTER | CONST, "char" , "type");
		struct.addPrimitive(POINTER | CONST, "char" , "name");
		struct.close();
		sentinel.close("FIELD_METAINFO_STRUCT");
				
		// generate the method meta-information C structs
		sentinel.open("METHOD_METAINFO_STRUCT");
		struct.open( methodStructName );
		struct.addPrimitive(POINTER | CONST, "char" , "prototype");
		struct.addPrimitive(POINTER | CONST, "char" , "name");
		struct.close();
		sentinel.close("METHOD_METAINFO_STRUCT");
		
		// generate the meta-information C struct
		sentinel.open("TYPE_METAINFO_STRUCT");
		struct.open( typeStructName );
		struct.addPrimitive(0, "uint32_t", "signature");
		struct.addPrimitive(0, "uint32_t", "hash");
		struct.addPrimitive(CONST | POINTER, "char", "canonicalName");
		struct.addPrimitive(CONST | POINTER, "char", "qualifiedName");
		struct.addPrimitive(CONST | POINTER, "char", "packageName");
		
		comment.comment("fields meta-information");
		struct.addPrimitive(0, "uint32_t", "fieldCount");
		struct.addStruct(CONST | POINTER | CONST, fieldStructName, "fields");
		
		comment.comment("methods meta-information");
		struct.addPrimitive(0, "uint32_t", "methodCount");
		struct.addStruct(CONST | POINTER | CONST, methodStructName, "methods");
		
		comment.comment("amount of memory necessary for static fields");
		struct.addPrimitive(0, "uint32_t", "staticSize");
		
		comment.comment("amount of memory necessary for dynamic fields (objects)");
		struct.addPrimitive(0, "uint32_t", "dynamicSize");
		struct.close();
		sentinel.close("TYPE_METAINFO_STRUCT");
	}
	
	@Override
	public void visit( TypeDeclaration n, Object context ) throws CompilerException
	{
		buffer.append("#include <stdint.h>\n");
				
		printCommomTypeStructures();
		printTypeStructures(n);
		
		// create a variable for the type declaration
		structVar.open(CONST, typeStructName, true, NameGenerator.variableName("type", n.packageName, n.name));
		structVar.addValue(0xDEADBEEF);
		structVar.addValue(1);
		structVar.close();
		
		// create a variable for the class field meta-information
		structVar.open(CONST | ARRAY, fieldStructName, true, NameGenerator.variableName("fields", n.name));
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
		structVar.close();
		
		for (ProcedureDeclaration proc : n.procedures)
			proc.accept(this, n);
	}

	private String getTypeName( Type n )
	{
		if (n instanceof ClassOrInterfaceType)
			return NameGenerator.dynamicName( (ClassOrInterfaceType)n );
		else
			if (n instanceof PrimitiveType)
				return ((PrimitiveType)n).type.toString();
			else
				if (n instanceof VoidType)
					return "void";
				else
					if (n instanceof ArrayType)
						return getTypeName( ((ArrayType)n).type );
		return null;
	}
	
	@Override
	public void visit( FieldDeclaration n, Object context ) throws CompilerException
	{
		structVar.openBlock();
		structVar.addValue( getTypeName(n.type) );
		structVar.addValue(n.name);
		structVar.closeBlock();
	}

	@Override
	public void visit( Parameter n, Object context ) throws CompilerException
	{
		buffer.append( getTypeName(n.type) );
		buffer.append(" ");
		if (n.isPointer)
			buffer.append("*");
		buffer.append(n.name);
	}

	@Override
	public void visit( ProcedureDeclaration n, Object context ) throws CompilerException
	{
		TypeDeclaration typeDef = (TypeDeclaration)context;
		
		buffer.append(n.result.toString());
		buffer.append(" ");
		buffer.append( NameGenerator.procedureName(typeDef, n.name) );
		buffer.append("( ");
		for (int c = 0; c < n.parameters.size(); ++c)
		{
			n.parameters.get(c).accept(this, n);
			if ( c < n.parameters.size() - 1) buffer.append(", ");
		}
		buffer.append(" ) {\n}\n");
	}

	@Override
	public void visit( PrimitiveType n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub
		
	}

	@Override
	public void visit( ClassOrInterfaceType n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub
		
	}

	@Override
	public void visit( ArrayType n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub
		
	}

	@Override
	public void visit( VoidType n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub
		
	}

}

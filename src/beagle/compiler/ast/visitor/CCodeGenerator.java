package beagle.compiler.ast.visitor;

import static beagle.compiler.generator.ansic.Constants.ARRAY;
import static beagle.compiler.generator.ansic.Constants.CONST;
import static beagle.compiler.generator.ansic.Constants.PUBLIC;
import static beagle.compiler.generator.ansic.Constants.POINTER;
import beagle.compiler.CompilerException;
import beagle.compiler.generator.ansic.CommentPrinter;
import beagle.compiler.generator.ansic.SentinelPrinter;
import beagle.compiler.generator.ansic.StructPrinter;
import beagle.compiler.generator.ansic.VariablePrinter;
import beagle.compiler.ast.CompilationGroup;
import beagle.compiler.ast.body.FieldDeclaration;
import beagle.compiler.ast.body.Parameter;
import beagle.compiler.ast.body.MethodDeclaration;
import beagle.compiler.ast.body.TypeDeclaration;
import beagle.compiler.ast.statement.AssertStmt;
import beagle.compiler.ast.statement.BlockStmt;
import beagle.compiler.ast.statement.BreakStmt;
import beagle.compiler.ast.type.ArrayType;
import beagle.compiler.ast.type.ClassOrInterfaceType;
import beagle.compiler.ast.type.PrimitiveType;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.type.VoidType;
import beagle.compiler.ast.visitor.NameGenerator.ClassStructureType;


public class CCodeGenerator implements TreeVisitor<Object>
{
	
	private static final String fieldStructName = NameGenerator.structName("field", "metainfo");
	
	private static final String classStructName = NameGenerator.structName("class", "metainfo");
	
	private static final String methodStructName = NameGenerator.structName("method", "metainfo");

	private static final String moduleStructName = NameGenerator.structName("module", "metainfo");;
	
	private String typeStructName = NameGenerator.structName("type", "metainfo");
		
	
	StringBuilder buffer = new StringBuilder();
	
	StructPrinter struct = new StructPrinter(buffer);
	
	CommentPrinter comment = new CommentPrinter(buffer);
	
	VariablePrinter varPrinter = new VariablePrinter(buffer);
	
	SentinelPrinter sentinel = new SentinelPrinter(buffer);
	
	@Override
	public String toString()
	{
		return buffer.toString();
	}
	
	
	@Override
	public void visit( CompilationGroup n, Object context ) throws CompilerException
	{
		buffer.append("#include <stdint.h>\n");
		buffer.append("#include <stdio.h>\n\n");
		
		printCommomTypeStructures();
		
		// generate code for each type declaration
		for (TypeDeclaration entry : n.definitions)
			entry.accept(this, context);
		
		comment.section("Module class list");
		
		// create the variable containing the list of classes in the library
		varPrinter.open(CONST | ARRAY, classStructName, true, "class_list");
		for (TypeDeclaration entry : n.definitions)
		{
			varPrinter.openBlock();
			varPrinter.addValue(entry.packageName + '.' + entry.name);
			varPrinter.addValue( NameGenerator.variableName(entry.packageName, entry.name, "_type") );
			varPrinter.closeBlock();
		}
		varPrinter.close();
		
		comment.section("Module meta-information symbol");
		
		// create the library meta-information variable
		varPrinter.open(CONST | ARRAY | PUBLIC, moduleStructName, true, "module_metainfo");
		varPrinter.addValue(n.definitions.size());
		varPrinter.addPlain("types_metainfo");
		varPrinter.close();
	}
	
	private void printClassStructures( TypeDeclaration n )
	{
		comment.section("Object structures for " + n.name);
		
		// create the structure to hold the dynamic fields
		struct.open( NameGenerator.getClassFieldsStructureName( ClassStructureType.DYNAMIC, n.packageName, n.name ) );
		if (n.dynamicFields.size() > 0)
		{
			comment.comment("dynamic fields");
			for (FieldDeclaration entry : n.dynamicFields)
			{
				struct.addPrimitive(0, getNativeTypeName(entry.type), entry.name);
			}
		}
		struct.close();
		
		// create the structure to hold the static fields
		struct.open( NameGenerator.getClassFieldsStructureName( ClassStructureType.STATIC, n.packageName, n.name ) );
		if (n.dynamicFields.size() > 0)
		{
			comment.comment("static fields");
			for (FieldDeclaration entry : n.staticFields)
			{
				struct.addPrimitive(0, getNativeTypeName(entry.type), entry.name);
			}
		}
		struct.close();
	}
	
	private void printCommomTypeStructures()
	{
		// generate the C struct for an entry of the class list
		sentinel.open("CLASS_METAINFO_STRUCT");
		struct.open( classStructName );
		struct.addPrimitive(POINTER | CONST, "char" , "name");
		struct.addPrimitive(POINTER | CONST, "char" , "symbol");
		struct.close();
		sentinel.close("CLASS_METAINFO_STRUCT");
		
		// generate the library meta-information C struct
		sentinel.open("LIBRARY_METAINFO_STRUCT");
		struct.open(moduleStructName);
		struct.addPrimitive(CONST, "uint32_t" , "classCount");
		struct.addStruct(POINTER | CONST, classStructName , "classTable");
		struct.close();
		sentinel.close("LIBRARY_METAINFO_STRUCT");
		
		// generate the field meta-information C struct
		sentinel.open("FIELD_METAINFO_STRUCT");
		struct.open( fieldStructName );
		struct.addPrimitive(POINTER | CONST, "char" , "type");
		struct.addPrimitive(POINTER | CONST, "char" , "name");
		struct.close();
		sentinel.close("FIELD_METAINFO_STRUCT");
				
		// generate the method meta-information C struct
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
		struct.addStruct(CONST | POINTER, fieldStructName, "fields");
		
		comment.comment("methods meta-information");
		struct.addPrimitive(0, "uint32_t", "methodCount");
		struct.addStruct(CONST | POINTER, methodStructName, "methods");
		
		comment.comment("amount of memory necessary for static fields");
		struct.addPrimitive(0, "size_t", "staticSize");
		
		comment.comment("amount of memory necessary for dynamic fields (objects)");
		struct.addPrimitive(0, "size_t", "dynamicSize");
		struct.close();
		sentinel.close("TYPE_METAINFO_STRUCT");
	}
	
	private String getPrototype( ProcedureDeclaration proc )
	{
		StringBuilder sb = new StringBuilder();

		//sb.append(proc.name);
		sb.append('(');
		for (int i = 0; i < proc.parameters.size(); ++i)
		{
			Parameter param = proc.parameters.get(i); 
			sb.append( getBeagleTypeName(param.type) );
			if (i < proc.parameters.size() - 1) sb.append(',');
		}
		sb.append(')');
		sb.append( getBeagleTypeName(proc.result) );
		
		return sb.toString();
	}
	
	/**
	 * Output the type meta-information.
	 * 
	 * @param typeDecl
	 */
	private void printClassInformation( TypeDeclaration typeDecl )
	{
		
		comment.section("Meta-information for " + typeDecl.name);
		
		// class fields meta-information
		String classFieldsVariable = NameGenerator.variableName(typeDecl.packageName, typeDecl.name, "__fields");
		varPrinter.open(CONST | ARRAY, fieldStructName, true, classFieldsVariable);
		if (typeDecl.staticFields.size() > 0)
		{
			comment.comment("static fields");
			for (FieldDeclaration entry : typeDecl.staticFields)
			{
				varPrinter.openBlock();
				varPrinter.addValue( getBeagleTypeName(entry.type) );
				varPrinter.addValue(entry.name);
				varPrinter.addValue( 1 );
				varPrinter.closeBlock();
			}
		}
		if (typeDecl.dynamicFields.size() > 0)
		{
			comment.comment("dynamic fields");
			for (FieldDeclaration entry : typeDecl.dynamicFields)
			{
				varPrinter.openBlock();
				varPrinter.addValue( getBeagleTypeName(entry.type) );
				varPrinter.addValue(entry.name);
				varPrinter.addValue( 0 );
				varPrinter.closeBlock();
			}
		}
		varPrinter.close();
				
		// class methods meta-information
		String classMethodsVariable = NameGenerator.variableName(typeDecl.packageName, typeDecl.name, "__methods");
		varPrinter.open(CONST | ARRAY, methodStructName, true, classMethodsVariable);
		if (typeDecl.procedures.size() > 0)
		{
			for (ProcedureDeclaration entry : typeDecl.procedures)
			{
				varPrinter.openBlock();
				varPrinter.addValue( getPrototype(entry) );
				varPrinter.addValue(entry.name);
				varPrinter.closeBlock();
			}
		}
		varPrinter.close();
		
		// create a variable for the type declaration
		String classVariable = NameGenerator.variableName(typeDecl.packageName, typeDecl.name, "__class");
		varPrinter.open(CONST, typeStructName, true, classVariable);
		varPrinter.addValue(0x00BEA61E);
		varPrinter.addValue(1);
		varPrinter.addValue(typeDecl.name);
		varPrinter.addValue(typeDecl.packageName + "." + typeDecl.name);
		varPrinter.addValue(typeDecl.packageName);
		varPrinter.addValue(typeDecl.dynamicFields.size() + typeDecl.staticFields.size());
		varPrinter.addPlain(classFieldsVariable);
		varPrinter.addValue(typeDecl.procedures.size());
		varPrinter.addPlain(classMethodsVariable);
		varPrinter.addSizeOf("struct " + NameGenerator.structName("type_static_", typeDecl.packageName, typeDecl.name));
		varPrinter.addSizeOf("struct " + NameGenerator.structName("type_dynamic_", typeDecl.packageName, typeDecl.name));
		varPrinter.close();
	}
	
	@Override
	public void visit( TypeDeclaration n, Object context ) throws CompilerException
	{
		sentinel.open( NameGenerator.variableName(n.packageName, n.name) );
		printClassStructures(n);
		printClassInformation(n);
				
		for (ProcedureDeclaration proc : n.procedures)
			proc.accept(this, n);
		
		sentinel.close( NameGenerator.variableName(n.packageName, n.name) );
	}
	
	/**
	 * Returns the Beagle version of the name for the given type. 
	 * 
	 * This method includes the array symbol ([) when necessary.
	 *  
	 * @param n
	 * @return
	 */
	private String getBeagleTypeName( Type n )
	{
		StringBuilder sb = new StringBuilder();
		
		if (n instanceof ClassOrInterfaceType)
		{
			sb.append( ((ClassOrInterfaceType)n).scope );
			sb.append(".");
			sb.append( ((ClassOrInterfaceType)n).name );
		}
		else
			if (n instanceof PrimitiveType)
				sb.append( ((PrimitiveType)n).type.toString() );
			else
				if (n instanceof VoidType)
					sb.append("void");
				else
					if (n instanceof ArrayType)
					{
						sb.append( getBeagleTypeName( ((ArrayType)n).type ) );
						for (int i = 0; i < ((ArrayType)n).arrayLevels; ++i)
							sb.append('[');
					}

		return sb.toString();
	}
	
	/**
	 * Returns the native version of the name for the given type. 
	 * 
	 * This method includes the pointer symbol (*) when necessary.
	 *  
	 * @param n
	 * @return
	 */
	private String getNativeTypeName( Type n )
	{
		StringBuilder sb = new StringBuilder();
		
		if (n instanceof ClassOrInterfaceType)
		{
			sb.append( NameGenerator.getClassFieldsStructureName( ClassStructureType.DYNAMIC, ((ClassOrInterfaceType) n).scope, ((ClassOrInterfaceType) n).name ) );
			sb.append('*');
		}
		else
			if (n instanceof PrimitiveType)
				sb.append( ((PrimitiveType)n).type.toString() );
			else
				if (n instanceof VoidType)
					sb.append("void");
				else
					if (n instanceof ArrayType)
					{
						sb.append( getNativeTypeName( ((ArrayType)n).type ) );
						for (int i = 0; i < ((ArrayType)n).arrayLevels; ++i)
							sb.append('*');
					}
		
		return sb.toString();
	}
	
	@Override
	public void visit( FieldDeclaration n, Object context ) throws CompilerException
	{
		// nothing to do
	}

	@Override
	public void visit( Parameter n, Object context ) throws CompilerException
	{
		buffer.append( getNativeTypeName(n.type) );
		buffer.append(" ");
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


	@Override
	public void visit( BreakStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub
		
	}


	@Override
	public void visit( BlockStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub
		
	}


	@Override
	public void visit( AssertStmt n, Object context ) throws CompilerException
	{
		// TODO Auto-generated method stub
		
	}

}

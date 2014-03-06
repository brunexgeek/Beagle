package beagle.compiler.ast;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.body.TypeDeclaration;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class CompilationUnit extends Node
{

	public PackageDeclaration pkg = null;

	public List<ImportDeclaration> imports = null;

	public TypeDeclaration type = null;

	public List<Comment> comments = null;

	public CompilationUnit()
	{
	}
	
	public CompilationUnit( LineInfo lineInfo, PackageDeclaration pkg,
		List<ImportDeclaration> imports, TypeDeclaration type )
	{
		super(lineInfo);
		this.pkg = pkg;
		this.imports = imports;
		this.type = type;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

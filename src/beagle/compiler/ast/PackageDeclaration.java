package beagle.compiler.ast;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.expression.AnnotationExpr;
import beagle.compiler.ast.expression.NameExpr;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class PackageDeclaration extends Node
{

	public List<AnnotationExpr> annotations = null;

	public NameExpr name = null;

	public PackageDeclaration( LineInfo linfo, List<AnnotationExpr> annotations, NameExpr name )
	{
		super(linfo);
		this.annotations = annotations;
		this.name = name;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

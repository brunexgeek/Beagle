package beagle.compiler.ast.body;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.AnnotationExpr;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class AnnotationDeclaration extends TypeDeclaration
{

	public AnnotationDeclaration()
	{
	}

	public AnnotationDeclaration( LineInfo linfo, DocComment doc, List<AnnotationExpr> annotations,
		ModifierDeclaration modifiers, String name, List<BodyDeclaration> members )
	{
		super(linfo, annotations, doc, modifiers, name, members);
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

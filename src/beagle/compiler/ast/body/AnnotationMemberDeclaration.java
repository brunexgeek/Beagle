package beagle.compiler.ast.body;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.AnnotationExpr;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class AnnotationMemberDeclaration extends BodyDeclaration
{

	public ModifierDeclaration modifiers;

	public Type type;

	public String name;

	public Expression defaultValue;

	public AnnotationMemberDeclaration( LineInfo linfo, DocComment doc,
		List<AnnotationExpr> annotations, ModifierDeclaration modifiers, Type type, String name,
		Expression defaultValue )
	{
		super(linfo, annotations, doc);
		this.modifiers = modifiers;
		this.type = type;
		this.name = name;
		this.defaultValue = defaultValue;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

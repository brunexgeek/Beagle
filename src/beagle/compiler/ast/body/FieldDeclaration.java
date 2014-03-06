package beagle.compiler.ast.body;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.AnnotationExpr;
import beagle.compiler.ast.type.Type;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class FieldDeclaration extends BodyDeclaration
{

	public ModifierDeclaration modifiers;

	public Type type;

	public List<VariableDeclarator> variables;

	public FieldDeclaration( LineInfo linfo, DocComment javaDoc, List<AnnotationExpr> annotations,
		ModifierDeclaration modifiers, Type type, List<VariableDeclarator> variables )
	{
		super(linfo, annotations, javaDoc);
		this.modifiers = modifiers;
		this.type = type;
		this.variables = variables;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

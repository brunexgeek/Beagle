package beagle.compiler.ast.body;


import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.AnnotationExpr;
import beagle.compiler.ast.type.ClassOrInterfaceType;
import beagle.compiler.ast.visitor.TreeVisitor;


public final class EnumDeclaration extends TypeDeclaration
{

	public List<ClassOrInterfaceType> implementsList;

	public List<EnumConstantDeclaration> entries;

	public EnumDeclaration()
	{
	}

	public EnumDeclaration( LineInfo linfo, DocComment doc, List<AnnotationExpr> annotations,
		ModifierDeclaration modifiers, String name, List<ClassOrInterfaceType> implementsList,
		List<EnumConstantDeclaration> entries, List<BodyDeclaration> members )
	{
		super(linfo, annotations, doc, modifiers, name, members);
		this.implementsList = implementsList;
		this.entries = entries;
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}

package beagle.compiler.ast.body;


import java.util.List;

import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.LineInfo;
import beagle.compiler.ast.expression.AnnotationExpr;


public abstract class TypeDeclaration extends BodyDeclaration 
{

	public String name;

	public ModifierDeclaration modifiers;

	public List<BodyDeclaration> members;

	public TypeDeclaration()
	{
	}

	public TypeDeclaration( LineInfo linfo,
		List<AnnotationExpr> annotations, DocComment javaDoc, ModifierDeclaration modifiers, String name,
		List<BodyDeclaration> members )
	{
		super(linfo, annotations, javaDoc);
		this.name = name;
		this.modifiers = modifiers;
		this.members = members;
	}

	public final List<BodyDeclaration> getMembers()
	{
		return members;
	}
}

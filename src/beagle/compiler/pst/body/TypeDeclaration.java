package beagle.compiler.pst.body;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import beagle.compiler.CompilerException;
import beagle.compiler.pst.Node;
import beagle.compiler.pst.body.FieldDeclaration;
import beagle.compiler.pst.body.ProcedureDeclaration;
import beagle.compiler.pst.visitor.TreeVisitor;

/**
 *  Type declaration for procedural form.
 *  
 * @author Bruno Ribeiro
 */
// TODO: move to "beagle.compiler.pst.body"
public class TypeDeclaration extends Node
{

	/**
	 * Package name which this type was declared.
	 */
	public String packageName;
	
	/**
	 * File name which this type was declared.
	 */
	public String fileName;

	/**
	 * Canonical name.
	 */
	public String name;

	/**
	 * Modifiers.
	 */
	public int modifiers;
	
	public List<ProcedureDeclaration> procedures = new ArrayList<ProcedureDeclaration>();
	
	public List<FieldDeclaration> staticFields = new ArrayList<FieldDeclaration>();
	
	public List<FieldDeclaration> dynamicFields = new ArrayList<FieldDeclaration>();
	
	public Map<String, String> importTable = new HashMap<String, String>();
	
	public TypeDeclaration()
	{
		super();
	}

	@Override
	public <A> void accept( TreeVisitor<A> v, A context ) throws CompilerException
	{
		v.visit(this, context);
	}

}
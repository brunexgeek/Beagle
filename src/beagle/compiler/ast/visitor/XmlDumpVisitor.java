package beagle.compiler.ast.visitor;


import java.util.Iterator;
import java.util.List;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.BlockComment;
import beagle.compiler.ast.CompilationUnit;
import beagle.compiler.ast.DocComment;
import beagle.compiler.ast.ImportDeclaration;
import beagle.compiler.ast.LineComment;
import beagle.compiler.ast.PackageDeclaration;
import beagle.compiler.ast.body.AnnotationDeclaration;
import beagle.compiler.ast.body.AnnotationMemberDeclaration;
import beagle.compiler.ast.body.BodyDeclaration;
import beagle.compiler.ast.body.ClassOrInterfaceDeclaration;
import beagle.compiler.ast.body.ConstructorDeclaration;
import beagle.compiler.ast.body.EmptyTypeDeclaration;
import beagle.compiler.ast.body.EnumConstantDeclaration;
import beagle.compiler.ast.body.EnumDeclaration;
import beagle.compiler.ast.body.FieldDeclaration;
import beagle.compiler.ast.body.MethodDeclaration;
import beagle.compiler.ast.body.ModifierDeclaration;
import beagle.compiler.ast.body.ModifierSet;
import beagle.compiler.ast.body.Parameter;
import beagle.compiler.ast.body.VariableDeclarator;
import beagle.compiler.ast.expression.AnnotationExpr;
import beagle.compiler.ast.expression.ArrayAccessExpr;
import beagle.compiler.ast.expression.ArrayCreationExpr;
import beagle.compiler.ast.expression.ArrayInitializerExpr;
import beagle.compiler.ast.expression.AssignExpr;
import beagle.compiler.ast.expression.BinaryExpr;
import beagle.compiler.ast.expression.BooleanLiteralExpr;
import beagle.compiler.ast.expression.CastExpr;
import beagle.compiler.ast.expression.CharLiteralExpr;
import beagle.compiler.ast.expression.ClassExpr;
import beagle.compiler.ast.expression.ConditionalExpr;
import beagle.compiler.ast.expression.DoubleLiteralExpr;
import beagle.compiler.ast.expression.EnclosedExpr;
import beagle.compiler.ast.expression.Expression;
import beagle.compiler.ast.expression.FieldAccessExpr;
import beagle.compiler.ast.expression.InstanceOfExpr;
import beagle.compiler.ast.expression.IntegerLiteralExpr;
import beagle.compiler.ast.expression.LongLiteralExpr;
import beagle.compiler.ast.expression.MarkerAnnotationExpr;
import beagle.compiler.ast.expression.MemberValuePair;
import beagle.compiler.ast.expression.MethodCallExpr;
import beagle.compiler.ast.expression.NameExpr;
import beagle.compiler.ast.expression.NormalAnnotationExpr;
import beagle.compiler.ast.expression.NullLiteralExpr;
import beagle.compiler.ast.expression.ObjectCreationExpr;
import beagle.compiler.ast.expression.QualifiedNameExpr;
import beagle.compiler.ast.expression.SingleMemberAnnotationExpr;
import beagle.compiler.ast.expression.StringLiteralExpr;
import beagle.compiler.ast.expression.SuperExpr;
import beagle.compiler.ast.expression.ThisExpr;
import beagle.compiler.ast.expression.UnaryExpr;
import beagle.compiler.ast.expression.VariableDeclarationExpr;
import beagle.compiler.ast.statement.AssertStmt;
import beagle.compiler.ast.statement.BlockStmt;
import beagle.compiler.ast.statement.BreakStmt;
import beagle.compiler.ast.statement.CatchClause;
import beagle.compiler.ast.statement.ContinueStmt;
import beagle.compiler.ast.statement.DoWhileStmt;
import beagle.compiler.ast.statement.EmptyStmt;
import beagle.compiler.ast.statement.ExplicitConstructorInvocationStmt;
import beagle.compiler.ast.statement.ExpressionStmt;
import beagle.compiler.ast.statement.ForStmt;
import beagle.compiler.ast.statement.ForeachStmt;
import beagle.compiler.ast.statement.IfStmt;
import beagle.compiler.ast.statement.ReturnStmt;
import beagle.compiler.ast.statement.Statement;
import beagle.compiler.ast.statement.SwitchEntryStmt;
import beagle.compiler.ast.statement.SwitchStmt;
import beagle.compiler.ast.statement.SynchronizedStmt;
import beagle.compiler.ast.statement.ThrowStmt;
import beagle.compiler.ast.statement.TryStmt;
import beagle.compiler.ast.statement.TypeDeclarationStmt;
import beagle.compiler.ast.statement.WhileStmt;
import beagle.compiler.ast.type.ArrayType;
import beagle.compiler.ast.type.ClassOrInterfaceType;
import beagle.compiler.ast.type.PrimitiveType;
import beagle.compiler.ast.type.VoidType;


public final class XmlDumpVisitor implements TreeVisitor<Object>
{

	private static class SourcePrinter
	{

		private int level = 0;

		private boolean indented = false;

		private final StringBuilder buf = new StringBuilder();

		public void indent()
		{
			level++;
		}

		public void dedent()
		{
			level--;
		}

		private void makeIndent()
		{
			for (int i = 0; i < level; i++)
			{
				buf.append("    ");
			}
		}

		public void print( String arg )
		{
			if (!indented)
			{
				makeIndent();
				indented = true;
			}
			buf.append(arg);
		}

		public String getSource()
		{
			return buf.toString();
		}

		@Override
		public String toString()
		{
			return getSource();
		}
	}

	private final SourcePrinter printer = new SourcePrinter();

	@Override
	public String toString()
	{
		return printer.getSource();
	}

	private void printModifiers( ModifierDeclaration modifier )
	{
		if (modifier == null || modifier.modifiers == 0) return;
		int modifiers = modifier.modifiers;

		openTag("modifiers");

		if (ModifierSet.hasModifier(modifiers, ModifierSet.FINAL))
		{
			writeContent("final ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.CONST))
		{
			writeContent("const ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.INTERNAL))
		{
			writeContent("internal ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.STATIC))
		{
			writeContent("static ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.PUBLIC))
		{
			writeContent("public ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.NATIVE))
		{
			writeContent("native ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.EXPORT))
		{
			writeContent("export ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.ABSTRACT))
		{
			writeContent("abstract ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.READLOCK))
		{
			writeContent("readlock ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.WRITELOCK))
		{
			writeContent("writelock ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.PROTECTED))
		{
			writeContent("protected ");
		}
		if (ModifierSet.hasModifier(modifiers, ModifierSet.SYNCHRONIZED))
		{
			writeContent("synchronized ");
		}

		closeTag("modifiers");
	}

	private void printMembers( List<BodyDeclaration> members, Object arg, String tag )
		throws CompilerException
	{
		if (members == null) return;

		openTag(tag);

		for (BodyDeclaration member : members)
		{
			member.accept(this, arg);
		}

		closeTag(tag);
	}

	private void printAnnotations( List<AnnotationExpr> annotations, Object arg )
		throws CompilerException
	{
		if (annotations == null || annotations.size() == 0) return;

		openTag("annotations");
		for (AnnotationExpr a : annotations)
			a.accept(this, arg);
		closeTag("annotations");
	}

	private void printArguments( List<Expression> args, Object arg ) throws CompilerException
	{
		if (args == null) return;

		int c = 0;
		for (Iterator<Expression> i = args.iterator(); i.hasNext(); ++c)
		{
			openTag("arg" + c + "");

			Expression e = i.next();
			e.accept(this, arg);

			closeTag("arg" + c + "");
		}
	}

	private void printJavadoc( DocComment javadoc, Object arg ) throws CompilerException
	{
		if (javadoc != null)
		{
			javadoc.accept(this, arg);
		}
	}

	public void visit( CompilationUnit n, Object arg ) throws CompilerException
	{
		openTag(n);

		if (n.pkg != null)
		{
			n.pkg.accept(this, arg);
		}

		if (n.imports != null)
		{
			for (ImportDeclaration i : n.imports)
			{
				i.accept(this, arg);
			}
		}
		if (n.type != null)
		{
			n.type.accept(this, arg);
		}

		closeTag(n);
	}

	public void visit( PackageDeclaration n, Object arg ) throws CompilerException
	{
		openTag(n);

		printAnnotations(n.annotations, arg);

		openTag("name");
		n.name.accept(this, arg);
		closeTag("name");

		closeTag(n);
	}

	public void visit( NameExpr n, Object arg ) throws CompilerException
	{
		writeContent(n.name);
	}

	public void visit( QualifiedNameExpr n, Object arg ) throws CompilerException
	{
		openTag(n);
		
		openTag("scope");
		n.scope.accept(this, arg);
		closeTag("scope");
		openTag("name");
		writeContent(n.name);
		closeTag("name");
		
		closeTag(n);
	}

	public void visit( ImportDeclaration n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("name");
		n.name.accept(this, arg);
		if (n.isAsterisk) writeContent(".*");
		closeTag("name");

		closeTag(n);
	}

	public void visit( ClassOrInterfaceDeclaration n, Object arg ) throws CompilerException
	{
		openTag(n);

		// printJavadoc(n.getJavaDoc(), arg);
		// print the class annotations
		printAnnotations(n.annotations, arg);
		// print the class modifiers
		printModifiers(n.modifiers);
		// print the class name
		openTag("name");
		writeContent(n.name);
		closeTag("name");
		// print the base class
		if (n.extendsList != null && n.extendsList.size() > 0)
		{
			openTag("extends");
			for (Iterator<ClassOrInterfaceType> i = n.extendsList.iterator(); i.hasNext();)
			{
				ClassOrInterfaceType c = i.next();
				c.accept(this, arg);
			}
			closeTag("extends");
		}
		// print the interfaces
		if (n.implementsList != null && n.implementsList.size() > 0)
		{
			openTag("implements");
			for (Iterator<ClassOrInterfaceType> i = n.implementsList.iterator(); i.hasNext();)
			{
				ClassOrInterfaceType c = i.next();
				c.accept(this, arg);
			}
			closeTag("implements");
		}
		// print the class members
		printMembers(n.getMembers(), arg, "members");

		closeTag(n);
	}

	public void visit( DocComment n, Object arg ) throws CompilerException
	{
		emptyTag(n);
	}

	protected void emptyTag( Object obj )
	{
		String value = "";
		if (obj instanceof String)
			value = (String) obj;
		else
			value = obj.getClass().getSimpleName();
		printer.makeIndent();
		printer.print("<");
		printer.print(value);
		printer.print("/>\n");
	}

	protected void openTag( Object obj )
	{
		String value = "";
		if (obj instanceof String)
		{
			value = (String) obj;
		}
		else
			value = obj.getClass().getSimpleName();
		printer.makeIndent();
		printer.print("<");
		printer.print(value);
		printer.print(">\n");
		printer.indent();
		lastIsWrite = false;
	}

	protected boolean lastIsWrite = false;

	protected void writeContent( String content )
	{
		if (!lastIsWrite) printer.makeIndent();
		printer.print(content);
		lastIsWrite = true;
	}

	protected void closeTag( Object obj )
	{
		if (lastIsWrite)
		{
			printer.print("\n");
			lastIsWrite = false;
		}
		String value = "";
		if (obj instanceof String)
			value = (String) obj;
		else
			value = obj.getClass().getSimpleName();
		printer.dedent();
		printer.makeIndent();
		printer.print("</");
		printer.print(value);
		printer.print(">\n");
	}

	public void visit( ClassOrInterfaceType n, Object arg ) throws CompilerException
	{
		openTag(n);

		if (n.scope != null)
		{
			openTag("scope");
			n.scope.accept(this, arg);
			closeTag("scope");
		}

		openTag("name");
		writeContent(n.name);
		closeTag("name");

		closeTag(n);
	}

	public void visit( PrimitiveType n, Object arg ) throws CompilerException
	{
		openTag(n);

		switch (n.type)
		{
			case Boolean:
				writeContent("boolean");
				break;
			case Byte:
				writeContent("byte");
				break;
			case Char:
				writeContent("char");
				break;
			case Double:
				writeContent("double");
				break;
			case Float:
				writeContent("float");
				break;
			case Int:
				writeContent("int");
				break;
			case Long:
				writeContent("long");
				break;
			case Short:
				writeContent("short");
				break;
			case Fixed:
				writeContent("fixed");
		}
		closeTag(n);
	}

	public void visit( ArrayType n, Object arg ) throws CompilerException
	{
		openTag(n);
		n.type.accept(this, arg);
		for (int i = 0; i < n.arrayLevels; i++)
			emptyTag("Array");

		closeTag(n);
	}

	public void visit( FieldDeclaration n, Object arg ) throws CompilerException
	{
		openTag(n);

		printAnnotations(n.annotations, arg);

		printModifiers(n.modifiers);

		n.type.accept(this, arg);

		for (Iterator<VariableDeclarator> i = n.variables.iterator(); i.hasNext();)
		{
			VariableDeclarator var = i.next();
			var.accept(this, arg);
		}

		closeTag(n);
	}

	public void visit( VariableDeclarator n, Object arg ) throws CompilerException
	{
		openTag(n);

		// print the variable identifier
		openTag("id");
		writeContent(n.name);
		closeTag("id");
		// print the initialization
		if (n.init != null)
		{
			openTag("init");
			n.init.accept(this, arg);
			closeTag("init");
		}

		closeTag(n);
	}

	public void visit( ArrayInitializerExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		if (n.values != null)
		{
			openTag("values");
			for (Iterator<Expression> i = n.values.iterator(); i.hasNext();)
			{
				openTag("value");
				Expression expr = i.next();
				expr.accept(this, arg);
				closeTag("value");
			}
			closeTag("values");
		}

		closeTag(n);
	}

	public void visit( VoidType n, Object arg ) throws CompilerException
	{
		openTag(n);
		writeContent("void");
		closeTag(n);
	}

	public void visit( ArrayAccessExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("name");
		n.name.accept(this, arg);
		closeTag("name");

		openTag("index");
		n.index.accept(this, arg);
		closeTag("index");

		closeTag(n);
	}

	public void visit( ArrayCreationExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("type");
		n.type.accept(this, arg);
		closeTag("type");

		if (n.dimensions != null)
		{
			openTag("dimensions");
			for (Expression dim : n.dimensions)
			{
				openTag("array");
				dim.accept(this, arg);
				closeTag("array");
			}
			for (int i = 0; i < n.arrayLevels; i++)
			{
				emptyTag("array");
			}
			closeTag("dimensions");
		}
		else
		{
			openTag("dimensions");
			for (int i = 0; i < n.arrayLevels; i++)
			{
				emptyTag("array");
			}
			closeTag("dimensions");

			openTag("initializer");
			n.initializer.accept(this, arg);
			closeTag("initializer");
		}

		closeTag(n);
	}

	public void visit( AssignExpr n, Object arg ) throws CompilerException
	{
		String oper = "";
		switch (n.operator)
		{
			case ASSIGN:
				oper = "Assign";
				break;
			case ASN_BAND:
				oper = "AssignAnd";
				break;
			case ASN_BOR:
				oper = "AssignOr";
				break;
			case ASN_XOR:
				oper = "AssignXor";
				break;
			case ASN_ADD:
				oper = "AssignPlus";
				break;
			case ASN_SUB:
				oper = "AssignMinus";
				break;
			case ASN_REM:
				oper = "AssignRemainder";
				break;
			case ASN_DIV:
				oper = "AssignDivide";
				break;
			case ASN_MUL:
				oper = "AssignMultiply";
				break;
			case ASN_SHL:
				oper = "AssignShiftLeft";
				break;
			case ASN_SHR:
				oper = "AssignShiftRight";
				break;
		}

		openTag(oper + "Expr");

		openTag("destination");
		n.destination.accept(this, arg);
		closeTag("destination");

		openTag("source");
		n.source.accept(this, arg);
		closeTag("source");

		closeTag(oper + "Expr");
	}

	public void visit( BinaryExpr n, Object arg ) throws CompilerException
	{
		String oper = "";
		switch (n.operator)
		{
			case LOR:
				oper = "Or";
				break;
			case LAND:
				oper = "And";
				break;
			case BOR:
				oper = "BitwiseOr";
				break;
			case BAND:
				oper = "BitwiseAnd";
				break;
			case XOR:
				oper = "Xor";
				break;
			case EQ:
				oper = "Equals";
				break;
			case NE:
				oper = "NotEquals";
				break;
			case LT:
				oper = "Less";
				break;
			case GT:
				oper = "Greater";
				break;
			case LE:
				oper = "LessEquals";
				break;
			case GE:
				oper = "GreaterEquals";
				break;
			case SHL:
				oper = "ShiftLeft";
				break;
			case SHR:
				oper = "ShiftRight";
				break;
			case ADD:
				oper = "Plus";
				break;
			case SUB:
				oper = "Minus";
				break;
			case MUL:
				oper = "Times";
				break;
			case DIV:
				oper = "Divide";
				break;
			case REM:
				oper = "Remainder";
				break;
		}
		openTag(oper + "Expr");

		openTag("left");
		n.left.accept(this, arg);
		closeTag("left");

		openTag("right");
		n.right.accept(this, arg);
		closeTag("right");

		closeTag(oper + "Expr");
	}

	public void visit( CastExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("type");
		n.type.accept(this, arg);
		closeTag("type");

		openTag("expression");
		n.expression.accept(this, arg);
		closeTag("expression");

		closeTag(n);
	}

	public void visit( ClassExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("type");
		n.type.accept(this, arg);
		closeTag("type");

		closeTag(n);
	}

	public void visit( ConditionalExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("condition");
		n.condition.accept(this, arg);
		closeTag("condition");

		openTag("thenExpression");
		n.thenExpression.accept(this, arg);
		closeTag("thenExpression");

		openTag("elseExpression");
		n.elseExpression.accept(this, arg);
		closeTag("elseExpression");

		closeTag(n);
	}

	public void visit( EnclosedExpr n, Object arg ) throws CompilerException
	{
		openTag(n);
		n.inner.accept(this, arg);
		closeTag(n);
	}

	public void visit( FieldAccessExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("scope");
		n.scope.accept(this, arg);
		closeTag("scope");

		openTag("field");
		writeContent(n.field);
		closeTag("field");

		closeTag(n);
	}

	public void visit( InstanceOfExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("expression");
		n.expression.accept(this, arg);
		closeTag("expression");

		openTag("type");
		n.type.accept(this, arg);
		closeTag("type");

		closeTag(n);
	}

	public void visit( CharLiteralExpr n, Object arg ) throws CompilerException
	{
		writeContent("'");
		writeContent(n.value);
		writeContent("'");
	}

	public void visit( DoubleLiteralExpr n, Object arg ) throws CompilerException
	{
		writeContent(n.value);
	}

	public void visit( IntegerLiteralExpr n, Object arg ) throws CompilerException
	{
		writeContent(n.value);
	}

	public void visit( LongLiteralExpr n, Object arg ) throws CompilerException
	{
		writeContent(n.value);
	}

	public void visit( StringLiteralExpr n, Object arg ) throws CompilerException
	{
		writeContent("\"");
		writeContent(n.value);
		writeContent("\"");
	}

	public void visit( BooleanLiteralExpr n, Object arg ) throws CompilerException
	{
		writeContent(String.valueOf(n.value));
	}

	public void visit( NullLiteralExpr n, Object arg ) throws CompilerException
	{
		writeContent("null");
	}

	public void visit( ThisExpr n, Object arg ) throws CompilerException
	{

		if (n.expression != null)
		{
			openTag(n);
			n.expression.accept(this, arg);
			closeTag(n);
		}
		else
			emptyTag("n");

	}

	public void visit( SuperExpr n, Object arg ) throws CompilerException
	{
		// openTag(n);

		if (n.expression != null)
		{
			openTag(n);
			n.expression.accept(this, arg);
			closeTag(n);
		}
		else
			emptyTag("n");
	}

	public void visit( MethodCallExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		if (n.scope != null)
		{
			openTag("scope");
			n.scope.accept(this, false);
			closeTag("scope");
		}

		openTag("identifier");
		writeContent(n.name);
		closeTag("identifier");

		printArguments(n.arguments, arg);

		closeTag(n);
	}

	public void visit( ObjectCreationExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		if (n.scope != null)
		{
			openTag("scope");
			n.scope.accept(this, arg);
			closeTag("scope");
		}

		n.type.accept(this, arg);

		printArguments(n.arguments, arg);

		closeTag(n);
	}

	public void visit( UnaryExpr n, Object arg ) throws CompilerException
	{
		switch (n.operator)
		{
			case PLUS:
				writeContent("+");
				break;
			case MINUS:
				writeContent("-");
				break;
			case BNEG:
				writeContent("~");
				break;
			case LNEG:
				writeContent("!");
				break;
			case PRE_INCREMENT:
				writeContent("++");
				break;
			case PRE_DECREMENT:
				writeContent("--");
				break;
			default:
		}

		n.expression.accept(this, arg);

		switch (n.operator)
		{
			case POST_INCREMENT:
				writeContent("++");
				break;
			case POST_DECREMENT:
				writeContent("--");
				break;
			default:
		}
	}

	public void visit( ConstructorDeclaration n, Object arg ) throws CompilerException
	{
		openTag(n);

		printAnnotations(n.annotations, arg);

		if (n.modifiers != null)
		{
			printModifiers(n.modifiers);
		}

		openTag("name");
		writeContent(n.name);
		closeTag("name");

		if (n.parameters != null)
		{
			openTag("parameters");
			for (Iterator<Parameter> i = n.parameters.iterator(); i.hasNext();)
			{
				Parameter p = i.next();
				p.accept(this, arg);
			}
			closeTag("parameters");
		}

		if (n.block != null)
		{
			openTag("block");
			n.block.accept(this, arg);
			closeTag("block");
		}

		closeTag(n);
	}

	public void visit( MethodDeclaration n, Object arg ) throws CompilerException
	{
		openTag(n);

		printAnnotations(n.annotations, arg);

		printModifiers(n.modifiers);

		openTag("type");
		n.type.accept(this, arg);
		closeTag("type");

		openTag("name");
		writeContent(n.name);
		closeTag("name");

		openTag("parameters");
		if (n.parameters != null)
		{
			for (Iterator<Parameter> i = n.parameters.iterator(); i.hasNext();)
			{
				Parameter p = i.next();
				p.accept(this, arg);
			}
		}
		closeTag("parameters");

		if (n.body != null) n.body.accept(this, arg);

		closeTag(n);
	}

	public void visit( Parameter n, Object arg ) throws CompilerException
	{
		openTag(n);

		printModifiers(n.modifiers);

		openTag("type");
		n.type.accept(this, arg);
		closeTag("type");

		if (n.isVarArgs)
		{
			emptyTag("varArgs");
		}
		openTag("name");
		writeContent(n.name);
		closeTag("name");

		closeTag(n);
	}

	public void visit( ExplicitConstructorInvocationStmt n, Object arg ) throws CompilerException
	{
		if (n.isThis)
		{
			writeContent("this");
		}
		else
		{
			if (n.expression != null)
			{
				n.expression.accept(this, arg);
				writeContent(".");
			}
			writeContent("super");
		}
		printArguments(n.arguments, arg);
		writeContent(";");
	}

	public void visit( VariableDeclarationExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		// print the variable annotations
		printAnnotations(n.annotations, arg);
		// print the variable modifiers
		printModifiers(n.modifiers);
		// print the variable type
		openTag("type");
		n.type.accept(this, arg);
		closeTag("type");

		openTag("variables");
		for (Iterator<VariableDeclarator> i = n.variables.iterator(); i.hasNext();)
		{
			VariableDeclarator v = i.next();
			v.accept(this, arg);
		}
		closeTag("variables");

		closeTag(n);
	}

	public void visit( TypeDeclarationStmt n, Object arg ) throws CompilerException
	{
		n.typeDeclaration.accept(this, arg);
	}

	public void visit( AssertStmt n, Object arg ) throws CompilerException
	{
		openTag(n);
		openTag("condition");
		n.condition.accept(this, arg);
		closeTag("condition");
		if (n.message != null)
		{
			openTag("message");
			n.message.accept(this, arg);
			closeTag("message");
		}
		closeTag(n);
	}

	public void visit( BlockStmt n, Object arg ) throws CompilerException
	{
		openTag(n);

		if (n.statements != null)
		{
			for (Statement s : n.statements)
				s.accept(this, arg);
		}

		closeTag(n);
	}

	public void visit( EmptyStmt n, Object arg ) throws CompilerException
	{
	}

	public void visit( ExpressionStmt n, Object arg ) throws CompilerException
	{
		n.expression.accept(this, arg);
	}

	public void visit( SwitchStmt n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("expression");
		n.expression.accept(this, arg);
		closeTag("expression");

		if (n.cases != null)
		{
			for (SwitchEntryStmt e : n.cases)
				e.accept(this, arg);
		}
		closeTag(n);
	}

	public void visit( SwitchEntryStmt n, Object arg ) throws CompilerException
	{
		openTag("expression");
		if (n.constant != null)
		{
			n.constant.accept(this, arg);
		}
		else
		{
			writeContent("default");
		}
		closeTag("expression");

		if (n.statements != null)
		{
			openTag("statements");
			for (Statement s : n.statements)
				s.accept(this, arg);
			closeTag("statements");
		}

	}

	public void visit( BreakStmt n, Object arg ) throws CompilerException
	{
		emptyTag(n);
	}

	public void visit( ReturnStmt n, Object arg ) throws CompilerException
	{
		if (n.expression != null)
		{
			openTag(n);

			n.expression.accept(this, arg);

			closeTag(n);
		}
		else
			emptyTag(n);
	}

	public void visit( EnumDeclaration n, Object arg ) throws CompilerException
	{
		openTag(n);

		printJavadoc(n.doc, arg);

		printAnnotations(n.annotations, arg);

		printModifiers(n.modifiers);

		openTag("name");
		writeContent(n.name);
		closeTag("name");

		if (n.implementsList != null && n.implementsList.size() > 0)
		{
			openTag("implements");
			for (Iterator<ClassOrInterfaceType> i = n.implementsList.iterator(); i.hasNext();)
			{
				ClassOrInterfaceType c = i.next();
				c.accept(this, arg);
				if (i.hasNext())
				{
					writeContent(", ");
				}
			}
			closeTag("implements");
		}

		if (n.entries != null && n.entries.size() > 0)
		{
			openTag("entries");
			for (Iterator<EnumConstantDeclaration> i = n.entries.iterator(); i.hasNext();)
			{
				EnumConstantDeclaration e = i.next();
				e.accept(this, arg);
			}
			closeTag("entries");
		}
		if (n.getMembers() != null && n.getMembers().size() > 0)
		{
			printMembers(n.getMembers(), arg, "members");
		}

		closeTag(n);
	}

	public void visit( EnumConstantDeclaration n, Object arg ) throws CompilerException
	{
		printJavadoc(n.doc, arg);
		printAnnotations(n.annotations, arg);

		openTag("name");
		writeContent(n.name);
		closeTag("name");

		printArguments(n.arguments, arg);
	}

	public void visit( ModifierDeclaration n, Object arg ) throws CompilerException
	{
		printModifiers(n);
	}

	public void visit( IfStmt n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("condition");
		n.condition.accept(this, arg);
		closeTag("condition");

		openTag("thenStatement");
		n.thenStatement.accept(this, arg);
		closeTag("thenStatement");

		if (n.elseStatement != null)
		{
			openTag("elseStatement");
			n.elseStatement.accept(this, arg);
			closeTag("elseStatement");
		}

		closeTag(n);
	}

	public void visit( WhileStmt n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("getCondition");
		n.condition.accept(this, arg);
		closeTag("getCondition");

		n.block.accept(this, arg);

		closeTag(n);
	}

	public void visit( ContinueStmt n, Object arg ) throws CompilerException
	{
		emptyTag(n);
	}

	public void visit( DoWhileStmt n, Object arg ) throws CompilerException
	{
		openTag(n);

		n.body.accept(this, arg);

		openTag("condition");
		n.condition.accept(this, arg);
		closeTag("condition");

		closeTag(n);
	}

	public void visit( ForeachStmt n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("variable");
		n.variable.accept(this, arg);
		closeTag("variable");

		openTag("iterable");
		n.iterable.accept(this, arg);
		closeTag("iterable");

		openTag("block");
		n.block.accept(this, arg);
		closeTag("block");

		closeTag(n);
	}

	public void visit( ForStmt n, Object arg ) throws CompilerException
	{
		openTag(n);

		if (n.init != null)
		{
			openTag("getInit");
			for (Iterator<Expression> i = n.init.iterator(); i.hasNext();)
			{
				Expression e = i.next();
				e.accept(this, arg);
			}
			closeTag("getInit");
		}

		if (n.condition != null)
		{
			openTag("getCompare");
			n.condition.accept(this, arg);
			closeTag("getCompare");
		}

		if (n.update != null)
		{
			openTag("getUpdate");
			for (Iterator<Expression> i = n.update.iterator(); i.hasNext();)
			{
				Expression e = i.next();
				e.accept(this, arg);
				if (i.hasNext())
				{
					writeContent(", ");
				}
			}
			closeTag("getUpdate");
		}

		openTag("getBody");
		n.block.accept(this, arg);
		closeTag("getBody");

		closeTag(n);
	}

	public void visit( ThrowStmt n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("getExpr");
		n.expression.accept(this, arg);
		closeTag("getExpr");

		closeTag(n);
	}

	public void visit( SynchronizedStmt n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("expression");
		n.expression.accept(this, arg);
		closeTag("expression");

		openTag("block");
		n.block.accept(this, arg);
		closeTag("block");

		closeTag(n);
	}

	public void visit( TryStmt n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("getTryBlock");
		n.tryBlock.accept(this, arg);
		closeTag("getTryBlock");

		if (n.catchs != null)
		{
			openTag("getCatchs");
			for (CatchClause c : n.catchs)
				c.accept(this, arg);
			closeTag("getCatchs");
		}
		if (n.finallyBlock != null)
		{
			openTag("getFinallyBlock");
			n.finallyBlock.accept(this, arg);
			closeTag("getFinallyBlock");
		}

		closeTag(n);
	}

	public void visit( CatchClause n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("except");
		n.except.accept(this, arg);
		closeTag("except");

		openTag("catchBlock");
		n.catchBlock.accept(this, arg);
		closeTag("catchBlock");

		closeTag(n);
	}

	public void visit( AnnotationDeclaration n, Object arg ) throws CompilerException
	{
		openTag(n);

		printJavadoc(n.doc, arg);
		printAnnotations(n.annotations, arg);
		printModifiers(n.modifiers);

		openTag("name");
		writeContent(n.name);
		closeTag("name");

		printMembers(n.getMembers(), arg, "getMembers");

		closeTag(n);
	}

	public void visit( AnnotationMemberDeclaration n, Object arg ) throws CompilerException
	{
		openTag(n);

		printAnnotations(n.annotations, arg);

		printModifiers(n.modifiers);

		openTag("getType");
		n.type.accept(this, arg);
		closeTag("getType");

		openTag("name");
		writeContent(n.name);
		closeTag("name");

		if (n.defaultValue != null)
		{
			openTag("getDefaultValue");
			n.defaultValue.accept(this, arg);
			closeTag("getDefaultValue");
		}

		closeTag(n);
	}

	public void visit( MarkerAnnotationExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("name");
		n.name.accept(this, arg);
		closeTag("name");

		closeTag(n);
	}

	public void visit( SingleMemberAnnotationExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("name");
		n.name.accept(this, arg);
		closeTag("name");

		openTag("memberValue");
		n.memberValue.accept(this, arg);
		closeTag("memberValue");

		closeTag(n);
	}

	public void visit( NormalAnnotationExpr n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("name");
		n.name.accept(this, arg);
		closeTag("name");

		if (n.pairs != null)
		{
			openTag("pairs");
			for (Iterator<MemberValuePair> i = n.pairs.iterator(); i.hasNext();)
			{
				MemberValuePair m = i.next();
				m.accept(this, arg);
			}
			closeTag("pairs");
		}

		closeTag(n);
	}

	public void visit( MemberValuePair n, Object arg ) throws CompilerException
	{
		openTag(n);

		openTag("name");
		writeContent(n.name);
		closeTag("name");

		openTag("value");
		n.value.accept(this, arg);
		closeTag("value");

		closeTag(n);
	}

	public void visit( LineComment n, Object arg ) throws CompilerException
	{
		emptyTag(n);
	}

	public void visit( BlockComment n, Object arg ) throws CompilerException
	{
		emptyTag(n);
	}

	@Override
	public void visit( EmptyTypeDeclaration n, Object arg ) throws CompilerException
	{
		emptyTag(n);
	}

}

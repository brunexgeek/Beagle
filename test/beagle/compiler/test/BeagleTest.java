package beagle.compiler.test;

import java.io.FileInputStream;
import java.io.FileWriter;
import java.io.IOException;

import beagle.compiler.CompilerException;
import beagle.compiler.ast.visitor.ProceduralVisitor;
import beagle.compiler.ast.visitor.XmlDumpVisitor;
import beagle.compiler.parser.BeagleParser;
import beagle.compiler.parser.BeagleParserConstants;
import beagle.compiler.parser.ParseException;
import beagle.compiler.parser.Token;
import beagle.compiler.pst.CompilationGroup;
import beagle.compiler.pst.visitor.CCodeGenerator;


public class BeagleTest
{
	
	private static void printTokens( BeagleParser parser )
	{
		Token token = null;
		while (true)
		{
			token = parser.getNextToken();
			if (token == null || token.kind == BeagleParserConstants.EOF) break;
			System.out.print(token.image);
			System.out.print(" ");
			if (token.kind == BeagleParserConstants.NEWLINE)
				System.out.print("\n");
		}
	}

	private static void printXmlTree( BeagleParser parser ) throws CompilerException, ParseException
	{
		XmlDumpVisitor vis = new XmlDumpVisitor();
		parser.CompilationUnit().accept(vis, null);
		System.out.println(vis.getSource());
	}

	private static void procedurizeTree( BeagleParser parser ) throws CompilerException, ParseException, IOException
	{
		ProceduralVisitor proc = new ProceduralVisitor();
		parser.CompilationUnit().accept(proc, null);
		CompilationGroup generated = proc.getCompilationGroup();
		System.out.println( "Generated " + generated.definitions.size() + " type definitions");
		CCodeGenerator vis = new CCodeGenerator();
		vis.visit(generated, null);
		System.out.println( vis );
		
		FileWriter wt = new FileWriter("output.c");
		wt.append(vis.toString());
		wt.close();
	}
	
	public static void main( String[] args ) throws ParseException, CompilerException, IOException
	{
		String fileName;
		if (args.length == 0)
			fileName = "test/beagle/compiler/test/sample.bgl"; 
		else
			fileName = args[0];
		FileInputStream in = new FileInputStream(fileName);
		BeagleParser parser = new BeagleParser(in);
		printXmlTree(parser);
		in.close();
		
		in = new FileInputStream(fileName);
		parser = new BeagleParser(in);
		procedurizeTree(parser);
		in.close();
	}

}

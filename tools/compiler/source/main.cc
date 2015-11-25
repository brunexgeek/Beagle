#include <iostream>
#include <fstream>
#include <beagle-parser/Parser.hh>
#include <beagle-parser/Node.hh>
#include <beagle-parser/CodeGenerator.hh>


int main( int argc, char **argv )
{
	std::istream *in = &std::cin;

	if (argc >= 2)
	{
		in = new std::ifstream(argv[1]);
	}

	beagle::Parser parser(in, &std::cout, argv[1]);
	if (argc == 2)
	{
		beagle::Node *root = parser.parse();
		if (root == NULL)
		{
			std::cout << "Where's the root?" << std::endl;
			return 1;
		}

		root->print(std::cout, &parser);

		beagle::CodeGenerator codegen(*root);
		codegen.visit();
	}
	else
	{
		parser.tokens();
	}

	if (in != std::cin)
	{
		dynamic_cast<std::ifstream*>(in)->close();
		delete in;
	}
}

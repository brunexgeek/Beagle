#include <iostream>
#include <fstream>
#include <beagle-parser/Parser.hh>



int main( int argc, char **argv )
{
	std::istream *in = &std::cin;

	if (argc >= 2)
	{
		in = new std::ifstream(argv[1]);
	}

	beagle::Parser parser(in, &std::cout);
	if (argc == 2)
		parser.parse();
	else
		parser.tokens();

	if (in != std::cin)
	{
		dynamic_cast<std::ifstream*>(in)->close();
		delete in;
	}
}

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <getopt.h>
#include <beagle-loader/ModuleLoader.hh>


using namespace std;
using namespace beagle::loader;


void main_usage()
{
    std::cerr << "Usage: beagle-dump FILE1 [ FILE2 ... ] " << std::endl  << std::endl;
    exit(1);
}


int main( int argc, char **argv )
{
    ModuleLoader loader;

	if (argc == 1)
        main_usage();

    for (int i = 1; i < argc; ++i)
    {
        loader.load(argv[i]);
    }

	loader.print();

    return 0;
}

#ifndef BEAGLE_PARSER_HH
#define BEAGLE_PARSER_HH


#include <iostream>


namespace beagle
{

	class Parser
	{
		public:
			Parser(
				std::istream* in = NULL,
				std::ostream* out = NULL);

			virtual ~Parser();

			static const char *name( int tok );

			int parse( );

            void tokens();

		private:
			std::istream *in;
			std::ostream *out;
			void* scanner;
			void* buffer;

			bool readFile( );
	};

}; // namespace beagle



#endif // BEAGLE_PARSER_HH

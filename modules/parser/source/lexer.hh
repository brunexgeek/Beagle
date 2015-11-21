#ifndef EXAMPLE_SCANNER_H
#define EXAMPLE_SCANNER_H


#include "parser.hh"


namespace beagle
{

	class Scanner
	{
		public:
			Scanner(
				std::istream* in = NULL,
				std::ostream* out = NULL);

			virtual ~Scanner();

			void set_debug(bool b);

			int next( YYSTYPE *value );

			const char name( int tok ) const;

			const char *getText( ) const;

		private:
			std::istream *in;
			std::ostream *out;
			void* scanner;
			YY_BUFFER_STATE buffer;

			bool readFile( );
	};


} // namespace beagle


#endif // EXAMPLE_SCANNER_H

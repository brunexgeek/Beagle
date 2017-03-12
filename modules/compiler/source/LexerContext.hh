#ifndef LEXERCONTENT_HH
#define LEXERCONTENT_HH


struct LexerContext
{

    int currentIndentSize;

    int stepSize;

    bool isEmptyLine;

    LexerContext() : currentIndentSize(0), stepSize(0), isEmptyLine(true) {}

};



#endif // LEXERCONTENT_HH
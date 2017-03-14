#ifndef LEXERCONTENT_HH
#define LEXERCONTENT_HH


#include <list>


struct LexerContext
{

    int currentIndentSize;

    int stepSize;

    bool isEmptyLine;

    std::list<Token*> tokens;

    LexerContext() : currentIndentSize(0), stepSize(0), isEmptyLine(true)
    {

    }

    ~LexerContext()
    {
        auto it = tokens.begin();
        for (; it != tokens.end(); ++it)
            delete *it;
    }

};



#endif // LEXERCONTENT_HH
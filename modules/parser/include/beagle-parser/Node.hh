#ifndef BEAGLE_NODE_HH
#define BEAGLE_NODE_HH


#include <vector>
#include <string>
#include <beagle-parser/Parser.hh>
#include <iostream>


namespace beagle {


class Node
{
    public:
        Node(
            int type,
            const char *text);
        /*Node(
            int type,
            const char *value,
            Node *parent,
            int childNo,
            ... );*/

        virtual ~Node();

        Node *getChild( int index ) const;

        Node *setChild( int index, Node *value );

        Node *addChild( Node *value );

        const char *getText() const;

        int getCounter() const;

        void setCounter( int value );

        void print( std::ostream &out, Parser *parser = NULL, int level = 0);

    private:
        std::vector<Node*> children;
        std::string text;
        int type;
        int counter;
};


}

#endif // BEAGLE_NODE_HH

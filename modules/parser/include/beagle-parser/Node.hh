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

        Node *getChild( int index ) const
        {
            return children[index];
        }

        Node *setChild( int index, Node *value )
        {
            if (index < 0 || index > children.size()) return NULL;

            return children[index] = value;
        }

        Node *addChild( Node *value )
        {
            children.push_back(value);
            return value;
        }

        const char *getText() const
        {
            return text.c_str();
        }

        int getCounter() const
        {
            return counter;
        }

        void setCounter( int value )
        {
            counter = value;
        }

        int getType()
        {
            return type;
        }

        void setType( int type )
        {
            this->type = type;
        }

        void print( std::ostream &out, Parser *parser = NULL, int level = 0, bool recursive = true);

    private:
        std::vector<Node*> children;
        std::string text;
        int type;
        int counter;
};


}

#endif // BEAGLE_NODE_HH

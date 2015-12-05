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

        Node(
            const Node &obj );

        virtual ~Node();

        Node &getChild( int index ) const
        {
            return *children[index];
        }

        void setChild( int index, Node &value )
        {
            if (index >= 0 && index < children.size())
				children[index] = &value;
        }

        void removeChild( int index = -1 )
        {
            if (index == -1)
                children.clear();
            else
            if (index >= 0 && index < children.size())
                children.erase(children.begin() + index);
        }

        void addChild( Node &value )
        {
            children.push_back(&value);
        }

		int getChildCount()
		{
			return children.size();
		}

        const std::string &getText() const
        {
            return text;
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

		Node &operator[]( int index )
		{
			return *children[index];
		}

        void print( std::ostream &out, Parser *parser = NULL, int level = 0, bool recursive = true);

		operator std::string()
		{
			return getText();
		}

    private:
        std::vector<Node*> children;
        std::string text;
        int type;
        int counter;
};


}

#endif // BEAGLE_NODE_HH

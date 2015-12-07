#ifndef BEAGLE_NODE_HH
#define BEAGLE_NODE_HH


#include <vector>
#include <string>
#include <iostream>


namespace beagle {
namespace compiler {


class Node
{
    public:
        std::string text;
        int type;
        int counter;

        Node(
            int type,
            const char *text = NULL);
        /*Node(
            int type,
            const char *value,
            Node *parent,
            int childNo,
            ... );*/

        Node(
            const Node &obj );

        virtual ~Node();

        void setChild( int index, Node &value )
        {
            if (index >= 0 && index < (int)children.size())
				children[index] = &value;
        }

        void removeChild( int index = -1 )
        {
            if (index == -1)
                children.clear();
            else
            if (index >= 0 && index < (int)children.size())
                children.erase(children.begin() + index);
        }

        void addChild( Node &value )
        {
            children.push_back(&value);
        }

		int getChildCount() const
		{
			return (int) children.size();
		}

		Node &operator[]( int index )
		{
			return *children[index];
		}

        const Node &operator[]( int index ) const
		{
			return *children[index];
		}

        void print(
            std::ostream &out,
            const char *(getTokenName)(int) = NULL,
            int level = 0,
            bool recursive = true );

		operator std::string()
		{
			return text;
		}

    private:
        std::vector<Node*> children;
};


} // namespace compiler
} // namespace beagle


#endif // BEAGLE_NODE_HH

#ifndef BEAGLE_NODE_HH
#define BEAGLE_NODE_HH


#include <vector>
#include <string>


namespace beagle {


class Node
{
    public:
        Node(
            int type,
            const std::string &value,
            Node *parent = NULL );
        Node(
            int type,
            const std::string &value,
            Node *parent,
            int childNo,
            ... );

        virtual ~Node();

        Node *getChild( int index );

        Node *setChild( int index, Node *value );

        Node *getParent();

    private:
        std::vector<Node*> children;
        Node *parent;
        std::string value;
        int type;
};


}

#endif // BEAGLE_NODE_HH

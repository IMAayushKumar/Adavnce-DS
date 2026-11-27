// bfs
#include <iostream>
#include <queue>
using namespace std;
template <typename type>
class Tree
{
    struct Node
    {
        type data;
        Node *left, *right;

        Node(type value)
        {
            data = value;
            left = right = nullptr;
        }
    };

public:
    Node *Root;
    Tree()
    {

        Root = new Node('F');
        Root->left = new Node('B');
        Root->right = new Node('G');

        Root->left->left = new Node('A');
        Root->left->right = new Node('D');

        Root->left->right->left = new Node('C');
        Root->left->right->right = new Node('E');

        Root->right->right = new Node('I');
        Root->right->right->left = new Node('H');
    }
    void BFS()
    {
        if (Root == nullptr)
            return;
        queue<Node *> Q;
        Q.push(Root);
        while (!Q.empty())
        {
            Node *ptr = Q.front();
            Q.pop();
            cout << ptr->data << " ";
            if (ptr->left != nullptr)
                Q.push(ptr->left);
            if (ptr->right != nullptr)
                Q.push(ptr->right);
        }
    }
};

int main()
{
    Tree<char> T;
    cout << "BFS traversal";
    T.BFS();

    return 0;
}
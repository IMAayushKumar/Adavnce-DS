// write a program  to find BFS(Breadth first search) and DFS(depth first Search)
#include <bits/stdc++.h>
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
    int countOneChild(Node *ptr)
    {
        if (ptr == nullptr)
            return 0;

        if ((ptr->left == nullptr && ptr->right != nullptr) || (ptr->left != nullptr && ptr->right == nullptr))
        {
            return 1 + countOneChild(ptr->left) + countOneChild(ptr->right);
        }
        return countOneChild(ptr->left) + countOneChild(ptr->right);
    }
};

int main()
{
    Tree<char> T;
    cout << "Nodes having one child :" << T.countOneChild(T.Root);

    return 0;
}
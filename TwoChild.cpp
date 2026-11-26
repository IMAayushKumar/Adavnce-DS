
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
    int countTwoChild(Node *ptr)
    {
        if (ptr == nullptr)
            return 0;

        int count = countTwoChild(ptr->left) + countTwoChild(ptr->right);

        if (ptr->left != nullptr && ptr->right != nullptr)
            count++;

        return count;
    }
};

int main()
{
    Tree<char> T;
    cout << "Nodes having one child :" << T.countTwoChild(T.Root);

    return 0;
}
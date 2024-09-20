#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data : ";
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left child of " << data << " : ";
    root->left = buildTree(root->left);

    cout << "Enter data for right child of " << data << " : ";
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    node *root = NULL;
    buildTree(root);

    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // Constructor
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Create a binary tree
node *buildTree(node *root)
{
    cout << "Enter data : ";
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left child of " << data << " : " << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for right child of " << data << " : " << endl;
    root->right = buildTree(root->right);

    return root;
}

void inorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << endl;
    cout << "In Order Traversal : ";
    inorderTraversal(root);

    cout << endl;
    cout << "Pre Order Traversal : ";
    preorderTraversal(root);

    cout << endl;
    cout << "Post Order Traversal : ";
    postorderTraversal(root);

    return 0;
}
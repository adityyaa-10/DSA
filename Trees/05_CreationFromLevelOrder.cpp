#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // Constructor:
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Building binary tree in level order
void buildFromLevelOrder(node *&root)
{
    queue<node *> q;
    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter data for left child of " << temp->data << " : ";
        int leftData;
        cin >> leftData;
        cout << endl;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter data for right child of " << temp->data << " : ";
        int rightData;
        cin >> rightData;
        cout << endl;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

// Traversing the tree in level order
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    buildFromLevelOrder(root);

    levelOrderTraversal(root);

    return 0;
}
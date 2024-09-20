#include <iostream>
#include <queue>
#include <stack>
#include <vector>
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

void reverseLevelOrderTraversal(node *root)
{
    queue<node *> q;
    stack<vector<int>> st;

    q.push(root);
    q.push(NULL);

    vector<int> currentLevel;

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            st.push(currentLevel);
            currentLevel.clear();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            currentLevel.push_back(temp->data);
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

    while (!st.empty())
    {
        vector<int> eachLevel = st.top();
        st.pop();

        for (int i = 0; i < eachLevel.size(); i++)
        {
            cout << eachLevel[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Printing Reverse Order Traversal" << endl;
    reverseLevelOrderTraversal(root);
    return 0;
}
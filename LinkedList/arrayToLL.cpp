#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *arrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *iterator = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        iterator->next = temp;
        iterator = iterator->next;
    }
    return head;
}

void printList(Node *head)
{
    Node *iterator = head;
    while (iterator != NULL)
    {
        cout << iterator->data << " ";
        iterator = iterator->next;
    }
    cout << endl;
}

int lengthOfLL(Node *head)
{
    int count = 0;
    Node *iterator = head;
    while (iterator != NULL)
    {
        count++;
        iterator = iterator->next;
    }
    return count;
}

bool checkIfPresent(Node *head, int target)
{
    Node *iterator = head;
    while (iterator != NULL)
    {
        if (iterator->data == target)
            return true;
        iterator = iterator->next;
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 5, 9, 6, 3};
    Node *head = arrToLL(arr);

    // cout<<head->data<<endl;
    printList(head);

    int count = lengthOfLL(head);
    cout << "Length of Linked List is --> " << count << endl;

    bool search = checkIfPresent(head, 231);
    if (search)
    {
        cout << "Value is present" << endl;
    }
    else
        cout << "Value is not present" << endl;
}
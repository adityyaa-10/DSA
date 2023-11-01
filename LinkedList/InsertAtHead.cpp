#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Creating a constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Creating new node
    Node *node1 = new Node(10);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // Creating a head pointer
    Node *head = node1;

    print(head);

    // Inserting new node
    insertAtHead(head, 15);

    print(head);
    return 0;
}
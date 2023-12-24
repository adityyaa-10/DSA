#include <iostream>
using namespace std;

// Creating a link list node;
class Node
{
public:
    int data;
    Node *next; // A pointer of type Node with name next;

    // Creating constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtMiddle(Node *&head, Node *&tail, int position, int data)
{
    // If first position
    if (position == 1)
    {
        insertAtHead(head, data);
    }
    Node *temp = head; // Temporary node to iterate till position
    int count = 1;

    // Iterating till position-1
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *newNode = new Node(data);

    // Checking if the position is the last node itself
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    else // Insert at middle;
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void printList(Node *&head)
{
    Node *iterator = head;

    while (iterator != NULL)
    {
        cout << iterator->data << " ";
        iterator = iterator->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 20);
    insertAtTail(tail, 30);
    insertAtMiddle(head, tail, 2, 40);
    printList(head);

    return 0;
}
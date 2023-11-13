#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

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
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head; // Creating a temporary node for traversal till position -1
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *newNode = new Node(data);
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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
    insertAtTail(tail, 50);
    insertAtMiddle(head, tail, 2, 30);
    insertAtMiddle(head, tail, 3, 40);
    insertAtMiddle(head, tail, 6, 60);

    printList(head);
}

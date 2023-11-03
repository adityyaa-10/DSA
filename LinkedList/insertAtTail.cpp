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

void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void printList(Node *&head)
{
    Node *iterator = head;
    cout << endl;
    while (iterator != NULL)
    {
        cout << iterator->data << " ";
        iterator = iterator->next;
    }
    cout << endl;
    cout << endl;
}

int main()
{
    Node *firstNode = new Node(10);
    Node *head = firstNode;
    Node *tail = firstNode;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);

    printList(head);
    return 0;
}
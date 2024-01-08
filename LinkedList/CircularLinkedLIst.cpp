#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory freed for value --> " << value << endl;
    }
};

// Insertion in Circular Linked List by taking a reference element

void insertNode(Node *&tail, int element, int data)
{

    // For Empty List
    if (tail == NULL)
    {
        Node *newNode = new Node(data); // Creating a new node
        tail = newNode;
        newNode->next = newNode; // Making the onlynode points to itself
    }
    else
    {
        // For non empty list
        // Assuming that the reference element is present in the list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *newNode = new Node(data);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void printList(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 0, 5);
    insertNode(tail, 5, 6);
    printList(tail);
}
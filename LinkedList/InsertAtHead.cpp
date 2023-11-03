#include <iostream>
using namespace std;

class LinkedListNode
{
public:
    int data;
    LinkedListNode *next;

    // Create constructor
    LinkedListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(LinkedListNode *&head, int d)
{
    LinkedListNode *temp = new LinkedListNode(d);
    temp->next = head;
    head = temp;
}

void print(LinkedListNode *&head)
{
    LinkedListNode *iterator = head;

    while (iterator != NULL)
    {
        cout << iterator->data << " ";
        iterator = iterator->next;
    }
    cout << endl;
}

int main()
{
    LinkedListNode *node1 = new LinkedListNode(10);
    LinkedListNode *head = node1;

    insertAtHead(head, 20);
    insertAtHead(head, 30);

    print(head);

    return 0;
}
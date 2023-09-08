#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int *ptr = &num; // Initialising a pointer

    cout << "Address --> " << ptr << endl; // Address of num variable
    cout << "Value --> " << *ptr << endl;  // Value present at the address of num i.e 5

    int d = 9;

    int *p2 = 0; // Another way of initialising a pointer
    p2 = &d;

    cout << "Address --> " << p2 << endl;
    cout << "Value --> " << *p2 << endl;

    cout << "Size of Integer is --> " << sizeof(num) << endl;
    cout << "Size of Integer Pointer is --> " << sizeof(ptr) << endl;
    cout << "Size of Integer Pointer is --> " << sizeof(p2) << endl;

    // int *newPtr;  --> Assigning a garbage value to a pointer is
    // a bad practice because it might assign some unwanted memory location to it;

    // int *p1 = 0;         // Null pointer declaration
    // cout << *p1 << endl; // Segmentaion fault is returned because 0 address location is not present inside memory;

    // Copying a pointer

    int *p3 = p2;

    cout << p3 << " = " << p2 << endl;
    cout << *p3 << " = " << *p2 << endl;
}
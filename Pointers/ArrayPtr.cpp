#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 5, 7};

    cout << "Size of array --> " << sizeof(arr) << endl; // 40
    cout << "Size of &arr --> " << sizeof(&arr) << endl; // 8
    cout << "Size of *arr --> " << sizeof(*arr) << endl; // 4

    int *ptr = &arr[0];

    cout << "Size of *ptr --> " << sizeof(*ptr) << endl; // 4
    cout << "Size of &ptr --> " << sizeof(&ptr) << endl; // 8

    cout << "Starting address of arr --> " << arr << endl;
    cout << "Starting address 2 of arr --> " << &arr[0] << endl;

    cout << "*arr --> " << *arr << endl; // 2
    cout << "&arr --> " << &arr << endl;

    cout << "arr[2] --> " << arr[2] << endl; // 7
    cout << "arr[2] == *(arr + 2) --> " << *(arr + 2) << endl; // 7
}
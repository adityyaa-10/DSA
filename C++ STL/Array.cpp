#include <array>
#include <iostream>

using namespace std;
int main()
{
    int basic[3] = {1, 2, 3}; // General method of initialising an Array

    array<int, 4> stlArray = {1, 2, 3, 4}; // Initialising an array of int type using C++ STL Library

    int size = stlArray.size(); // To extract the size of array

    cout << "The size of stlArray is : " << size << endl;

    // Traversing between the elements of stlArray
    for (int i = 0; i < size; i++)
    {
        cout << stlArray[i] << endl;
    }

    // Referring to a particular element based on the index
    cout << "The element at second index is : " << stlArray.at(2) << endl; // at() is inbuilt in C++ STL Library.

    // To check whether an array is empty or not
    int isEmpty = stlArray.empty(); // empty() function returns a boolean value {True or False}

    if (isEmpty == 1)
    {
        cout << "The stlArray is empty" << endl;
    }
    else
    {
        cout << "The stlArray is not empty" << endl;
    }

    // Accessing first and last element of an stlArray using inbuilt functions;
    cout << "The first element of the stlArray is : " << stlArray.front() << endl;
    cout << "The last element of the stlArray is : " << stlArray.back() << endl;
}
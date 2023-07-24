#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity of Vector v : " << v.capacity() << endl;
    // Output -> 0
    v.push_back(1);
    cout << "Capacity of Vector v : " << v.capacity() << endl;
    // Output -> 1
    v.push_back(2);
    cout << "Capacity of Vector v : " << v.capacity() << endl;
    // Output -> 2
    v.push_back(3);
    cout << "Capacity of Vector v : " << v.capacity() << endl;
    cout << "Size of vector v : " << v.size() << endl; // size() fn tells the no of elements present in the vector;
    // Output -> 4

    // The capacity of a vector is doubled everytime the size overflows
    // Vector is also known as a dynamic array so just like array, same inbuilt functions can be applied on vectors as well;

    cout << "Element at second index in vector v : " << v.at(2) << endl; // To access an element based on it's index;

    // Accessing first and last element of a vector;

    cout << "First element in vector v : " << v.front() << endl;
    cout << "Last element in vector v : " << v.back() << endl;

    // Popping in vectors;

    cout << "Vector before pop : ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity of v before pop : " << v.capacity() << endl;
    cout << "Size of v before pop : " << v.size() << endl;

    v.pop_back();
    cout << "Vector After pop : ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity of v after pop : " << v.capacity() << endl;
    cout << "Size of v after pop : " << v.size() << endl;

    // After pop_back() operation size is reduced by one but the capacity of vector remains same;

    // Initialising a vector
    vector<int> a(5, 1); // Vector of capacity 5, each element initialised with 1;

    cout << "Print Vector a => ";
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity of a  : " << a.capacity() << endl;
    cout << "Size of a  : " << a.size() << endl;

    // Copy one vector into another

    vector<int> last(a);
    cout << "Print last vector => ";
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity of last : " << a.capacity() << endl;
    cout << "Size of last : " << a.size() << endl;
}
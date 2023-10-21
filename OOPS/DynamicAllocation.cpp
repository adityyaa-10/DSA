#include <iostream>
using namespace std;
#include <bits/stdc++.h>

class student
{
public:
    int roll;
    string name;
};

int main()
{
    student *adi = new student; // Dynamically allocating memory for a new student;
    // adi.roll = 17; --> This returns an error because adi is not a student object, instead a pointer that contains an address;

    // (*adi).roll = 17; // This is tbhe correct way to allocate value to a pointer entity.

    adi->roll = 17;
    adi->name = "Aditya"; // Syntax for accessing attribute using arrow operator;

    cout << "Name of student --> " << adi->name << endl;
    cout << "Roll Number of student --> " << adi->roll << endl;

    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class student
{
private:
    int marks;

public:
    student(int marks)
    {
        this->marks = marks;
        cout << "Marks = " << this->marks << endl;
    }
};

int main()
{
    cout << "Program Begin" << endl;

    // student adi;              // Statically Allocating object
    // student *x = new student; // Dynamically Allocating object

    student adi(100); // Passing marks as an argument
    // Line 18 & 19 will throw error saying no default constructor is present for student
    cout << "Program ends" << endl;
    return 0;
}
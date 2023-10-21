#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class student
{
public:
    student()
    {
        cout << "Student Constructor Created" << endl;
    }
};

int main()
{
    cout << "Program Begin" << endl;
    student adi;              // Statically Allocating object
    student *x = new student; // Dynamically Allocating object
    cout << "Program ends" << endl;
    return 0;
}
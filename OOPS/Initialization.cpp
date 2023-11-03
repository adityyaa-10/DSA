#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class student
{
public:
    int roll;
    string name;

    student(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }
};

int main()
{
    student s1(1, "Aditya");
    student s2(2, "Pandey");

    cout << s1.roll << " " << s1.name << endl;
    cout << s2.roll << " " << s2.name << endl;
    return 0;
}
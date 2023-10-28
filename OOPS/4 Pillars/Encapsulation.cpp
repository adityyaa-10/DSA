#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    student Adi;
    int age = Adi.getAge(); // Some garbage value;
}
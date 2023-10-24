#include <cstring>
#include <iostream>
using namespace std;

class student
{
public:
    int marks;

    // Default Constructor
    student()
    {
        cout << "Default Constructor called" << endl;
    }

    // Copy Constructor
    student(student &s)
    {
        cout << "Copy Constructor called" << endl;
        this->marks = s.marks;
    }
};

int main()
{
    student adi;
    adi.marks = 100;

    student newStudent = adi; // Copy Constructor called

    cout << "Marks of New student = " << newStudent.marks << endl;
}
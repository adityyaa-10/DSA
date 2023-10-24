#include <cstring>
#include <iostream>
using namespace std;

class student
{
public:
    char *name;
    int marks;

    // Default Constructor
    student()
    {
        cout << "Default Constructor called" << endl;
    }

    // Shalllow Copy Constructor
    student(student &s)
    {
        cout << "Shallow Copy Constructor called" << endl;
        this->name = s.name;
        this->marks = s.marks;
    }

    void print()
    {
        cout << "Name = " << this->name << endl;
        cout << "Marks = " << this->marks << endl;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    student x;
    char name[7] = "Aditya";
    x.setName(name);
    x.marks = 100;

    cout << "Student x" << endl;
    x.print();
    cout << endl;

    student y = x; // Shallow Copy Constructor called
    cout << "Student y" << endl;
    y.print();
    cout << endl;

    x.name[0] = 'B'; // Updating name of x
    cout << "Student x after updating name" << endl;
    cout << "Student x" << endl;
    x.print();
    cout << endl;

    cout << "Student y after updating name of x" << endl;
    cout << "Student y" << endl;
    y.print();
    cout << endl;
}
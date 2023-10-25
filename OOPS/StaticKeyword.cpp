#include <iostream>
using namespace std;

class SomeClass
{
public:
    static int StaticVar;
};

int SomeClass::StaticVar = 10;

int main()
{
    SomeClass obj1;
    SomeClass obj2;

    cout << obj1.StaticVar << endl; // 10
    cout << obj2.StaticVar << endl; // 10

    obj1.StaticVar = 20;

    // Values for both of them changed because StaticVar is a static variable
    // A static variable is not a part of the object, it is a part of the class

    cout << obj1.StaticVar << endl; // 20
    cout << obj2.StaticVar << endl; // 20

    cout << SomeClass::StaticVar << endl; // 20

    return 0;
}
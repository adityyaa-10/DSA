#include <iostream>
using namespace std;

class myClass
{
public:
    int publicVar; // Accessible from anywhere
    void publicMethod()
    {
        cout << "This is a public Method" << endl;
    }

private:
    int privateVar; // Accessible within this class only
    void privateMethod()
    {
        cout << "This is a private Method" << endl;
    }

protected:
    int protectedVar; // Accessible within this class and it's subclass;
    void protectedMethod()
    {
        cout << "This is a protected Method" << endl;
    }
};

int main()
{
    myClass obj;

    obj.publicVar = 10; // Accessing public member
    obj.publicMethod();
    cout << obj.publicVar << endl;

    // Private members are not accessible from outside the class
    // obj.privateVar = 20; // This will result in a compilation error
    // obj.privateMethod(); // This will result in a compilation error

    // Protected members are not accessible from outside the class
    // obj.protectedVar = 30; // This will result in a compilation error
    // obj.protectedMethod(); // This will result in a compilation error
}
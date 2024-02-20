#include <iostream>
#include <string>

using namespace std;

class StringConcatenator
{
private:
    string str;

public:
    // Default constructor
    StringConcatenator() : StringConcatenator("") {}

    // Parameterized constructor with default value
    StringConcatenator(const string &s) : str(s) {}

    void display()
    {
        cout << "String: " << str << endl;
    }

    // Friend function to overload the + operator
    friend StringConcatenator operator+(const StringConcatenator &s1, const StringConcatenator &s2);
};

// Overloading the + operator using a friend function
StringConcatenator operator+(const StringConcatenator &s1, const StringConcatenator &s2)
{
    return StringConcatenator(s1.str + s2.str);
}

int main()
{
    StringConcatenator s1("Hello, ");
    StringConcatenator s2("world!");

    StringConcatenator s3 = s1 + s2; // Using overloaded +

    s3.display();

    return 0;
}

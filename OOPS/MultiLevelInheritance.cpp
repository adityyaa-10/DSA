// Program to show multi-level inheritance
#include <iostream>
using namespace std;

class A
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
};

class B : public A
{
public:
    int sub(int a, int b)
    {
        return a - b;
    }
};

class C : public B
{
public:
    int mul(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    C obj;
    cout << obj.sum(5, 10) << endl;
    cout << obj.sub(10, 5) << endl;
    cout << obj.mul(5, 10) << endl;
    return 0;
}
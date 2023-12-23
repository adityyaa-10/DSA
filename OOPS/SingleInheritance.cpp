// Program to show single inheritance

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

int main()
{
    B obj;
    cout << obj.sum(5, 10) << endl;
    cout << obj.sub(10, 5) << endl;
    return 0;
}
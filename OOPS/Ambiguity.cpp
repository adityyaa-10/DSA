#include <iostream>
using namespace std;

class A
{
public:
    int sum()
    {
        return 10;
    }
};

class B
{
public:
    int sum()
    {
        return 20;
    }
};

class C : public A, public B
{
public:
    // cout << sum() << endl;
    int result = B::sum();
    // cout << result << endl;
};

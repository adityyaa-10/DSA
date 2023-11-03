#include <iostream>
using namespace std;

class Box
{
private:
    int length;

public:
    Box() : length(0) {} // Constructor to initialize length

    friend int printLength(Box b);
};

int printLength(Box b)
{
    b.length += 10;
    return b.length;
}

int main()
{
    Box b;
    cout << printLength(b) << endl;
    return 0;
}

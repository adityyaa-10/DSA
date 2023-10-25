#include <iostream>
using namespace std;

class MathUtility
{
public:
    // Declaring a static member function
    static int add(int a, int b)
    {
        return a + b;
    }
};
int main()
{
    // cout << MathUtility::add(10, 20) << endl; // 30
    int result = MathUtility::add(10, 20);
    cout << "Sum is " << result << "\n"; // 30

    return 0;
}

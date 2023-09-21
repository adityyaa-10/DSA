#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0) // Base Case
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    int ans = fact(num);
    cout << "Factorial of " << num << " is --> " << ans << endl;
}
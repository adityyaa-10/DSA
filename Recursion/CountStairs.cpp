#include <iostream>
using namespace std;

int CountStairs(int n)
{
    if (n < 0)
        return 0;
    if (n == 0 || n == 1)
        return 1;

    int Ways1 = CountStairs(n - 1);
    int Ways2 = CountStairs(n - 2);

    return Ways1 + Ways2;
}

int main()
{
    int n;
    cout << "Enter Number of Stairs : ";
    cin >> n;

    int ans = CountStairs(n);

    cout << "Total number of possible ways to climb stairs --> " << ans << endl;
}
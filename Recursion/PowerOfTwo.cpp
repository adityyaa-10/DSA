#include <iostream>
using namespace std;

int power(int pow)
{
    if (pow == 0) // Base case
        return 1;
    return 2 * power(pow - 1);
}

int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    int ans = power(num);
    cout << "2 raised to the power " << num << " is --> " << ans << endl;
}
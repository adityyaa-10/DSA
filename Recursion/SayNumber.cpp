#include <iostream>
#include <string>
using namespace std;

void sayDigits(int n, string arr[])
{
    if (n == 0)
        return;

    int digit = n % 10;
    n /= 10;

    sayDigits(n, arr);
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"Zero",
                      "One",
                      "Two",
                      "Three",
                      "Four",
                      "Five",
                      "Six",
                      "Seven",
                      "Eight",
                      "Nine"};
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << endl;
    sayDigits(n, arr);
    cout << endl;
}
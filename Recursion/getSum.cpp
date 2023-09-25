#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    if (size <= 0)
        return 0;
    else
        return (getSum(arr, size - 1) + arr[size - 1]);
}

int main()
{
    int arr[10];
    int size;
    cout << "Enter size of Array : ";
    cin >> size;
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
        cout << endl;
    }

    int ans = getSum(arr, size);

    cout << "The sum of array you provided --> " << ans << endl;
}
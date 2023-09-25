#include <iostream>
using namespace std;

bool IsSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    else if (arr[0] > arr[1])
        return false;

    return IsSorted(arr + 1, size - 1);
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

    bool ans = IsSorted(arr, size);

    if (ans)
        cout << "The array you provided is Sorted" << endl;
    else
        cout << "The array you provided is not Sorted" << endl;
}
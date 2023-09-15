#include <iostream>
using namespace std;
int recursiveLinearSearch(int arr[], int target, int index, int size)
{
    if (index == size)
    {
        return -1;
    }

    if (arr[index] == target)
    {
        return index;
    }

    return recursiveLinearSearch(arr, target, index + 1, size);
}

int main()
{
    int arr[50];
    int n, target;
    cout << "Enter Number of Elements" << endl;
    cin >> n;
    cout << "Enter elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched" << endl;
    cin >> target;

    int result = recursiveLinearSearch(arr, target, 0, n);

    if (result != -1)
    {
        cout << "Element " << target << " found at index " << result << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}

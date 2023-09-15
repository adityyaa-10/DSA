
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    if (end >= start)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] > key)
            return binarySearch(arr, start, mid - 1, key);

        return binarySearch(arr, mid + 1, end, key);
    }

    return -1;
}

int main()
{
    int arr[50];
    int n, key;
    cout << "Enter Number of Elements" << endl;
    cin >> n;
    cout << "Enter elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched" << endl;
    cin >> key;

    int result = binarySearch(arr, 0, n - 1, key);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index :  " << result << endl;
    return 0;
}

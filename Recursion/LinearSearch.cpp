#include <iostream>
using namespace std;

bool recursiveLinearSearch(int arr[], int size, int key)
{
    if (size == 0)
        return -1;

    if (arr[0] == key)
        return true;
    else
    {
        bool remainingPart = recursiveLinearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[50];
    int size, key;
    cout << "Enter Number of Elements" << endl;
    cin >> size;
    cout << "Enter elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched" << endl;
    cin >> key;

    bool ans = recursiveLinearSearch(arr, size, key);

    if (ans)
    {
        cout << "Element is present in array " << endl;
    }
    else
        cout << "Element is not present in array " << endl;

    return 0;
}
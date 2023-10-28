#include <iostream>
using namespace std;

void CountingSort(int *arr, int n)
{
    int maxElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }
    int *count = new int[maxElement + 1];
    for (int i = 0; i <= maxElement; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= maxElement; i++)
    {
        count[i] += count[i - 1];
    }
    int *temp = new int[n];

    for (int i = n - 1; i >= 0; i--)
    {
        temp[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    delete[] count;
    delete[] temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // Program to sort an array using Counting Sort
    int arr[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    CountingSort(arr, n);
}
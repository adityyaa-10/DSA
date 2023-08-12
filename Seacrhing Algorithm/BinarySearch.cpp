#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2; // Optimised Solution for binary search mid value calculation

    // s +(e-s)/2 == s - s/2 + e/2 ==> s/2 +e/2;

    while (start < end)
    {
        if (key == arr[mid])
            return mid;
        else if (key < mid)
        {
            end = mid - 1;
        }
        else if (key > mid)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int evenArray[6] = {2, 4, 6, 8, 10, 12};
    int oddArray[5] = {1, 3, 5, 7, 9};

    int evenIndex = BinarySearch(evenArray, 6, 12);
    cout << "Element 12 is present at index --> " << evenIndex << endl;

    int oddIndex = BinarySearch(oddArray, 5, 9);
    cout << "Element 9 is present at index --> " << oddIndex << endl;
}
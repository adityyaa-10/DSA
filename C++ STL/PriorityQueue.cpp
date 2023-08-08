#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Max Heap
    priority_queue<int> max;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> min;

    max.push(4);
    max.push(3);
    max.push(9);
    max.push(5);
    max.push(1);

    cout << "Printing Max Priority queue" << endl;
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << "   ";
        max.pop();
    }
    cout << endl;

    min.push(4);
    min.push(3);
    min.push(9);
    min.push(5);
    min.push(1);

    cout << "Printing Min Priority queue" << endl;
    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout << min.top() << "   ";
        min.pop();
    }
    cout << endl;

    cout << "Size of Max queue --> " << max.size() << endl;
    cout << "Size of Min queue --> " << min.size() << endl;

    int isEmptyMax = max.empty(); // empty() function returns a boolean value {True or False}

    if (isEmptyMax == 1)
    {
        cout << "The Max queue is empty" << endl;
    }
    else
    {
        cout << "The Max queue is not empty" << endl;
    }

    int isEmptyMin = min.empty(); // empty() function returns a boolean value {True or False}

    if (isEmptyMin == 1)
    {
        cout << "The Min queue is empty" << endl;
    }
    else
    {
        cout << "The Min queue is not empty" << endl;
    }
}
#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);

    cout << "First element in queue --> " << q.front() << endl;
    cout << "Printing queue" << endl;
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    
    int isEmpty = q.empty(); // empty() function returns a boolean value {True or False}

    if (isEmpty == 1)
    {
        cout << "The queue is empty" << endl;
    }
    else
    {
        cout << "The queue is not empty" << endl;
    }
}
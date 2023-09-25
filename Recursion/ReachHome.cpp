#include <iostream>
using namespace std;

void ReachHome(int src, int dest)
{
    cout << "Source --> " << src << " Destination --> " << dest << endl;

    if (src == dest)
    {
        cout << "Reached" << endl;
        return;
    }

    ReachHome(src + 1, dest);
}

int main()
{
    int src, dest;

    cout << "Enter source of person : ";
    cin >> src;

    cout << "Enter Destination of person : ";
    cin >> dest;

    ReachHome(src, dest);
}

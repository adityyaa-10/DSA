#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v, e;
    cout << "Enter Number of vertices : ";
    cin >> v;
    cout << endl;

    cout << "Enter Number of Edges : ";
    cin >> e;
    cout << endl;

    vector<vector<int>> adj(v + 1);

    cout << "Enter " << e << " " << " pairs of edges : " << endl;

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= v; i++)
    {
        cout << i << " ---> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
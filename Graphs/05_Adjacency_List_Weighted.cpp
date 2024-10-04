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

    vector<vector<pair<int, int>>> adj(v + 1);

    cout << "Enter " << e << " " << " pairs of edges with weights: " << endl;

    for (int i = 0; i < e; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        adj[x].push_back({y, wt});
        adj[y].push_back({x, wt});
    }

    for (int i = 1; i <= v; i++)
    {
        cout << i << " ---> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << '(' << adj[i][j].first << "," << adj[i][j].second << ')' << " ";
        }
        cout << endl;
    }

    return 0;
}
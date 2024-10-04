#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v, e;
    cout << "Enter the number of Vertices : ";
    cin >> v;
    cout << endl;
    cout << "Enter the number of edges : ";
    cin >> e;
    cout << endl;
    vector<vector<int>> adjMatrix(v + 1, vector<int>(v + 1, 0));

    cout << "Enter " << e << " " << "pairs of edges along with their weights" << endl;

    for (int i = 0; i < e; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        adjMatrix[x][y] = wt;
        adjMatrix[y][x] = wt;
    }
    cout << endl;
    cout << "Adjacency Matrix : " << endl;
    for (int i = 0; i <= v; i++)
    {
        for (int j = 0; j <= v; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
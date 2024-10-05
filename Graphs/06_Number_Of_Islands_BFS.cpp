#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution
{
private:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;

        queue<pair<int, int>> q;
        q.push({row, col});

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            // Visiting the 8 neighbours of current node
            for (int delRow = -1; delRow <= 1; delRow++)
            {
                for (int delCol = -1; delCol <= 1; delCol++)
                {
                    int nrow = row + delRow;
                    int ncol = col + delCol;

                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == '1')
                    {
                        q.push({nrow, ncol});
                        vis[nrow][ncol] = 1;
                    }
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>> &grid)
    {
        /*
            1. Create a 2D visited matrix, to store visited information
            2. Traverse the given grid, and call bfs for every unvisited '1' we encounter
            3. Maintain a counter variable, and increment the counter every time bfs is called due to encountering
            an unvisited '1'
            4. For every node for which BFS is called, visit all the 8 neighbours of that node, and push them into
            the queue if they are '1', and mark them as visited too

            # NOTE --> '1' represents Land, and '0' represents Water
        */

        int n = grid.size();    // Number of rows
        int m = grid[0].size(); // Number of columns

        // Creating a 2D Visited Matrix:
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vis[i][j] == 0 && grid[i][j] == '1') // Calling BFS for unvisited Land '1'
                {
                    count++;
                    bfs(i, j, vis, grid);
                }
            }
        }
        return count;
    }
};
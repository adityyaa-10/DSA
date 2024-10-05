#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution
{
private:
    void dfs(int row, int col, int &initialColor, int &color, vector<vector<int>> &image, vector<vector<int>> &ans, int delRow[], int delCol[])
    {
        ans[row][col] = color;

        int m = image.size();
        int n = image[0].size();

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];

            if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n)

            {
                if (image[nrow][ncol] == initialColor && ans[nrow][ncol] != color)
                    dfs(nrow, ncol, initialColor, color, image, ans, delRow, delCol);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                  int color)
    {
        int m = image.size();
        int n = image[0].size();
        int initialColor = image[sr][sc];
        vector<vector<int>> ans = image;
        // vector<vector<int>> vis(m, vector<int>(n, 0));

        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        dfs(sr, sc, initialColor, color, image, ans, delRow, delCol);

        return ans;
    }
};
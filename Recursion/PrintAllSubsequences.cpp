#include <iostream>
#include <vector>
using namespace std;

void getSubsequences(vector<int> &nums, vector<vector<int>> &ans, int i, int n, vector<int> &sub)
{
    // Base Condition
    if (i >= n)
    {
        ans.push_back(sub);
        return;
    }

    // To pick
    sub.push_back(nums[i]);
    getSubsequences(nums, ans, i + 1, n, sub);

    // Not Pick
    sub.pop_back();
    getSubsequences(nums, ans, i + 1, n, sub);

    return;
}

void printAns(vector<vector<int>> &ans)
{
    cout << "[";
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << "{";
        for (int j = 0; j < ans[i].size(); ++j)
        {
            cout << ans[i][j];
            if (j != ans[i].size() - 1)
            {
                cout << ",";
            }
        }
        cout << "}";
        if (i != ans.size() - 1)
        {
            cout << "," << endl;
        }
    }
    cout << "]" << endl;
}

int main()
{
    int n;
    cout << "Enter Number of Elements : ";
    cin >> n;
    cout << endl;

    vector<int> nums(n);
    vector<int> sub;
    vector<vector<int>> ans;

    cout << "Enter " << n << " numbers space separated ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << endl;

    getSubsequences(nums, ans, 0, n, sub);
    printAns(ans);

    return 0;
}

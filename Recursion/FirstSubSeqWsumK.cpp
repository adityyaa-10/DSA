#include <iostream>
#include <vector>
using namespace std;

bool getSubsequences(vector<int> &nums, vector<vector<int>> &ans, int i, int n, vector<int> &sub, int sum, int target)
{
    // Base Condition
    if (i >= n)
    {
        // Condition is satisfied
        if (sum == target)
        {
            ans.push_back(sub);
            return true;
        }
        // Condition is not satisfied
        return false;
    }

    // To pick
    sub.push_back(nums[i]);
    sum += nums[i];

    // If you have found a sequence stop making recursive calls
    if (getSubsequences(nums, ans, i + 1, n, sub, sum, target) == true)
        return true;

    // Not Pick
    sub.pop_back();
    sum -= nums[i];
    if (getSubsequences(nums, ans, i + 1, n, sub, sum, target) == true)
        return true;

    // If you did not find any subsequence matching your condition, return false indicating there are no
    // subsequences that follow the given conditions
    return false;
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
    int n, target, sum = 0;
    cout << "Enter Number of Elements : ";
    cin >> n;
    cout << endl;
    cout << "Enter Target : ";
    cin >> target;

    vector<int> nums(n);
    vector<int> sub;
    vector<vector<int>> ans;

    cout << "Enter " << n << " numbers space separated ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << endl;

    getSubsequences(nums, ans, 0, n, sub, sum, target);
    printAns(ans);

    return 0;
}

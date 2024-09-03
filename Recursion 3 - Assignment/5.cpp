#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void helper(vector<int> &nums, vector<int> ans, vector<vector<int>> &finalAns, int idx, bool flag)
{
    if (idx == nums.size())
    {
        finalAns.push_back(ans);
        return;
    }
    if (idx == nums.size() - 1)
    {
        if (flag)
        {
            helper(nums, ans, finalAns, idx + 1, true);
        }
        ans.push_back(nums[idx]);
        helper(nums, ans, finalAns, idx + 1, true);
        return;
    }
    if (nums[idx] == nums[idx + 1])
    {
        if (flag)
        {
            helper(nums, ans, finalAns, idx + 1, true);
        }
        ans.push_back(nums[idx]);
        helper(nums, ans, finalAns, idx + 1, false);
    }
    else
    {
        if (flag)
        {
            helper(nums, ans, finalAns, idx + 1, true);
        }
        ans.push_back(nums[idx]);
        helper(nums, ans, finalAns, idx + 1, true);
    }
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<vector<int>> finalAns;
    vector<int> ans;
    helper(nums, ans, finalAns, 0, true);
    return finalAns;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter the elements of array(not necessarily distinct): ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    sort(nums.begin(), nums.end());
    cout << "The possible subsets are: " << endl;
    vector<vector<int>> res = subsetsWithDup(nums);
    for (auto &subset : res)
    {
        for (int ele : subset)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}
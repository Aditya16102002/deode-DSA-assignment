#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void generate(vector<vector<int>> &finalAns, vector<int> &ans, vector<int> &nums, int idx, bool flag)
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
            generate(finalAns, ans, nums, idx + 1, true);
        }
        ans.push_back(nums[idx]);
        generate(finalAns, ans, nums, idx + 1, true);
        ans.pop_back();
        return;
    }
    if (nums[idx] == nums[idx + 1])
    {
        if (flag)
        {
            generate(finalAns, ans, nums, idx + 1, true);
        }
        ans.push_back(nums[idx]);
        generate(finalAns, ans, nums, idx + 1, false);
        ans.pop_back();
    }
    else
    {
        if (flag)
        {
            generate(finalAns, ans, nums, idx + 1, true);
        }
        ans.push_back(nums[idx]);
        generate(finalAns, ans, nums, idx + 1, true);
        ans.pop_back();
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of array which is not necessarily unique: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    vector<int> ans;
    vector<vector<int>> finalAns;
    generate(finalAns, ans, nums, 0, true);
    cout << "The possible subsets of given elements = " << endl;
    for (auto &subset : finalAns)
    {
        for (int ele : subset)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}
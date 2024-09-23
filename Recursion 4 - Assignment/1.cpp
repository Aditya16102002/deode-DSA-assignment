#include <iostream>
#include <vector>
using namespace std;

void generate(vector<vector<int>> &finalAns, vector<int> &ans, vector<int> &nums, int idx)
{
    if (idx == nums.size())
    {
        finalAns.push_back(ans);
        return;
    }
    generate(finalAns, ans, nums, idx + 1);
    ans.push_back(nums[idx]);
    generate(finalAns, ans, nums, idx + 1);
    ans.pop_back();
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the unique elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> ans;
    vector<vector<int>> finalAns;
    generate(finalAns, ans, nums, 0);
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
#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int n = nums.size();
    int leftSum = 0, rightSum = 0;
    for (auto ele : nums)
    {
        rightSum += ele;
    }
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        rightSum -= nums[i];
        if (leftSum == rightSum)
        {
            idx = i;
            break;
        }
        leftSum += nums[i];
    }
    return idx;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << "Pivot index of the given array = " << pivotIndex(nums);
    return 0;
}
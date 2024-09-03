#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMin(vector<int> &nums, int &mini, int idx)
{
    if (idx == nums.size()) // Base case: if we have returned till the end, return the minimum found so far.
    {
        return mini;
    }
    // Recursive case: Compare the current minimum with the current element and recurse for the next element.
    // We cannot directly put min(mini, nums[idx]) in the return statement
    // because we need to update 'mini' by reference to maintain the correct value
    // across recursive calls.
    mini = min(mini, nums[idx]);
    // Pass the updated variable 'mini' instead of 'min(mini, nums[idx])' because 'min(mini, nums[idx])' is a temporary value and cannot be referenced.
    return findMin(nums, mini, idx + 1);
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
    // Precaution: Always initialize the variable when passing by reference.
    // Passing a direct constant like INT_MAX may not work correctly as it is not a modifiable variable.
    // Initializing a variable (e.g., int mini = INT_MAX) ensures it can be correctly updated and referenced throughout the recursion.
    int mini = INT_MAX;
    // Pass the reference of 'mini' to the function.
    int res = findMin(nums, mini, 0);
    cout << "Minimum element of the array = " << res;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int sumOfAll(vector<int> &nums, int &currSum, int idx) // pass currSum by reference so that on every recursion call new variable is not created.
{
    if (idx == nums.size()) // Base case: if we have returned till the end, return the currSum which contain the sum of all elements.
    {
        return currSum;
    }
    currSum = currSum + nums[idx];
    return sumOfAll(nums, currSum, idx + 1); // add the current element to the currSum and recurse to the next element(idx+1).
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
    int currSum = 0;
    int ans = sumOfAll(nums, currSum, 0);
    cout << "Sum of all the elements in the given array = " << ans;
    return 0;
}
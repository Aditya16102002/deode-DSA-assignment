#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter the elements of array in decreasing order: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int target;
    cout << "Enter the target element to be searched in the array: ";
    cin >> target;
    int idx = search(nums, target);
    if (idx == -1)
    {
        cout << "Target not found in the given array.";
    }
    else
    {
        cout << "The target is present at index: " << idx;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int search(int low, int high, vector<int> &nums, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
    }
    return -1;
}

int infiniteSearch(vector<int> &nums, int target)
{
    int low = 0, high = 0, x = 1, mid = -1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
            high = low + x;
            x *= 2;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
            return search(low, high, nums, target);
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of infinite array: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter the elements of infinite array in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int target;
    cout << "Enter the target to be searched in the infinite array: ";
    cin >> target;
    int resIdx = infiniteSearch(nums, target);
    if (resIdx == -1)
    {
        cout << "The target element is not present in the given array.";
    }
    else
    {
        cout << "The target element is present at index: " << resIdx;
    }
    return 0;
}
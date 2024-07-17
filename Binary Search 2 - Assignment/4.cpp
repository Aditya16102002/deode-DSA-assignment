#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return true;
        }
        else if (nums[mid] == nums[low] && nums[mid] == nums[high])
        {
            low++;
            high--;
            continue;
        }
        else if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && nums[mid] >= target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (nums[mid] <= nums[high])
        {
            if (nums[mid] <= target && nums[high] >= target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of rotated sorted array: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter the elements of rotated sorted array: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int target;
    cout << "Enter the target to be searched in the array: ";
    cin >> target;
    if (search(nums, target))
    {
        cout << "The target is present in the array.";
    }
    else
    {
        cout << "Target not found";
    }
    return 0;
}
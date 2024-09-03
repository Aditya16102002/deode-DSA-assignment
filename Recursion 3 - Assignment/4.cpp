#include <iostream>
#include <vector>
using namespace std;

void printReverse(vector<int> &nums, int idx)
{
    // Base case: If we've reached the end of the array, stop the recursion.
    if (idx == nums.size())
    {
        return;
    }

    // Recursive case: Move to the next element first.
    printReverse(nums, idx + 1);

    // After reaching the end, print the current element in which results the array to be printed in reverse order.
    cout << nums[idx] << " ";
    return; // After printing the current element, return to the caller function.
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
    cout << "The array in reverse order: " << endl;
    printReverse(nums, 0);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int findIdx(int &num, vector<int> &nums, int idx) // pass num by reference so that on every recursion call new variable is not created.
{
    if (nums[idx] == num) // Base case 1: if 'num' is found at the idx return idx.
    {
        return idx;
    }
    if (idx == nums.size()) // Base case 2: if Base case 1 never occurred and we reached at the end, that means 'num' is not present so return -1.
    {
        return -1;
    }
    return findIdx(num, nums, idx + 1); // recurse on the next element to search 'num'.
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
    int num;
    cout << "Enter a number from the array: ";
    cin >> num;
    int idx = findIdx(num, nums, 0);
    if (idx == -1)
    {
        cout << "The element is not present in the array.";
    }
    else
    {
        cout << "The index of the element is: " << idx;
    }
    return 0;
}
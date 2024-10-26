#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    while (i < n)
    {
        int correctIdx = nums[i] - 1;
        if (nums[i] == nums[correctIdx])
        {
            i++;
        }
        else
        {
            swap(nums[i], nums[correctIdx]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i + 1)
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter the elements of array from 1 to n: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout<<"Integers that appears twice are: ";
    vector<int> ans = findDuplicates(nums);
    for(auto ele : ans)
    {
        cout<<ele<<" ";
    }
    return 0;
}
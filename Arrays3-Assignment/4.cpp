#include <bits/stdc++.h>
using namespace std;
void func(vector<int> &nums)
{
    int n = nums.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0) // Every non-zero numbers encountered will be shifted to the beginning of the array
                          // resulting 0s to move to the end of the array
        {
            swap(nums[i], nums[j]);
            j++; // ensures that left side of j index is all non-zero numbers
        }
    }
    return;
}
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter arry elements: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << "Entered array is : ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << " ";
    }
    cout << endl;
    func(nums);
    cout << "Updated array is : ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums.at(i) << " ";
    }
    cout << endl;
}
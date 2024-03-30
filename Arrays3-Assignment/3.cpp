#include <bits/stdc++.h>
using namespace std;
int nonrepeat(vector<int> &nums)
{
    int res;
     bool flag = true;
    for (int i = 0; i < nums.size(); i++)
    {
        int j;
        for (j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && i != j)
            {
                flag = false;
                break;
            }
        }
        if (j == nums.size())
        {
            flag = true;
            res = nums[i];
            break;
        }
    }
    if (flag == true)
        return res;
    else
        return -1;
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
    if (nonrepeat(nums) == -1)
    {
        cout << "No non repeating element in the given array";
    }
    else
    {
        cout << "First non-repeating element in the array = " << nonrepeat(nums);
    }
    return 0;
}
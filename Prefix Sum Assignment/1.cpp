#include <bits/stdc++.h>
using namespace std;

class NumArray
{
public:
    vector<int> pre;
    NumArray(vector<int> &nums)
    {
        int n = nums.size();
        pre = vector<int>(n);
        pre[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right)
    {
        if (left == 0)
        {
            return pre[right];
        }
        return pre[right] - pre[left - 1];
    }
};

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
    NumArray *obj = new NumArray(nums); // obj is pointer to the object of NumArray class.
    int left;
    cout << "Enter the left index: ";
    cin >> left;
    int right;
    cout << "Enter the right index: ";
    cin >> right;
    cout << "Sum of range [" << left << "," << right << "] = " << obj->sumRange(left, right);
    return 0;
}

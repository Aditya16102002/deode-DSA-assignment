#include <bits/stdc++.h>
using namespace std;

int countTriplets(vector<int> &nums, int x)
{
    int count = 0;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        for (int j = i + 1; j < nums.size() - 1; j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (nums[i] + nums[j] + nums[k] == x)
                {
                    count++;
                }
            }
        }
    }
    return count;
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
    int x;
    cout << "Enter the given value x: ";
    cin >> x;
    cout << "The number of triplets whose sum = " << x << " = " << countTriplets(nums, x);
    return 0;
}
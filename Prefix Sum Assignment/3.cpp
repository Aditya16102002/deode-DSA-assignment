#include <bits/stdc++.h>
using namespace std;

vector<long long> findPrefixScore(vector<int> &nums)
{
    int n = nums.size();
    vector<long long> score(n);
    score[0] = 2 * nums[0];
    int maxEle = nums[0];
    for (int i = 1; i < n; i++)
    {
        maxEle = max(nums[i], maxEle);
        score[i] = nums[i] + maxEle + score[i - 1];
    }
    return score;
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
    vector<long long> score = findPrefixScore(nums);
    cout << "The prefix score of the given array = " << endl;
    for (auto ele : score)
    {
        cout << ele << " ";
    }
    return 0;
}
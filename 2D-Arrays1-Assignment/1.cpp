#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> nums(5, vector<int>(5, 10)); // nums(5,vector<int>(5,10)) -> 5 rows with size of each row 5 with default value 10
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            cout << nums.at(i).at(j) << " ";
        }
        cout << endl;
    }
    return 0;
}
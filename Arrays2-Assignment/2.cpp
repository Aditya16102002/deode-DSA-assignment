#include <bits/stdc++.h>
using namespace std;

void largestThree(vector<int> &v)
{
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    for (int i = 0; i <= v.size() - 1; i++)
    {
        if (v[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = v[i];
        }
        else if (v[i] > max2 && v[i] != max1)
        {
            max3 = max2;
            max2 = v[i];
        }
        else if (v[i] > max3 && v[i] != max1 && v[i] != max2)
        {
            max3 = v[i];
        }
    }
    cout << "Largest three elements in the array are " << max1 << " " << max2 << " " << max3 << endl;
}
int main()
{
    cout << "Enter the array size: ";
    int n;
    cin >> n;
    cout << "Enter the array elements: ";
    vector<int> v;
    for (int i = 0; i <= n - 1; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    largestThree(v);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int isSorted(vector<int> &v)
{
    bool flag = false; // indicates unsorted
    for (int i = 0; i <= v.size() - 2; i++)
    {
        if (v[i] <= v[i + 1])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break; // break will "terminate the for loop at that iteration with value of flag as false."
        }
    }
    if (flag == true) // indicates sorted
    {
        return 1;
    }
    else
    {
        return -1;
    }
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
    if (isSorted(v) == 1)
    {
        cout << "Our Array is Sorted";
    }
    else
    {
        cout << "Our Array is not Sorted";
    }
    return 0;
}
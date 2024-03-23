#include <bits/stdc++.h>
using namespace std;

int countElements(int x, vector<int> &v)
{
    int count = 0;
    for (int i = 0; i <= v.size() - 1; i++)
    {
        if (v.at(i) > x)
        {
            count++;
        }
    }
    return count;
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

    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Number of elements greater than " << x << " in the given array = " << countElements(x, v);
    return 0;
}
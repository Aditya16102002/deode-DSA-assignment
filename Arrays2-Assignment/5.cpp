#include <bits/stdc++.h>
using namespace std;

void change(vector<int> &v)
{
    for (int i = 0; i <= v.size() - 1; i++)
    {
        if (i % 2 == 0)
        {
            v[i] += 10;
        }
        else
        {
            v[i] *= 2;
        }
    }
}
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter array elements: ";
    vector<int> v;
    for (int i = 0; i <= n - 1; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl<< "Changed array: ";

    change(v);

    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v.at(i) << " ";
    }
    return 0;
}
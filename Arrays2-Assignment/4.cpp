#include <bits/stdc++.h>
using namespace std;

int sumEvenIndices(vector<int> &v) //takes reference of vector pointing directly at main function's vector
{
    int sum = 0;
    for (int i = 0; i <= v.size() - 1; i++)
    {
        if (i % 2 == 0)
        {
            sum += v[i];
        }
    }
    return sum;
}
int sumOddIndices(vector<int> &v)
{
    int sum = 0;
    for (int i = 0; i <= v.size() - 1; i++)
    {
        if (i % 2 != 0)
        {
            sum += v[i];
        }
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
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
        cout << v[i] << " ";
    }
    cout << endl;
    int diff = sumEvenIndices(v) - sumOddIndices(v);
    cout << "Difference between sum of even and odd indices = " << diff;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && v[j] < v[j - 1])
        {
            swap(v[j], v[j - 1]);
            j--;
        }
    }

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x *= 10;
        x += v[i];
    }

    for (int i = n - 1; i >= 1; i--)
    {
        if (v[i] != v[i - 1])
        {
            swap(v[i], v[i - 1]);
            break;
        }
    }

    int y = 0;
    for (int i = 0; i < n; i++)
    {
        y *= 10;
        y += v[i];
    }

    cout << "Minimum possible sum of two numbers formed from digits of the array = " << x + y << endl;

    return 0;
}

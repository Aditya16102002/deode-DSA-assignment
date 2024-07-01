#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cout << "Enter the value of integer k such that k <= " << n << ": ";
    cin >> k;

    if (k > n)
    {
        cout << "Invalid value of k. It should be less than or equal to " << n << ".";
        return 1;
    }

    for (int i = 0; i < k; i++)
    {
        int minVal = INT_MAX, minIdx = -1;
        for (int j = i; j < n; j++)
        {
            if (v[j] < minVal)
            {
                minVal = v[j];
                minIdx = j;
            }
        }
        swap(v[i], v[minIdx]);

    }

    cout << "Kth smallest element of the array = " << v[k-1];
    return 0;
}

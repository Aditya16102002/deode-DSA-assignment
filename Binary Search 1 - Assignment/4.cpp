#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of array in sorted order in range [1,n-1]: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == mid + 1)
        {
            low = mid + 1;
        }
        else if (v[mid] == mid)
        {
            if (mid > 0 && v[mid] == v[mid - 1])
            {
                cout << "Repeated number in the given array = " << v[mid];
                return 0;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    cout << "No repeated number found in the given array.";
    return 0;
}

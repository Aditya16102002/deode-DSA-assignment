#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v;
    cout << "Enter the elements of sorted binary array: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int low = 0, high = n - 1;
    int firstOccurrence = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == 1)
        {
            if (mid - 1 >= 0 && v[mid - 1] == 1)
            {
                high = mid - 1;
            }
            else
            {
                firstOccurrence = mid;
                break;
            }
        }
        else if (v[mid] == 0)
        {
            low = mid + 1;
        }
    }
    if (firstOccurrence == -1)
    {
        cout << "Total number of 1's in the given array = 0";
    }
    else
    {
        cout << "Total number of 1's in the given array = " << n - firstOccurrence;
    }
    return 0;
}
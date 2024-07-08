#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v;
    cout << "Enter the elements of array in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int x;
    cout << "Enter the target x: ";
    cin >> x;

    // Last Occurrence
    int low = 0, high = n - 1;
    bool flag = false;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == x)
        {
            if (mid + 1 <= n - 1 && v[mid + 1] == x)
            {
                low = mid + 1;
            }
            else
            {
                flag = true;
                cout << "Last occurrence of x = " << mid;
                break;
            }
        }
        else if (v[mid] > x)
        {
            high = mid - 1;
        }
        else if (v[mid] < x)
        {
            low = mid + 1;
        }
    }
    if (flag == false)
    {
        cout << -1;
    }
    return 0;
}
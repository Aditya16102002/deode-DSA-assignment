#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;
    int n;
    cout << "Enter the number of columns: ";
    cin >> n;
    vector<vector<int>> v(m, vector<int>(n));
    cout << "Enter the elements of binary matrix in sorted order: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    int max1s = INT_MIN, maxrow = -1;
    for (int i = 0; i < m; i++)
    {
        int low = 0, high = n - 1, firstOccurrence = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (v[i][mid] == 1)
            {
                if (mid - 1 >= 0 && v[i][mid - 1] == 1)
                {
                    high = mid - 1;
                }
                else
                {
                    firstOccurrence = mid;
                    break;
                }
            }
            else if (v[i][mid] == 0)
            {
                low = mid + 1;
            }
        }

        if (firstOccurrence == -1)
        {
            continue;
        }
        else
        {
            int noo = n - firstOccurrence;
            if (noo > max1s)
            {
                max1s = noo;
                maxrow = i;
            }
        }
    }

    if (maxrow == -1)
    {
        cout << "There is no 1's in the given binary matrix";
    }
    else
    {
        cout << "Row index with maximum number of 1's = " << maxrow;
    }
    return 0;
}
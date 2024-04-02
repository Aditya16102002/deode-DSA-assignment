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
    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    int maxSum = INT_MIN; // to store maximum sum of row
    int maxRow = -1;      // to store row with maximum sum
    for (int i = 0; i < m; i++)
    {
        int rowSum = 0; // in every iteration rowSum is initialized to 0
        for (int j = 0; j < n; j++)
        {
            rowSum += v[i][j];
        }
        if (rowSum > maxSum) // update maxSum and maxRow
        {
            maxSum = rowSum;
            maxRow = i + 1;
        }
    }
    cout << "Row number with maximum sum = " << maxRow;

    return 0;
}
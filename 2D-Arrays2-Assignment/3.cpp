#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout << "Enter number of rows: ";
    cin >> m;
    int n;
    cout << "Enter number of columns: ";
    cin >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter matrix elements: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int j = 0; j < n; j++) // column-wise printing
    {
        if (j % 2 == 0) // if even column
        {
            for (int i = m - 1; i >= 0; i--) // bottom to up column-wise printing
            {
                cout << matrix[i][j] << " ";
            }
        }
        else // if odd column
        {
            for (int i = 0; i < m; i++) // top to bottom column-wise printing
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
}
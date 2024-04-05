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
    // 1) convert the matrix into its transpose
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++) // if j initialized from 0 then elements will be swapped twice resulting no change in the matrix
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // 2) make the last row as first row and so on...
    int i = 0, j = m - 1;
    while (i < j)
    {
        swap(matrix[i], matrix[j]); // ith and jth rows of matrix are swapped
        i++;
        j--;
    }
    // Print
    cout << "90 degree anticlockwise rotated matrix: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
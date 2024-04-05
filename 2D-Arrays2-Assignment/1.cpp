#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows/columns: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter matrix elements: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Elements of diagonals: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || (i + j == n - 1)) // (i==j) -> left diagonal; for every right diagonal element -> i+j(2) == n-1(3-1)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
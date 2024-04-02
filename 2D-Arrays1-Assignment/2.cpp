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
    cout << "Enter the first matrix: " << endl;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a.at(i).at(j);
        }
    }
    cout << "Enter the second matrix: " << endl;
    vector<vector<int>> b(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b.at(i).at(j);
        }
    }
    cout << "First matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Second matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b.at(i).at(j) << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] += a[i][j];
        }
    }

    cout << "Sum of given matrices = " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
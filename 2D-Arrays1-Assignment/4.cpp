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
    int largest = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            largest = max(largest, v[i][j]); // largest variable is compared with every elements of the matrix
        }
    }
    cout << "Largest element of given matrix = " << largest;
    return 0;
}
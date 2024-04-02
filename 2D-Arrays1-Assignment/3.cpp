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

    cout << "Entered matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int a1, b1;
    cout << "Enter the first coordinate: ";
    cin >> a1 >> b1;

    int a2, b2;
    cout << "Enter the second coordinate: ";
    cin >> a2 >> b2;

    cout << "First coordinate: (" << a1 << "," << b1 << ")" << endl;
    cout << "Second coordinate: (" << a2 << "," << b2 << ")" << endl;

    int sum = 0;
    for (int i = min(a1, a2); i <= max(a1, a2); i++) // iteration from row -> min(a1,a2) to max(a1,a2)
    {
        for (int j = min(b1, b2); j <= max(b1, b2); j++) // iteration from column -> min(b1,b2) to max(b1,b2)
        {
            sum += v[i][j];
        }
    }

    cout << "Sum of rectangle of given coordinates = " << sum;

    return 0;
}

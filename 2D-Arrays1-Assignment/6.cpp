#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<int>> &v, int n)
{
    int mid = n / 2; //  5/2 = 2 -> indices: [0,1,2,3,4] -> size=5
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == mid || j == mid)
            {
                cout << v[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of rows/columns: ";
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    display(v, n);
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 1;
    cout << "Enter the Number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << char(64 + j) << " ";
            }
        }
        cout << endl;
    }
}
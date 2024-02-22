#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;
    int nsp = 2 * n - 3;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*";

        for (int k = nsp; k >= 1; k--)
        {
            cout << " ";
        }
        cout << "*";
        nsp -= 2;
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {

        cout << " ";
    }
    cout << "*";
    return 0;
}
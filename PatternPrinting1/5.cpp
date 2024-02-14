#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 1;
    cout << "Enter the Number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 1;
    cout << "Enter the Number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 1;
    cout << "Enter the Number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<char(k+64);
        }
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 1;
    cout << "Enter the Number of rows: ";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            (i+j)>=(n+1) ? cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
    for(int i = 1 ; i <= n-1 ; i++)
    {
        for(int k=1;k<=i;k++)
        {
            cout<<" ";
        }
        for(int l=1;l<=n-i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
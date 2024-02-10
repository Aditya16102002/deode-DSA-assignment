#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a=1,b=1,sum=0;
        for(int j=1;j<=i-2;j++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        cout<<b<<" ";
    }
}
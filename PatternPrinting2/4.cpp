#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;
    for(int i=1;i<=2*n-1;i++)
    {
        cout<<char(64+i)<<" ";
    }   
    cout<<endl;
    int m=n-1,nsp=1;
    for(int i=1;i<=m;i++)
    {
        int a=1;
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<char(64+a)<<" ";
            a++;
        }
        for(int k=1;k<=nsp;k++)
        {
            cout<<"  ";
            a++;
        }
        nsp+=2;
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<char(64+a)<<" ";
            a++;
        }
        
        cout<<endl;
    }
}
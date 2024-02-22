#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=2*n-1;j++)
    {
        int a=j;
        if(a>n)
        {
            a=2*n-j;
        }
        (i+a)==(n+1) ? cout<<i : cout<<" ";
    }
    cout<<endl;
  }

}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  for(int i=1;i<=500;i++)
  {
    int sum=0,num,originalnum;
    num=i;
    originalnum=num;
    while(num>0)
    {
        int digit=num%10;
        sum+=(digit*digit*digit);
        num/=10;
    }
    if(originalnum==sum)
    {
        cout<<originalnum<<endl;
    }
  }
    return 0;
}

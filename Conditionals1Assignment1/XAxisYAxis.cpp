#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the x-y coordinates of the point : ";
    cin>>x>>y;
    if(x==0 && y==0)
     cout<<"The point lies on the origin";
    else if(x==0 && y!=0)
     cout<<"The point lies on the y-axis";
    else if(x!=0 && y==0)
     cout<<"The point lies on the x-axis";
    else if(x>0 && y>0)
     cout<<"The point lies in the first quadrant";
    else if(x<0 && y>0)
     cout<<"The point lies in the second quadrant";
    else if(x<0 && y<0)
     cout<<"The point lies in the third quadrant";
    else
     cout<<"The point lies in the fourth quadrant";

}
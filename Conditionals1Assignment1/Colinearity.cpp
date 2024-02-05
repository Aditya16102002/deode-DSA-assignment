#include <iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter  the first point x1-y1\n";
    cin>>x1>>y1;
    cout<<"Enter  the second point x2-y2\n";
    cin>>x2>>y2;
    cout<<"Enter  the first point x1-y1\n";
    cin>>x3>>y3;
  if((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2))
    cout<<"All the three points fall on one straight line.";
  else
    cout<<"All the three points does not fall on one straight line.";

}
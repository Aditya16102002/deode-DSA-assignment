#include <iostream>
using namespace std;
int main()
{
    float r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    float circumference,area;
    circumference=2*3.14159*r;
    area=3.14159*r*r;
    cout<<"Circumference = "<<circumference<<endl<<"Area = "<<area<<endl;
    if(circumference>area)
       cout<<"circumference is greater than area"; 
    else if(area>circumference)
       cout<<"area is greater than circumference"; 
    else
       cout<<"area=circumference"; 
      return 0;
}
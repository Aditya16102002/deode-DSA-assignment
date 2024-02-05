#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first side of Triangle: ";
    cin>>a;
     cout<<"Enter the second side of Triangle: ";
    cin>>b;
     cout<<"Enter the third side of Triangle: ";
    cin>>c;
    if(a==b && b==c)
      cout<<"Equilateral Triangle";
    else if(a==b || b==c || a==c)
      cout<<"Isosceles Triange";
    else
      cout<<"Scalene Triangle";
    return 0;
}

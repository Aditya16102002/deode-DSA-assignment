#include <iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter the Length of the Rectangle: ";
    cin>>l;
    cout<<"Enter the Breadth of the Rectangle: ";
    cin>>b;
    int p,a;
    p=2*(l+b);
    a=l*b;
    cout<<"Area of Rectangle = "<<a<<endl;
    cout<<"Perimeter of Rectangle = "<<p<<endl;
    if(p>a)
     cout<<"Perimeter is greater than Area of the Rectangle";
    else
     cout<<"Area is greater than Perimeter of the Rectangle";
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Enter the Marks of A: ";
    cin>>A;
    cout<<"Enter the Marks of B: ";
    cin>>B;
    cout<<"Enter the Marks of C: ";
    cin>>C;
    if(A<B)
    {
     if(A<C)
      cout<<"A has the least marks";
     else
      cout<<"C has the least marks";
    }
    else
    {
     if(B<C)
      cout<<"B has the least marks";
     else
      cout<<"C has the least marks";
    }
    
}
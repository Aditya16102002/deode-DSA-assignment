#include <iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"Enter a character: ";
   cin>>ch;
   if((ch>=65 && ch<=90) || (ch>=97 && ch>=122))
     cout<<"Entered Character is an Alphabet";
   else if(ch>=48 && ch<=57)
     cout<<"Entered Character is a Digit";
   else
     cout<<"Entered Character is a special Character";


    


}
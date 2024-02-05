#include <iostream>
using namespace std;
int main()
{
    char ch1, ch2;
    cout << "Enter first Character: ";
    cin >> ch1;
    cout << "Enter second Character: ";
    cin >> ch2;
    int diff=int(ch1)-int(ch2);
    cout<<"Difference between entered characters = "<<diff;
}
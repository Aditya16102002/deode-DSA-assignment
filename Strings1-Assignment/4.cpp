#include <iostream>
#include <string>
#include <algorithm> //contains reverse() function.
using namespace std;

int main()
{
    int n;
    cout << "Enter the even length of string: ";
    cin >> n;
    cout << "Enter the string: ";
    string s;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        s.push_back(ch);
    }
    reverse(s.begin() + (n / 2), s.end()); // (8)- 0,1,2,3,4,5,6,7 -> begins from (n/2)
    cout << s;
}
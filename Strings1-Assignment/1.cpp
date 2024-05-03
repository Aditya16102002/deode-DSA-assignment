#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the string: ";
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        char ch;   // everytime new char variable will be taken and pushed back to the string
        cin >> ch; // This makes sure that string is of length n
        str.push_back(ch);
    }
    for (int i = 0; i < n; i += 2) // odd position "not" index
    {
        str[i] = '#';
    }
    cout << str;
}
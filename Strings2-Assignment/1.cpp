#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string temp = str;
    reverse(temp.begin(), temp.end());
    str += temp;
    cout << str;
}
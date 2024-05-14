#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string of digits: ";
    cin >> str;
    char max1 = '!', max2 = '!'; // '!' -> 33 , 0 -> 48, 1 -> 49 ...
    for (int i = 0; i < str.size(); i++)
    {
        if (max1 < str[i])
        {
            max2 = max1; // second largest to be preserved
            max1 = str[i];
        }
        else if (max2 < str[i] && str[i] != max1) //  max1 should not be equal to max2
        {
            max2 = str[i];
        }
    }
    if (max2 == '!')
    {
        cout << "No second largest digit";
    }
    else
    {
        cout << "Second largest digit in string = " << max2;
    }
    return 0;
}
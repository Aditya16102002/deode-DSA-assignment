#include <bits/stdc++.h>
using namespace std;

int main()
{
    // consonants: all characters which are not vowels i.e every alphabets except a,e,i,o,u

    int n;
    cout << "Enter the length of the string: ";
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        str.push_back(ch);
    }
    int v = 0; // count of vowels
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            v++;
        }
    }
    cout << "Number of consonants in entered string = " << (n - v); //(total no. of alphabets) - (no. of vowels) = no. of consonants
    return 0;
}
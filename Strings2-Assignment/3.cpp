#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int ans = 0;
    int count = 0; // to keep track of number of consecutive vowels
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        else // consonants will act as delimiter to mark the end of substring containing only vowels
        {
            ans += (count * (count + 1)) / 2; // no. of vowel substrings possible = sum of first count natural numbers
            count = 0;                        // reset count for next set of vowels substring
        }
    }
    ans += (count * (count + 1)) / 2;
    cout << "Number of substrings containing only vowels: " << ans << endl;
    // If consecutive vowels occur at the string's end without a consonant delimiter,
    // add the count of substrings containing only vowels till the end to not skip this last pair of vowel(s).
    return 0;
}
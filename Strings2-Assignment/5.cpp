#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    // Variables to store the current word and the maximum word found so far
    string word = "", maxword = "";
    int n = str.length();
    for (int i = 0; i < n; i++) // iteration over each char
    {
        if (str[i] == ' ') // If the current character is a space (word delimiter)
        {
            maxword = max(word, maxword); // Compare the current word with the maximum word found so far
            word = "";                    // Reset the current word for the next word
        }
        else // If the current character is not a space
        {
            word += str[i]; // Append the current "character" to the current word
        }
    }
    maxword = max(word, maxword); // Check the last word after the loop ends
    cout << "Lexicographically maximum word in the given sentence: " << maxword;
    return 0;
}

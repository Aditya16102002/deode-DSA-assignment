#include <iostream>
#include <string>
using namespace std;

bool check(string &s)
{
    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        if (s[i] == s[j]) // if first and last char are same
        {
            i++;
            j--;
        }
        else
        {
            return false; // if not same false will be returned and while loop breaks
            break;
        }
    }
    return true; // if:  else condition was never triggered that means it's a pallindrome so returns true
                 //  compiler reaches here only when else cond. never occurred
}
int main()
{
    int n;
    cout << "Enter the length of string: ";
    cin >> n;
    string str;
    cout << "Enter the string: ";
    cin.ignore(); // always put this between cin(formatted i/p operation) and getline()(unformatted i/p operation) to clear the input buffer
    getline(cin, str);
    cout << (check(str) ? "Yes" : "No"); // if function returns true then print "Yes" and if it returns false then print "No"
}
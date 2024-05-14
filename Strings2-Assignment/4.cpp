#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string s: ";
    cin >> s;
    string t;
    cout << "Enter the string t: ";
    cin >> t;
    vector<int> count(26);
    if (s.size() != t.size())
    {
        cout << "False";
    }
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    bool flag = true;
    for (int i = 0; i < count.size(); i++)
    {
        if (count[i] != 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
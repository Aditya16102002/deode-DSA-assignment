#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int val = 0;
    int pos = 1; // once,tens,hundreds...
    for (int i = s.size() - 1; i >= 0; i--)
    {
        val += (s[i] - 48) * pos; // '0' -> ASCII = 48
        pos *= 10;                // "123" -> (3*1) + (2*10) + (1*100)
    }
    cout << val;
}
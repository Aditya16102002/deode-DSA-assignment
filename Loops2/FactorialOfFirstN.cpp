#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
         cout << fact << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;

    long long low = 1, high = n;
    while (low <= high)
    {
        long long k = low + (high - low) / 2;
        long long m = k * (k + 1) / 2;
        if (m == n)
        {
            cout << "Number of complete rows of the staircase built = " << (int)k;
            return 0;
        }
        else if (m > n)
        {
            high = k - 1;
        }
        else if (m < n)
        {
            low = k + 1;
        }
    }
    cout << "Number of complete rows of the staircase built = " << (int)high;
    return 0;
}
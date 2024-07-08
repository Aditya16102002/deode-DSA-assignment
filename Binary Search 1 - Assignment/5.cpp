#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    long long low = 0, high = num;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (mid * mid == num)
        {
            cout << "The number is a perfect square.";
            return 0;
        }
        else if (mid * mid > num)
        {
            high = mid - 1;
        }
        else if (mid * mid < num)
        {
            low = mid + 1;
        }
    }
    cout << "The number is not a perfect square.";
    return 0;
}
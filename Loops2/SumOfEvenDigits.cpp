#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, digit;
    cout << "Enter a Number: ";
    cin >> n;
    while (n > 0)
    {
        digit = n % 10;
        if (digit % 2 == 0)
        {
            sum += digit;
        }
        n /= 10;
    }

    cout << "Sum of even digits of entered number = " << sum;
    return 0;
}
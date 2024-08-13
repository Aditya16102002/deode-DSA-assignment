#include <iostream>
#include <cmath>
using namespace std;

int helper(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return 1 + helper(num / 10);
}
int reverse(int num, int digits)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) * pow(10, digits - 1) + reverse(num / 10, digits - 1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int digits = helper(num);
    cout << "Reverse of given number = " << reverse(num, digits);
    return 0;
}
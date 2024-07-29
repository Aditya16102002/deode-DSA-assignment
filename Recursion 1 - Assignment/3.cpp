#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 1)
    {
        return true;
    }
    if (n == 0 or n % 2 != 0)
    {
        return false;
    }
    return isPowerOfTwo(n / 2);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPowerOfTwo(n))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
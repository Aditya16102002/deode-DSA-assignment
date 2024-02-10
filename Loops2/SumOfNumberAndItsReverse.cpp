#include <iostream>
using namespace std;
int main()
{
    int n, reverse = 0, a;
    cout << "Enter a Number: ";
    cin >> n;
    a = n;
    while (n > 0)
    {
        reverse *= 10;
        reverse += (n % 10);
        n /= 10;
    }
    int sum = a + reverse;
    cout << sum << " = [" << a << " + " << reverse << "]";
    return 0;
}
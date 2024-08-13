#include <iostream>
using namespace std;

int sum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) + sum(num / 10);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Sum of digits of entered number = " << sum(n);
    return 0;
}
#include <iostream>
using namespace std;

int fact(int num)
{
    if (num == 0 or num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of given number = " << fact(num);
    return 0;
}
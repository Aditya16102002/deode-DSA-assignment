#include <iostream>
using namespace std;

int numberOfSteps(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num % 2 == 0 ? 1 + numberOfSteps(num / 2) : 1 + numberOfSteps(num - 1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of steps to reduce the number to 0 = " << numberOfSteps(num);
    return 0;
}
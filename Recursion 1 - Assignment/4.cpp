#include <iostream>
using namespace std;

// Recursive function to calculate the number of ways to climb n stairs
// where you can take 1, 2, or 3 steps at a time.
int stairs(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (n == 3)
    {
        return 4;
    }
    return stairs(n - 1) + stairs(n - 2) + stairs(n - 3);
}
int main()
{
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Number of possible ways to reach the top of stairs = " << stairs(n);
}
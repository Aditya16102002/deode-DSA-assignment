#include <iostream>
using namespace std;

void sequence(int x, int n)
{
    if (x >= n)
    {
        cout << x << " ";
        return;
    }
    cout << x << " ";
    sequence(x + 1, n);
    cout << x << " ";
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    sequence(1, n);
}
#include <iostream>
using namespace std;

int square(int n)
{
    int square = n * n;
    return square;
}
int main()
{
    int n;
    cout << "Enter the natural number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << square(i) << endl;
    }
    return 0;
}
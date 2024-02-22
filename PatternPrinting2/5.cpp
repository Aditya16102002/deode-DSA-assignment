#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int a = i;
        if (a > n)
        {
            a = 2 * n - i;
        }
        cout << a << " ";
    }
    cout << endl;
    int m = n - 1, nsp = 1;
    for (int i = 1; i <= m; i++)
    {
        int b = 1;
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << b << " ";
            b++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
        }
        nsp += 2;
        for (int j = m + 1 - i; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
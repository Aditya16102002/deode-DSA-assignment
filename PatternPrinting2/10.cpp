#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int nsp1 = 2 * n - 3, nsp2 = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= nsp1; k++)
        {
            cout << " ";
        }
        nsp1 -= 2;
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "*";
        }
        for (int k = 1; k <= nsp2; k++)
        {
            cout << " ";
        }
        nsp2 += 2;
        for (int j = n - 1; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "*"; // I row
    }
    cout << endl;
    int m = n - 1;
    int nsp1 = 1;
    for (int i = 1; i <= m - 1; i++) // form II row(1) to n-2
    {
        for (int j = 1; j <= m + 1 - i; j++) // i+j = m+1 = n
        {
            cout << "*";
        }
        for (int k = 1; k <= nsp1; k++)
        {
            cout << " ";
        }
        nsp1 += 2;
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int nsp2 = 2 * n - 3;        // n=4 -> 5 ; n=5 -> 7
    for (int i = 1; i <= m; i++) // from nth row to IInd last row
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= nsp2; k++)
        {
            cout << " ";
        }
        nsp2 -= 2;
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 2 * n - 1; i++) // last row
    {
        cout << "*";
    }
    return 0;
}
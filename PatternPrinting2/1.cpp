#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        nsp--;
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}
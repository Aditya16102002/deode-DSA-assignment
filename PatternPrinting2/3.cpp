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
        for (int k = i; k >= 1; k--)
        {
            cout << char(64 + k) << " ";
        }
       
            for (int k = 2; k <= i; k++)
            {
                cout << char(64 + k) << " ";
            }
        
        cout << endl;
    }
}
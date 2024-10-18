#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            if (idx1 == -1)
            {
                idx1 = i;
                idx2 = i + 1;
            }
            else
            {
                idx2 = i + 1;
            }
        }
    }
    swap(a[idx1], a[idx2]);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
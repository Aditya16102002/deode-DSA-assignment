#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of Array: ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum value of the Array = " << min;

    return 0;
}
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
    int product = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        product *= arr[i];
    }
    cout << "Product of Array elements = " << product;

    return 0;
}
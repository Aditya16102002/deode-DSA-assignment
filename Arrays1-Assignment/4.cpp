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
    bool flag = false; //indicates no duplicate elements
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i] == arr[j] && i != j) //if i and j are same then index is same and obvio element would be same
            {
                flag = true; //indicates duplicate elements
            }
        }
    }

    if (flag == true)
    {
        cout << "Array contains duplicate elements";
    }
    else
    {
        cout << "Array does not contains duplicate elements";
    }

    return 0;
}
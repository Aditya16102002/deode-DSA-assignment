#include <iostream>
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
    int x = 1;         // 0 is neither positive nor negative
    bool flag = false; // indicates no missing elements
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] < 1)
        {
            continue; // for 0 or negative elements skip
        }

        if (arr[i] != x) // starts from 1; if 1 not present it is the smallest positive missing element
        {
            flag = true; // indicates missing element
            cout << x << " is the smallest missing positive element in the sorted array";
            break;
        }
        else // if present then increse x by 1 and check for its presence
        {
            x++;
        }
    }
    if (flag == false)
    {
        cout << "There is no smallest missing positive element in the sorted array";
    }

    return 0;
}
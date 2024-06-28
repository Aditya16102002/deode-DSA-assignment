#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    vector<string> arr;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
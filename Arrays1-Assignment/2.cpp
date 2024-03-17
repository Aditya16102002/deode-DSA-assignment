#include <bits/stdc++.h> // Header file including various standard libraries
#include <climits>       // Header file for limits of integral types

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
    int max2 = INT_MIN, max1 = INT_MIN; // Initializing two variables to store the maximum and second maximum elements

    for (int i = 0; i <= n - 1; i++)
    {
        if (max1 < arr[i]) // Checking if current element is greater than the current maximum
        {
            max2 = max1;   // If yes, update the second maximum to the previous maximum
            max1 = arr[i]; // Update the maximum to the current element
        }
        else if (max2 < arr[i] && arr[i] != max1) // Checking if current element is greater than the second maximum and not equal to the maximum
        {
            max2 = arr[i]; // If yes, update the second maximum to the current element
        }
    }

    cout << "Second largest element in given Array = " << max2;
    return 0;
}

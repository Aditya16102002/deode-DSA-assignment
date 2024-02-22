#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the vlaue of n: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int a = i; // pseudo var. for i
        if (a > n) // condition to change pseudo var.
        {
            a = 2 * n - i; // Pseudo var. is modified to use the condition to print the required  pattern
        }
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int b = j; // pseudo var. for j
            if (b > n) // condition to change pseudo var.
            {
                b = 2 * n - j; // at any instance a+i=b+j+2*n
            }
            (a + b) == (n + 1) ? cout << "* " : cout << "  "; // after applying pseudo var. , at all instance a+b=n+1
        }
        cout << endl;
    }
    return 0;
}

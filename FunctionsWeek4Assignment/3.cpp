#include <iostream>
using namespace std;

void oddNum(int a, int b)
{
    for (int i = min(a, b) + 1; i < max(a, b); i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    oddNum(a, b);
    return 0;
}
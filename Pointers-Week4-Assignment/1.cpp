#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int *p1 = &a;
    cout << "Enter first Number: ";
    cin >> *p1;
    int b;
    int *p2 = &b;
    cout << "Enter second Number: ";
    cin >> *p2;
    cout << "Product of entered Number = " << (*p1) * (*p2);
    return 0;
}
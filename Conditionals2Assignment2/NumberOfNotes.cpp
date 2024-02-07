#include <iostream>
using namespace std;
int main()
{
    int n2000 = 0, n500 = 0, n200 = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    int amt;
    cout << "Enter the Amount: ";
    cin >> amt;
    switch (1)
    {
    case 1:
        n2000 = amt / 2000;
        amt -= (2000 * n2000);
    case 2:
        n500 = amt / 500;
        amt -= (500 * n500);
    case 3:
        n200 = amt / 200;
        amt -= (200 * n200);
    case 4:
        n100 = amt / 100;
        amt -= (100 * n100);
    case 5:
        n50 = amt / 50;
        amt -= (50 * n50);
    case 6:
        n20 = amt / 20;
        amt -= (20 * n20);
    case 7:
        n10 = amt / 10;
        amt -= (10* n10);
    case 8:
        n5 = amt / 5;
        amt -= (5 * n5);
    case 9:
        n2 = amt / 2;
        amt -= (2 * n2);
    case 10:
        n1 = amt / 1;
        amt -= (1 * n1);
    }
    if (n2000 > 0)
        cout << "Notes of 2000 = " << n2000 << endl;
    if (n500 > 0)
        cout << "Notes of 500 = " << n500 << endl;
    if (n200 > 0)
        cout << "Notes of 200 = " << n200 << endl;
    if (n100 > 0)
        cout << "Notes of 100 = " << n100 << endl;
    if (n50 > 0)
        cout << "Notes of 50 = " << n50 << endl;
    if (n20 > 0)
        cout << "Notes of 20 = " << n20 << endl;
    if (n10 > 0)
        cout << "Notes of 10 = " << n10 << endl;
    if (n5 > 0)
        cout << "Notes of 5 = " << n5 << endl;
    if (n2 > 0)
        cout << "Notes of 2 = " << n2 << endl;
    if (n1 > 0)
        cout << "Notes of 1 = " << n1 << endl;
}
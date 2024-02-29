#include <iostream>
using namespace std;
void countAndSquare(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    cout << "Number of digits in the entered Number = " << count << endl;
    cout << "Square of number of digits = " << count * count;
}

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    countAndSquare(n);
}

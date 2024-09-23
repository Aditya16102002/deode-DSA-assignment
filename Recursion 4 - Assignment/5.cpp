#include <iostream>
using namespace std;

void decTobin(int num)
{
    // Example: Convert 13 to binary.
    // Step 1: Call decTobin(13)
    // Step 2: Call decTobin(6) (13 / 2)
    // Step 3: Call decTobin(3) (6 / 2)
    // Step 4: Call decTobin(1) (3 / 2)
    // Step 5: Call decTobin(0) (1 / 2) - base case reached, return.
    // Now, as the recursion unwinds:
    // Step 6: Print 1 (1 % 2), representing the least significant bit.
    // Step 7: Print 1 (3 % 2).
    // Step 8: Print 0 (6 % 2).
    // Step 9: Print 1 (13 % 2).
    // The output will be "1101", which is the binary representation of 13.
    if (num == 0)
    {
        return;
    }
    decTobin(num / 2);
    cout << num % 2;
}

int main()
{
    int num;
    cout << "Enter a number in decimal representation: ";
    cin >> num;
    cout << "Binary representation of the given number = ";
    decTobin(num);
}

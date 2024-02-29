#include <iostream>
using namespace std;

float areaOfCircle(int r)
{
    float area = 3.14159 * r * r;
    return area;
}
int main()
{
    int r;
    cout << "Enter the radius of circle: ";
    cin >> r;
    cout << "area of circle = " << areaOfCircle(r);
    return 0;
}
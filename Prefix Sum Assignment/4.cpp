#include <bits/stdc++.h>
using namespace std;

vector<int> corpFlightBookings(vector<vector<int>> &bookings, int n)
{
    vector<int> seats(n);
    for (int i = 0; i < bookings.size(); i++)
    {
        seats[bookings[i][0] - 1] += bookings[i][2];
        if (bookings[i][1] < n)
        {
            seats[bookings[i][1]] -= bookings[i][2];
        }
    }
    for (int i = 1; i < n; i++)
    {
        seats[i] += seats[i - 1];
    }
    return seats;
}

int main()
{
    int m;
    cout << "Enter the number of bookings: ";
    cin >> m;
    int n;
    cout << "Enter the number of flights: ";
    cin >> n;
    vector<vector<int>> bookings(m, vector<int>(3));
    cout << "Enter the first, last, and seats for each bookings respectively: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> bookings.at(i).at(j);
        }
    }
    vector<int> seats = corpFlightBookings(bookings, n);
    cout << "The total number of seats reserved by each flights 1 to n = " << endl;
    for (auto ele : seats)
    {
        cout << ele << " ";
    }
    return 0;
}
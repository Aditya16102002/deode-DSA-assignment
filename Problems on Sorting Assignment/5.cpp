#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    float kmin = float(INT_MIN), kmax = float(INT_MAX);
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if ((v[i - 1] - v[i]) >= 0)
        {
            kmin = max(kmin, float(v[i - 1] + v[i]) / 2);
        }
        else if ((v[i - 1] - v[i]) <= 0)
        {
            kmax = min(kmax, float(v[i - 1] + v[i]) / 2);
        }
        if (kmin > kmax)
        {
            flag = false;
            break;
        }
    }

    int kminINT = ceil(kmin);
    int kmaxINT = floor(kmax);

    if (flag = true && kminINT <= kmaxINT)
    {
        cout << "Range of integer k = [" << kminINT << "," << kmaxINT << "]";
    }
    else
    {
        cout << "No valid integer k exists.";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter array Elements: ";
    vector<int> v;
    for (int i = 0; i <= n - 1; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        bool flag = true; // indicates unique; initialize flag->true for each element and check if it is actually true(unique) by inner loop
        for (int j = 0; j <= v.size() - 1; j++)
        {
            if (i != j && v[i] == v[j]) // same index elements are always equal
            {
                flag = false; // break the innerloop because it is non-unique
                break;
            }
        }
        if (flag == true) // now even after inner loop if flag is true then that element is unique; print it
        {                 // and terminate the outer for loop which terminates both the loops
            cout << "Unique element of the given array = " << v[i];
            break;
        }
    }
}
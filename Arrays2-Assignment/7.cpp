#include <bits/stdc++.h>
using namespace std;

int palindrome(vector<int> &v)
{
    int i = 0, j = v.size() - 1;
    bool flag = false;
    while (i <= j)
    {
        if (v[i] == v[j])
        {
            flag = true;
        }
        else
        {
            flag = false; // indicates not a palindrome; make flag false and terminate the while loop
            break;
        }
        i++;
        j--;
    }
    if (flag == true) // indicates palindrome
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
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
    if (palindrome(v) == 1)
    {
        cout << "Given array is a palindrome";
    }
    else
    {
        cout << "Given array is not a palindrome";
    }
    return 0;
}
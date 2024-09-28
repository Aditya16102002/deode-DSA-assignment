#include <iostream>
#include <vector>
using namespace std;

void mergeDec(vector<int> &a, vector<int> &b, vector<int> &v)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] >= b[j])
        {
            v[k++] = a[i++];
        }
        else
        {
            v[k++] = b[j++];
        }
    }
    if (i == a.size())
    {
        while (j < b.size())
        {
            v[k++] = b[j++];
        }
    }
    else if (j == b.size())
    {
        while (i < a.size())
        {
            v[k++] = a[i++];
        }
    }
}
void mergeSortDec(vector<int> &v)
{
    int n = v.size();
    if (n == 1)
    {
        return;
    }
    int n1 = n / 2, n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = v[n1 + i];
    }
    mergeSortDec(a);
    mergeSortDec(b);
    mergeDec(a, b, v);
    a.clear();
    b.clear();
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v;
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << "Vector before sorting: " << endl;
    for (auto &ele : v)
    {
        cout << ele << " ";
    }
    cout<<"\n";
    mergeSortDec(v);
    cout << "Vector before sorting: " << endl;
    for (auto &ele : v)
    {
        cout << ele << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int countReverse(vector<int> &a, vector<int> &b)
{
    int i = 0, j = 0;
    int count = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > (long long)2 * (long long)b[j])
        {
            count += (a.size() - i);
            j++;
        }
        else
        {
            i++;
        }
    }
    return count;
}

void mergeArrays(vector<int> &a, vector<int> &b, vector<int> &v)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
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

int mergeSortcountRP(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    if (n == 1)
    {
        return 0;
    }
    int n1 = n / 2, n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++)
    {
        a[i] = nums[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = nums[n1 + i];
    }
    count += mergeSortcountRP(a);
    count += mergeSortcountRP(b);
    count += countReverse(a, b);
    mergeArrays(a, b, nums);
    a.clear();
    b.clear();
    return count;
}

int reversePairs(vector<int> &nums)
{
    return mergeSortcountRP(nums);
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << "Number of reverse pairs in the array = " << reversePairs(nums);
    return 0;
}
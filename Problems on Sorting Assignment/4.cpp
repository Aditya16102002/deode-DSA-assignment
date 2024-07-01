#include <bits/stdc++.h>
using namespace std;

int minimum_operations(vector<int> &arr, int n)
{

    map<int, vector<int>> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]].push_back(i);
    }
    queue<int> q;
    set<int> st;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (st.find(arr[i]) == st.end() && arr[i] != 0)
        {
            q.push(arr[i]);
            st.insert(arr[i]);
        }
        if (arr[i] > arr[i + 1])
        {
            count += q.size();
            while (!q.empty())
            {
                int top = q.front();
                q.pop();

                if (mpp.find(top) != mpp.end())
                {
                    vector<int> idx = mpp[top];
                    for (int i = 0; i < idx.size(); i++)
                    {
                        arr[idx[i]] = 0;
                    }
                }
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << minimum_operations(arr, n);
    return 0;
}

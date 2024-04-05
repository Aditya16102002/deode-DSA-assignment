// 59. Spiral Matrix II
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generateMatrix(int n)
{
    int element = 1;
    vector<vector<int>> matrix(n, vector<int>(n));
    int minr = 0, maxr = n - 1;
    int minc = 0, maxc = n - 1;
    while (minr <= maxr && minc <= maxc)
    {
        for (int j = minc; j <= maxc; j++) // right
        {
            matrix[minr][j] = element; // 1
            element++;                 // 1->2 and so on
        }
        minr++;
        if (minr > maxr || minc > maxc)
            break;
        for (int i = minr; i <= maxr; i++) // down
        {
            matrix[i][maxc] = element;
            element++;
        }
        maxc--;
        if (minr > maxr || minc > maxc)
            break;
        for (int j = maxc; j >= minc; j--) // left
        {
            matrix[maxr][j] = element++; // element is printed and incremented
        }
        maxr--;
        if (minr > maxr || minc > maxc)
            break;
        for (int i = maxr; i >= minr; i--) // Up
        {
            matrix[i][minc] = element++;
        }
        minc++;
    }
    return matrix;
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<vector<int>> res = generateMatrix(n); // store the result in new 2D vector res
    for (int i = 0; i < res.size(); i++)         // print res
    {
        for (int j = 0; j < res[0].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
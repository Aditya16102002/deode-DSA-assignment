// 73. Set Matrix Zeroes
#include <bits/stdc++.h>
using namespace std;

// Method 1: Using extra 2-D vector to preserve the values. Space complexity: o(m x n)
void setZeroesM1(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> copy(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            copy[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (copy[i][j] == 0)
            {
                // set 0s at ith row
                for (int c = 0; c < n; c++)
                {
                    matrix[i][c] = 0;
                }

                // set 0s at jth column
                for (int r = 0; r < m; r++)
                {
                    matrix[r][j] = 0;
                }
            }
        }
    }
}

// Method 2: Using two boolean 1-D vector: less space is consumed. Space complexity: o(m + n)
void setZeroesM2(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<bool> row(m, false);
    vector<bool> col(n, false); // false means we don't have to set zero
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = true; // true means 0 set karna hai
                col[j] = true;
            }
        }
    }
    // set row zero
    for (int i = 0; i < m; i++)
    {
        if (row[i] == true)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    // set col zero
    for (int j = 0; j < n; j++)
    {
        if (col[j] == true)
        {
            for (int i = 0; i < m; i++)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

// Method 3: Using constant space -> treating 1st row as row vector and 1st column as column vector to keep the track of 0s. Space complexity:o(1)
void setZeroesM3(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    // Step 1: keep the track for 0th row and col by two bool variable
    bool zerothRow = false; // false means there is no 0 in 0th row
    bool zerothCol = false; // false means there is no 0 in 0th col
    // Step 2: if there is 0 in 0th row or col make the zerothRow or zerothCol variable True
    for (int i = 0; i < m; i++)
    {
        if (matrix[i][0]) // checking for 0th col
        {
            zerothCol = true; // true means there is a 0 in 0th col
            break;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (matrix[0][j] == 0) // checking for 0th row
        {
            zerothRow = true; // true means there is a 0 in 0th row
        }
    }
    // step 3: Treat 0th row and 0th col as row vector and col vector respectively from 1 index and make them 0 if corr. elt. is 0
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] == 0) // if any elt 0
            {
                matrix[0][j] = 0; // col vector: then corr. 0th row elt. -> 0
                matrix[i][0] = 0; // row vector: and corr. 0th col elt. -> 0
            }
        }
    }
    // step 4: Now according to 0th row and 0th col make entire row and col as 0
    for (int i = 1; i < m; i++)
    {
        if (matrix[i][0] == 0) // row vector: if any elt. in 0th col is 0 make that entire row as 0
        {
            for (int j = 1; j < n; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    for (int j = 1; j < n; j++)
    {
        if (matrix[0][j] == 0) // col vector: if any elt. in 0th row is 0 make that entire col as 0
        {
            for (int i = 1; i < m; i++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    // step 5: Now if zerothRow or zerothCol is true make all elt. of 0th row and 0th col as 0 respectively
    if (zerothRow == true)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[0][j] = 0; // all elt. of 0th row -> 0
        }
    }
    if (zerothCol == true)
    {
        for (int i = 0; i < m; i++)
        {
            matrix[i][0] = 0; // all elt. of 0th col -> 0
        }
    }
}

int main()
{
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;
    int n;
    cout << "Enter the number of columns: ";
    cin >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements of matrix: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    setZeroesM3(matrix);
    cout << "Modified matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
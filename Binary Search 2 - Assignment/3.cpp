#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int low = 0, high = (m * n) - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int row = mid / n;
        int col = mid % n;
        if (matrix[row][col] == target)
        {
            return true;
        }
        else if (matrix[row][col] > target)
        {
            high = mid - 1;
        }
        else if (matrix[row][col] < target)
        {
            low = mid + 1;
        }
    }
    return false;
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
    cout << "Enter the elements of matrix in sorted order: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int target;
    cout << "Enter the target to be searched in the matrix: ";
    cin >> target;
    if (searchMatrix(matrix, target))
    {
        cout << "The target is present in the given matrix.";
    }
    else
    {
        cout << "Target not found.";
    }
    return 0;
}
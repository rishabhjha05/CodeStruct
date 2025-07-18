/*Q1. Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.*/
#include <iostream>
#include <vector>
using namespace std;
void solution(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    vector<bool> row(m, false), column(n, false);
    // First pass: find zeroes
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            if (matrix[i][j] == 0)
            {
                row[i] = true;
                column[j] = true;
            }
    }
    // Second pass: set rows to zero
    for (int i = 0; i < m; i++)
    {
        if (row[i] == true)
        {
            for (int j = 0; j < n; j++)
                matrix[i][j] = 0;
        }
    }
    // Second pass: set columns to zero
    for (int j = 0; j < n; j++)
    {
        if (column[j] == true)
        {
            for (int i = 0; i < m; i++)
                matrix[i][j] = 0;
        }
    }
}
int main()
{
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of column : ";
    cin >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the element at (" << i << "," << j << ") : ";
            cin >> matrix[i][j];
        }
    }
    cout << "The required solution matrix is : \n";
    solution(matrix);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
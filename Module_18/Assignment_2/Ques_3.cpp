/*Q3: You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target , return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity. [Leetcode 74]*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;
    vector<vector<int>> matrix(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the element at (" << i << "," << j << ") coordinate : ";
            cin >> matrix[i][j];
        }
    }
    

    return 0;
}
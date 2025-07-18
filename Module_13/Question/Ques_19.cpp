#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int matrixScore(vector<vector<int>> &grid)
{
    int r = grid.size(), c = grid[0].size();
    for (int i = 0; i < r; i++)
    {
        if (grid[i][0] == 0)
        {
            for (int j = 0; j < c; j++)
                grid[i][j] = 1 - grid[i][j];
        }
    }
    for (int j = 1; j < c; j++)
    {
        int no_0 = 0, no_1 = 0;
        for (int i = 0; i < r; i++)
        {
            if (grid[i][j] == 0)
                no_0++;
            else
                no_1++;
        }
        if (no_0 > no_1)
        {
            for (int i = 0; i < r; i++)
                grid[i][j] = 1 - grid[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        int x = 1;
        for (int j = c - 1; j >= 0; j--)
        {
            sum += grid[i][j] * x;
            x *= 2;
        }
    }

    return sum;
}
int main()
{
    int r, c;
    cout << "Entre the number of rows : ";
    cin >> r;
    cout << "Entre the number of column : ";
    cin >> c;

    vector<vector<int>> grid(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at (" << i << "," << j << ") : ";
            cin >> grid[i][j];
        }
    }
    cout << "Highest possible score for given matirx is : " << matrixScore(grid);

    return 0;
}
// for (int i = 0; i < r; i++)
// {
//     for (int j = 0; j < c; j++)
//     {
//         cout << grid[i][j] << " ";
//     }
//     cout << endl;
// }
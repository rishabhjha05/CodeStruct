#include <iostream>
#include <vector>
using namespace std;
bool found(vector<vector<int>> matrix, int target)
{
    int r = matrix.size(), c = matrix[0].size(), i = 0, j = c - 1;
    while (i < r && j >= 0)
    {
        if (target > matrix[i][j])
            i++;
        if (j < 0 || i >= r)
            break;
        if (target < matrix[i][j])
            j--;
        if (j < 0 || i >= r)
            break;
        else if (target == matrix[i][j])
            return true;
    }
}
int main()
{
    int r, c, target;
    cout << "Enter the number of rows : ";
    cin >> r;
    cout << "Enter the number of column : ";
    cin >> c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at (" << i << "," << j << ") : ";
            cin >> matrix[i][j];
        }
    }
    cout << "Enter the target element : ";
    cin >> target;
    if (!found(matrix, target))
        cout << "The target element not found in the given matrix.";
    else
        cout << "The target element found in the given matrix.";

    return 0;
}

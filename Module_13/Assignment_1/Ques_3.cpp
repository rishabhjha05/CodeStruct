/* Write a C++ program to find the largest element of a given 2D array of integers. */
#include <iostream>
#include <limits.h>

using namespace std;
int main()
{
    int r, c, max = INT_MIN;
    cout << "Enter the number of rows for matrix : ";
    cin >> r;
    cout << "Enter the number of column for matrix : ";
    cin >> c;
    int arr[r][c];
    cout << "Enter the elements of the given array \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at (" << i << "," << j << ") coordinate : ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            if (max < arr[i][j])
                max = arr[i][j];
    }
    cout << "The max element in the given 2D array is : " << max;

    return 0;
}
/*Write a program to print the row number having the maximum sum in a given matrix*/
#include <iostream>
#include <limits.h>
using namespace std;
string sufix(int i)
{
    if (i == 0)
        return "st";
    else if (i == 1)
        return "nd";
    else if (i == 2)
        return "rd";
    else
        return "th";
}
int main()
{
    int r, c, max = INT_MIN, max_idx = -1;
    cout << "Enter the number of rows for matrix : ";
    cin >> r;
    cout << "Enter the number of column for matrix : ";
    cin >> c;
    int arr[r][c], arr2[r];
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
        int sum = 0;
        for (int j = 0; j < c; j++)
            sum += arr[i][j];
        arr2[i] = sum;
    }
    for (int i = 0; i < r; i++)
    {
        if (max < arr2[i])
        {
            max = arr2[i];
            max_idx = i;
        }
    }
    cout << "The " << max_idx + 1 << sufix(max_idx) << " row have maximum sum of : " << max;
    return 0;
}
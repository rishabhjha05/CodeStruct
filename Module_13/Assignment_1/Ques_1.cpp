/*Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
Write a program to add two matrices and save the result in one of the given matrices.*/
#include <iostream>
using namespace std;
int main()
{
    int arr1[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            arr1[i][j] = 10;
    }
    int r, c;
    cout << "Enter the number of rows for matrix to be added: ";
    cin >> r;
    cout << "Enter the number of column for matrix to be added : ";
    cin >> c;

    int arr2[r][c], arr3[r][c], arr[r][c];
    cout << "Enter the elements for first matrix : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at (" << i << "," << j << ") coordinate : ";
            cin >> arr2[i][j];
        }
    }
    cout << "Enter the elements for second matrix : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at (" << i << "," << j << ") coordinate : ";
            cin >> arr3[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            arr[i][j] = arr2[i][j] + arr3[i][j];
    }
    cout << "The sum of given two matrix is : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}

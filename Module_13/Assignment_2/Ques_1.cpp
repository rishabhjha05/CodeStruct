/*Q1. Write a program to print the elements of both the diagonals in a square matrix.*/
#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout<< "Enter the number of rows : ";
    cin >> r;
    cout << "Enter the number of column : ";
    cin >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at  (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
                cout << arr[i][j] << " ";

            else if ((c - j - 1) == i)
                cout << arr[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
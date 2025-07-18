#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    int r1, c1;
    cout << "Enter the number of rows for matrix to be added : ";
    cin >> r1;
    cout << "Enter the number of column for matrix to be added : ";
    cin >> c1;
    int arr[r1][c1];
    cout << "\nEnter element for first matrix : \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter the element at the coordinate (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    cout << "\n\nEnter element for second matrix : \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            int x;
            cout << "Enter the element at the coordinate (" << i << "," << j << ") : ";
            cin >> x;
            arr[i][j] = arr[i][j] + x;
        }
    }

    cout << "\nThe sum of given two matrices is : \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
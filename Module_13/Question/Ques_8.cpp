#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cout << "Enter the number of rows for first matrix : ";
    cin >> r1;
    cout << "Enter the number of column for first matrix : ";
    cin >> c1;
    cout << "Enter the number of rows for second matrix : ";
    cin >> r2;
    cout << "Enter the number of column for second matrix : ";
    cin >> c2;
    if (c1 != r2)
    {
        cout << "The multiplication of given two matrix is not possible in this order.";
        return 1;
    }
    else
    {
        int arr1[r1][c1], arr2[r2][c2];
        cout << "\nEnter the element of the first matrix : \n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << "Enter the element at (" << i << "," << j << ") : ";
                cin >> arr1[i][j];
            }
        }
        cout << "\nEnter the element of the second matrix : \n";
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << "Enter the element at (" << i << "," << j << ") : ";
                cin >> arr2[i][j];
            }
        }

        int res[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < r2; k++)
                    res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
        cout << "The result of multuiplication of given two matrix gives : \n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}
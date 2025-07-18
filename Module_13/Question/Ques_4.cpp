#include <iostream>
#include <limits.h>

using namespace std;
int row()
{
    int r;
    cout << "Enter the number of rows : ";
    cin >> r;
    return r;
}
int column()
{
    int c;
    cout << "Enter the number of column: ";
    cin >> c;
    return c;
}

int main()
{

    int r1 = row(), c1 = column();
    int arr[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter the element at the coordinate (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    int r2 = row(), c2 = column();
    int arr2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter the element at the coordinate (" << i << "," << j << ") : ";
            cin >> arr2[i][j];
        }
    }
    if (r1 == r2 && c1 == c2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
                arr[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    else
    {
        cout << "Given two matrices can't be added because their dimensions are not same,";
        return 1;
    }
    cout << "The sum of given two matrices is : \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
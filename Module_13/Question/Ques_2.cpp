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

int r = row(), c = column();
int main()
{
    int max = INT_MIN, max2 = INT_MIN;

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at the coordinate (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] > max)
            {
                max2 = max;
                max = arr[i][j];
            }
            else if (arr[i][j] > max2 && arr[i][j] != max)
                max2 = arr[i][j];
        }
    }
    cout << "\nThe second largest element in the given array is : " << max2;
    return 0;
}
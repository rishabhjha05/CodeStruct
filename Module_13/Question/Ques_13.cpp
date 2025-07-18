#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of rows : ";
    cin >> r;
    cout << "Enter the number of column : ";
    cin >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    cout << "Given matrix is : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    cout << "The wavy form of the given matrix is : ";
    for (int j = 0; j < c; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < r; i++)
                cout << arr[i][j] << " ";
        }
        else
        {
            for (int i = r - 1; i >= 0; i--)
                cout << arr[i][j] << " ";
        }
    }
}
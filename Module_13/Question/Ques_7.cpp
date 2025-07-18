#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows and column : ";
    cin >> r;
    int arr[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << "Enter the element at coordinate (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    for (int k = 0; k < r; k++) // flipping over diagonal
    {
        for (int l = k + 1; l < r; l++)
        {

            int temp = arr[k][l];
            arr[k][l] = arr[l][k];
            arr[l][k] = temp;
        }
    }
    for (int i = 0; i < r; i++)
    {
        int k = 0, l = r - 1;
        while (k < l)
        {
            int temp = arr[i][k];
            arr[i][k++] = arr[i][l];
            arr[i][l--] = temp;
        }
    }
    cout << "The rotated matrix of given matrix is : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
            cout << arr[i][j];
        cout << endl;
    }

    return 0;
}
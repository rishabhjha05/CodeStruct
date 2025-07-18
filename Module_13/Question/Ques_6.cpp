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
    cout << "\nThe transpose matrix of given matrix is : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
            cout << arr[i][j];
        cout << endl;
    }

    return 0;
}
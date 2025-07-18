#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of rows : ";
    cin >> r;
    cout << "Enter the number of column : ";
    cin >> c;
    int arr[r][c], tran[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at coordinate (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    for (int k = 0; k < c; k++)
    {
        for (int l = 0; l < r; l++)
            tran[k][l] = arr[l][k];
    }
    cout << "The transpose of the given matrix is : \n";
    for (int k = 0; k < c; k++)
    {
        for (int l = 0; l < r; l++)
            cout << tran[k][l] << " ";
        cout << endl;
    }
    return 0;
}

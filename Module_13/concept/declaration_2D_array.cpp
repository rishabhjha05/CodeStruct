#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of row : ";
    cin >> r,
        cout << "Enter the number of column : ";
    cin >> c;
    int arr[r][c]; // this declares the array of r row and c column
    /*for r=3 and c=4 this create 3 array of size 4
    arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}} three array of 4 size
    array can be intialize in such ways
    arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}
    arr[][3]={1,2,3,4,5,6} we can declare row or not but we have to
    declare the column compulsory */
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter " << i << "," << j << " Element : ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
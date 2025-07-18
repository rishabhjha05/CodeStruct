/*Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).*/
#include <iostream>
using namespace std;
int main()
{
    int r, c, l1, l2, r1, r2, sum = 0;
    cout << "Enter the number of rows for matrix : ";
    cin >> r;
    cout << "Enter the number of column for matrix : ";
    cin >> c;
    int arr[r][c];
    cout << "Enter the elements of the given array \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at (" << i << "," << j << ") coordinate : ";
            cin >> arr[i][j];
        }
    }
    cout << "Enter the first coordinate : ";
    cin >> l1 >> r1;
    cout << "Enter the second coordinate : ";
    cin >> l2 >> r2;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
            sum += arr[i][j];
    }
    cout << "The sum of all the element in the given array in this given region is : " << sum;
    return 0;
}
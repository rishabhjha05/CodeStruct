/*Write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]*/
#include <iostream>
using namespace std;
void function(int arr[3][3])
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i == n / 2 || j == n / 2)
                cout << arr[i][j] << " ";
            else
                cout << "  ";
        cout << endl;
    }
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {8, 9, 0}};
    function(arr);
    return 0;
}

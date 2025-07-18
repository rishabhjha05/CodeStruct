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
    int min_r = 0, max_r = r - 1, min_c = 0, max_c = c - 1;
    while (min_r <= max_r && min_c < max_c)
    {
        if (min_c > max_c)
            break;
        for (int j = min_c; j <= max_c; j++)
            cout << arr[min_r][j] << " ";
        min_r++;
        if (min_r > max_r)
            break;
        for (int i = min_r; i <= max_r; i++)
            cout << arr[i][max_c] << " ";
        max_c--;
        if (min_c > max_c)
            break;
        for (int j = max_c; j >= min_c; j--)
            cout << arr[max_r][j] << " ";
        max_r--;
        if (min_r > max_r)
            break;
        for (int i = max_r; i >= min_r; i--)
            cout << arr[i][min_c] << " ";
        min_c++;
    }
}
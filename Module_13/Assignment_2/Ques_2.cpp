/*Q2. Write a program to rotate the matrix by 90 degrees anti-clockwise.*/
#include <iostream>
#include <vector>
#include <utility>
using namespace std;
void rotate(vector<vector<int>> &vec)
{
    int c = vec.size(), r = vec[0].size();

    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < c; j++)
            swap(vec[i][j], vec[j][i]);
    }

    for (int j = 0; j < c; j++)
    {
        int k = 0, l = r - 1;
        while (k < l)
            swap(vec[k++][j], vec[l--][j]);
    }
}

int main()
{
    int r, c;
    cout << "Enter the number of rows : ";
    cin >> r;
    cout << "Enter the number of column : ";
    cin >> c;
    vector<vector<int>> vec(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at (" << i << "," << j << ") : ";
            cin >> vec[i][j];
        }
    }
    cout << "The rotated matrix of given matrix is : \n";
    rotate(vec);
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    return 0;
}
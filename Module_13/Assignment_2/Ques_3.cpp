/*Q3. Write a program to print the matrix in wave form.*/
#include <iostream>
#include <vector>

using namespace std;
void wave(vector<vector<int>> vec)
{
    int r = vec.size(), c = vec[0].size();
    for (int j = 0; j < c; j++)
    {
        if (j % 2 == 0)
            for (int i = r - 1; i >= 0; i--)
                cout << vec[i][j] << " ";
        else
            for (int i = 0; i < r; i++)
                cout << vec[i][j] << " ";
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
    cout << "The given matrix is \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    cout << "The wave from of given matrix is : \n";
    wave(vec);
    return 0;
}
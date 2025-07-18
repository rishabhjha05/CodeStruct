/*Q4 Given a positive integer n, generate a n*n matrix filled with elements from 1 to n^2 in spiral order.*/
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> spiral_matrix(int n)
{
    vector<vector<int>> sol(n, vector<int>(n));
    int min_r = 0, min_c = 0, max_r = n - 1, max_c = n - 1, count = 1;
    // min_r<max_r&&min_c<max_c
    while (count <= n * n)
    {
        for (int j = min_c; j <= max_c && count <= n * n; j++)
        {
            sol[min_r][j] = count;
            count++;
        }
        min_r++;
        for (int i = min_r; i <= max_r && count <= n * n; i++)
        {
            sol[i][max_c] = count;
            count++;
        }
        max_c--;
        for (int j = max_c; j >= min_c && count <= n * n; j--)
        {
            sol[max_r][j] = count;
            count++;
        }
        max_r--;
        for (int i = max_r; i >= min_r && count <= n * n; i--)
        {
            sol[i][min_c] = count;
            count++;
        }
        min_c++;
    }
    return sol;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    vector<vector<int>> vec = spiral_matrix(n);
    cout << "The required matrix is : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    return 0;
}
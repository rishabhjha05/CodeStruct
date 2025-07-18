#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> sol;

    for (int i = 0; i < numRows; i++)
    {
        vector<int> v(i + 1);
        sol.push_back(v);
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                sol[i][j] = 1;
            else
                sol[i][j] = sol[i - 1][j] + sol[i - 1][j - 1];
        }
    }
    return sol;
}
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    vector<vector<int>> sol = generate(n);
    for (int i = 0; i < n; i++)
    {
        for (int k = n - 1; k > i; k--)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << sol[i][j] << " ";

        cout << endl;
    }

    return 0;
}
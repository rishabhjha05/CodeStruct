#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp--;
        for (int k = 1; k <= i; k++)
        {
            cout << (char)(k + 64);
        }
        cout << endl;
    }

    return 0;
}
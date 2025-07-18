#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int m = n;
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        if (i <= n)
            cout << i;
        else
        {
            m--;
            cout << m;
        }
    }
    cout << endl;
    int nsp = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp += 2;
        for (int j = n - i; j >= 1; j--)
        {
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}
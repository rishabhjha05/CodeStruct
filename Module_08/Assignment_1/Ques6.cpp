#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout<<"Enter the vale of m and n respectively : ";
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == m || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }

    return 0;
}
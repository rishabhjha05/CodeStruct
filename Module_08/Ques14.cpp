#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    int nst = 1, nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        nsp--;
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        nst += 2;
        cout << endl;
    }
    nsp++;
    nst -= 2;
    for (int i = 1; i <= n; i++)
    {
        nsp++;
        nst -= 2;
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
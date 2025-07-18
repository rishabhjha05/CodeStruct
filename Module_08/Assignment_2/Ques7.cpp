#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of row : ";
    cin >> n;
    if (n % 2 != 0)
    {
        int nst = 1, nsp = n / 2;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= nsp; j++)
            {
                cout << " ";
            }
            if (i < n / 2 + 1)
                nsp--;
            else
                nsp++;
            for (int k = 1; k <= nst; k++)
            {
                if (k == 1 || k == nst)
                    cout << "*";
                else
                    cout << " ";
            }
            if (i < n / 2 + 1)
                nst += 2;
            else
                nst -= 2;
            cout << "\n";
        }
    }
    else
        cout << "invalid number of row for the given pattern.";
    return 0;
}
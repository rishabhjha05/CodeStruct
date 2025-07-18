#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of row : ";
    cin >> n;
    if (n % 2 != 0)
    {
        int nst = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= nst; j++)
            {
                cout << "*";
            }
            if (i < n / 2 + 1)
                nst++;
            else
                nst--;
            cout << "\n";
        }
    }
    else
        cout << "invalid number of rows";
    return 0;
}
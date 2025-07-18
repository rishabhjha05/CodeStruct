#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int nst1 = n - 1, nst2 = n - 1, nsp = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int j = 1; j < n; j++)
    {
        int x = 1;
        for (int k = 1; k <= nst1; k++)
        {
            cout << x << " ";
            x++;
        }
        nst1--;
        for (int l = 1; l <= nsp; l++)
        {
            cout << "  ";
            x++;
        }
        nsp += 2;
        for (int m = 1; m <= nst2; m++)
        {
            cout << x << " ";
            x++;
        }
        cout << "\n";
        nst2--;
    }

    return 0;
}
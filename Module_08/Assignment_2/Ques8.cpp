#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    int nsp1 = n - 2, nsp2 = 1;
    for (int l = 1; l <= n - 1; l++)
    {
        cout << " ";
    }
    cout << 1 << "\n";

    for (int i = 2; i <= n; i++)
    {
        for (int k = 1; k <= nsp1; k++)
        {
            cout << " ";
        }
        nsp1--;
        cout << i;
        for (int j = 1; j <= nsp2; j++)
        {
            cout << " ";
        }
        nsp2 += 2;
        cout << i;
        cout << "\n";
    }

    return 0;
}

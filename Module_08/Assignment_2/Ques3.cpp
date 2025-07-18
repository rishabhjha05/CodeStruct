#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp--;
        int m = 65 + i;
        for (int k = 1; k <= i; k++)
        {
            m--;
            cout << (char)m;
        }
        for (int l = 1; l < i; l++)
        {
            m++;
            cout << (char)m;
        }

        cout << endl;
    }

    return 0;
}
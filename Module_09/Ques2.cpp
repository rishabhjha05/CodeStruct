#include <iostream>
using namespace std;
int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int combi(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int nst = 1, nsp = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < nsp; k++)
        {
            cout << " ";
        }
        nsp--;
        for (int j = 0; j < nst; j++)
        {
            cout << combi(i, j) << " ";
        }
        nst += 1;

        cout << "\n";
    }

    return 0;
}
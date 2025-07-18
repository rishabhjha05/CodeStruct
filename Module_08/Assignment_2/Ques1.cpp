#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int nsp = n - 1, non = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp--;
        int m = 1;
        for (int k = 1; k <= non; k++)
        {
            cout << m;
            m++;
        }
        non += 2;
        cout << endl;
    }

    return 0;
}
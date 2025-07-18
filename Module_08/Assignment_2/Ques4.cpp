#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 65; i < 65 + (n * 2 - 1); i++)
    {
        cout << (char)i;
    }
    cout << endl;
    int nsp = 1;
    for (int i = 1; i < n; i++)
    {
        int p = 65;
        for (int j = n - i; j >= 1; j--)
        {
            cout << (char)p;
            p++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
            p++;
        }
        nsp += 2;
        for (int j = n - i; j >= 1; j--)
        {
            cout << (char)p;
            p++;
        }
        cout << "\n";
    }

    return 0;
}
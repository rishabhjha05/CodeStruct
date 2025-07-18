#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int nsp = n - 1;
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp--;
        int curr = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << curr << " ";
            curr = curr * (i - j) / (j + 1);
        }
        cout << "\n";
    }

    return 0;
}
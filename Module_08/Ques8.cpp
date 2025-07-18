#include <iostream>
using namespace std;
int main()
{
    int n, m = 1;
    cout << "Enter a odd value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << m << " ";
            m++;
        }
        // m = i + m + 1;
        cout << "\n";
    }

    return 0;
}
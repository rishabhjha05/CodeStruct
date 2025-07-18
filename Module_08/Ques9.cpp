#include <iostream>
using namespace std;
int main()
{
    int n, m = 1;
    cout << "Enter a odd value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            m = 1;
        else
            m = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << m << " ";
            if (m == 0)
                m = 1;
            else
                m = 0;
        }
        cout << "\n";
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a odd value of n : ";
    cin >> n;

    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= n; j++)
            {
                if (j == n / 2 + 1 || i == n / 2 + 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
    else
        cout << "The entered value of n is invalid for this paterrn.";
    return 0;
}
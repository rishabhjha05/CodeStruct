#include <iostream>
using namespace std;
int main()
{
    int n;
    bool flag = true;
    cout << "Enter a integer to check : ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // flag = false;
            cout << "composite.";
            break;
        }
        else
        {
            if (i == n - 1)
            {
                cout << "prime.";
            }
            else
                continue;
        }
    }
    // if (n == 1)
    //     cout << "1 is nither prime nor composite.";
    // else if (flag == false)
    //     cout
    //         << "The entered integer was not prime.";
    // else
    //     cout << "The entered integer was prime.";
    return 0;
}
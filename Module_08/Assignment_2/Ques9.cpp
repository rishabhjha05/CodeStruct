#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of row : ";
    cin >> n;
    if (n % 2 != 0)
    {
        for (int i = 1; i <= n / 2 + 1; i++)
        {
            cout << " ";
        }
        cout << "*\n";

        int nst = 1, nsp = n / 2 - 1, nsp1 = 1, nsp2 = 1;
        for (int i = 1; i <= n - 2; i++)
        {
            for (int j = 1; j <= nsp; j++)
            {
                cout << " ";
            }
            if (i < (n - 2) / 2 + 1)
                nsp--;
            else
                nsp++;
            cout << "*";
            if (i == n / 2)
            {
                for (int m = 1; m <= n; m++)
                {
                    cout << "*";
                }
            }
            for (int k = 1; k <= nsp1; k++)
            {
                if (i != n / 2)
                    cout << " ";
            }
            if (i < n / 2)
                nsp1++;
            else
                nsp1--;
            if (i != n / 2)
                cout << "*";
            for (int l = 1; l <= nsp2; l++)
            {
                if (i != n / 2)
                    cout << " ";
            }
            if (i < n / 2)
                nsp2++;
            else
                nsp2--;
            cout << "*";

            cout << "\n";
        }
        for (int i = 1; i <= n / 2 + 1; i++)
        {
            cout << " ";
        }
        cout << "*\n";
    }
    else
        cout << "invalid number of row for the given pattern.";
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for (int i= ; i < count; i++)
    {
        /* code */
    }
    

    return 0;
}

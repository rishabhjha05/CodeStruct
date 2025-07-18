#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the vale of n : ";
    cin >> n;
    int nst = 1;
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int i = 1; i <= nst; i++)
        {
            cout << "*";
        }
        if (i < n)
            nst++;
        else
            nst--;
        cout << "\n";
    }

    return 0;
}

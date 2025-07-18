#include <iostream>
using namespace std;
int main()
{
    int n, term1p = 1, term2p = 1, term_n = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n == 1 || n == 2)
        cout << "The nth term of the fibonaacii series is : 1";
    else
    {
        for (int i = 2; i < n; i++)
        {
            term_n = term2p + term1p;
            term2p = term1p;
            term1p = term_n;
        }
        cout << "The nth term of the fibonaacii series is : " << term_n;
    }

    return 0;
}
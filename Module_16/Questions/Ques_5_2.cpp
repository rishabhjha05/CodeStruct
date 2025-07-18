/*Make function which returns the a raise to power of b*/
#include <iostream>
using namespace std;
int power(int n, int b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
    {
        int term = power(n, b / 2);
        return term * term;
    }
    else if (b % 2 != 0)
    {
        int term = power(n, b / 2);
        return term * term * n;
    }
}
int main()
{
    int a, b;
    cout << "Enter the base value : ";
    cin >> a;
    cout << "Enter the power of base value : ";
    cin >> b;
    cout << "The value of a raise to power of b is : " << power(a, b);
    return 0;
}
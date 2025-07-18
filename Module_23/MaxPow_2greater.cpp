#include <iostream>
using namespace std;

int MaxPow(int n)
{
    int MaxPow;
    while (n > 0)
    {
        MaxPow = n;
        n = n & (n - 1);
    }
    return 2 * MaxPow;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The power of 2 just greater than given value " << n << " is : " << MaxPow(n);
    return 0;
}
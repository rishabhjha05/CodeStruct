#include <iostream>
using namespace std;
int MaxPow2(int n)
{
    int MaxPow;
    while (n > 0)
    {
        MaxPow = n;
        n = n & (n - 1);
    }
    return MaxPow;
}
int main()
{
    int n;
    cout << "Enter the value of num : ";
    cin >> n;
    cout << "The maximum power of 2 for given number will be " << MaxPow2(n);
    return 0;
}
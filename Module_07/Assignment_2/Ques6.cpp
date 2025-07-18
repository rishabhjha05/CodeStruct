#include <iostream>
using namespace std;
int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    return rev;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The sum of given number with its reverse is : " << n << " + " << reverse(n) << " = " << n + reverse(n);

    return 0;
}
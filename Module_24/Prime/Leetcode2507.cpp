#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int smallestValue(int n)
{
    if (isPrime(n))
        return n;
    int sum = 0;
    for (int i = 2; i <= n && n > 1; i++)
        if (n % i == 0)
        {
            sum += i;
            n /= i;
            i--;
        }

    if (sum == 4)
        return 4;
    return smallestValue(sum);
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The smallest value after relacing with sum of prime factor is : " << smallestValue(n);
    return 0;
}
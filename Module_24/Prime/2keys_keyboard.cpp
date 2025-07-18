/*Leetcode 650*/
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
int minSteps(int n)
{
    if (n == 1)
        return 0;
    if (isPrime(n))
        return n;
    int i = 2, hcf, count = 0;
    while (i <= sqrt(n))
    {
        if (n % i == 0){
            hcf = n / i;
            break;
        }
        i++;
    }
    count += n / hcf;
    count += minSteps(hcf);
    return count;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The minimum number of operations required to have " << n << " A on scree is : " << minSteps(n);

    return 0;
}
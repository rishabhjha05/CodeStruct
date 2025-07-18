/*Leetcode 507*/
#include <iostream>
#include <math.h>

using namespace std;
bool found(int n)
{
    if (n == 1)
        return false;
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            sum += (i + n / i);
    if (sum == n)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (found(n))
        cout << "The given number is a perfect number.";
    else
        cout << "The number is not a perfect number.";

    return 0;
}
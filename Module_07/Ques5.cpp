#include <bits/stdc++.h>
using namespace std;
int sum_digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter a value of n : ";
    cin >> n;
    cout << "The sum of all digit of given number is : " << sum_digit(n);
    return 0;
}
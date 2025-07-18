#include <iostream>
using namespace std;
int main()
{
    int sum = 0, n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n % 2 == 0)
        sum = -n / 2;
    else
        sum = -(n - 1) / 2 + n;

    cout << "The sum of given series upto n term is : " << sum;

    return 0;
}
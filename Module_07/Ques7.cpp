#include <iostream>
using namespace std;
int main()
{
    int sum = 0, n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        (i % 2 == 0) ? sum -= i : sum += i;
    }
    cout << "The sum of given series upto n term is : " << sum;

    return 0;
}
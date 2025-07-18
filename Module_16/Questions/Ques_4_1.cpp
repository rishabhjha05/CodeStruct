/*Print sum from 1 to n (parameterised)*/
#include <iostream>
using namespace std;
void sum1_n(int n, int sum)
{
    if (n == 0)
    {
        cout << "The sum from 1 to given number n is : " << sum;
        return;
    }
    sum1_n(--n, sum + n);
}
int main()
{
    int n, sum = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    sum1_n(n, sum);
    return 0;
}
#include <iostream>
using namespace std;
int sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        if (n % 10 % 2 == 0)
            sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The sum of all even digits inthe given number is : " << sum(n);

    return 0;
}
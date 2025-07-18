#include <iostream>
using namespace std;
int main()
{
    int n, first_digit = 0, last_digit = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n < 10)
    {
        cout << "The entered number is of one digit and hence first and last digit are same that is : " << n;
        return 0;
    }
    last_digit = n % 10;
    while (n > 9)
        n /= 10;
    first_digit = n % 10;
    cout << "The first digit of the given number is : " << first_digit << endl
         << "The last digit of the given number is : " << last_digit;
    return 0;
}
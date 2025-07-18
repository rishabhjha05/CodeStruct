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
    cout << "Enter a number : ";
    cin >> n;
    cout << "The reverse of the number is : " << reverse(n);
    return 0;
}
#include <iostream>
using namespace std;
int square(int c)
{
    return c * c;
}
int count(int n)
{
    int count = 0;
    while (n > 0)
    {
        count*=10;
        count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The square of the count of number of digit in the given number is : " << square(count(n));

    return 0;
}
/*make function which returns the sum from 1 to n*/
#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The sum from 1 to given number is : " << sum(n);
    return 0;
}
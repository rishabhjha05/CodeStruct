/*Make a function which calculatre the factorial of n using recursion*/
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int fact = factorial(n);
    cout << "The factorial of given number n is : " << fact;
    return 0;
}
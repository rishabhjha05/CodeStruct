/*Q4. Program to find the factorial of a given number.*/
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
    cout << "Factorial of the given number is : " << factorial(n);
    return 0;
}
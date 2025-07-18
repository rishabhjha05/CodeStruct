/*
A prime number is a number which is only divisible by the 1 or number it self
and a number divisible by any other than two is a composite numebr
2 is only even prime number and 0 is nor prime nither composite
*/
#include <iostream>
#include <math.h>
using namespace std;
bool found(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
bool fount_optimal(int n)
{
    if (n < 2)
        return false;
    for (int i = 0; i < sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int n;
    cout << "Enter the number to check : ";
    cin >> n;
    if (found_optimal(n))
        cout << "The given number is prime number.";
    else
        cout << "The given number is not prime number.";
    return 0;
}
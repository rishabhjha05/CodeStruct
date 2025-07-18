#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter the value of n : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    cout << "The factorial of given number is : " << fact;

    return 0;
}
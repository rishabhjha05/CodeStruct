/*
(a+b)%c  =  (a%c + b%c)%c
(a-b)%c  =  (a%c - b%c + c)%c
(a*b)%c  =  (a%c * b%c)%c
*/
#include <iostream>
#include <limits.h>

using namespace std;
int main()
{
    int a = INT_MAX, b, c;
    cout << a << endl
         << a * 2 << "\n";
    a = 7, b = 5, c = 3;
    cout << (a + b) % c << " = ";
    cout << (a % c + b % c) % c << "\n";
    a = 7, b = 5, c = 3;
    cout << (a - b) % c << " = ";
    cout << (a % c - b % c + c) % c << "\n";

    return 0;
}
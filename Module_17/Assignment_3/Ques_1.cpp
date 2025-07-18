/*Q1. Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number.*/
#include <iostream>
using namespace std;
void print(int n, int last_digit)
{
    if (n == 0)
    {
        cout << last_digit;
        return;
    }
    if (last_digit != 0)
    {
        cout << last_digit;
        print(n / 10, n % 10);
    }
    else
        print(n / 10, n % 10);
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    print(n / 10, n % 10);
    return 0;
}
#include <iostream>
using namespace std;

int count(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
void find(int n, int count, int *ptrf, int *ptrl)
{
    for (int i = 1; i <= count; i++)
    {
        if (i == 1)
            *ptrl = n % 10;
        else if (i == count)
            *ptrf = n % 10;
        n /= 10;
    }
}
int main()
{
    int n, first_digit = 0, last_digit = 0;
    int *ptr_last = &last_digit, *ptr_first = &first_digit;
    cout << "Enter any number : ";
    cin >> n;
    if (count(n) > 1)
    {
        find(n, count(n), ptr_first, ptr_last);
        cout << "The first digit of the given number is : " << first_digit << endl
             << "The last digit of the given number is : " << last_digit;
    }
    else
        cout << "The entered number is one digit.";
    return 0;
}
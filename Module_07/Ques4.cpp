#include <iostream>
using namespace std;
int count(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }

    return count;
}
int main()
{
    int n;
    cout << "Enter a value of n : ";
    cin >> n;
    if (n != 0)
        cout << "Number of digits in the given number is : " << count(n);
    else
        cout << "Number of digits in the given number is : 1";
    return 0;
}
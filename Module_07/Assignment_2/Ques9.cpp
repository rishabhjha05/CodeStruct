#include <iostream>
using namespace std;
int cube_digits(int n)
{
    return n * n * n;
}
int sum_cube_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += cube_digits(n % 10);
        n /= 10;
    }
    return sum;
}
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        if (sum_cube_digits(i) == i)
            cout << i << " ";
    }

    return 0;
}
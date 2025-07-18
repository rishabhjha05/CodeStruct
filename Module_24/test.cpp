#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    for (int i = 0; i < 100000; i++)
    {
        int sum = 0, n = i;
        while (n > 0)
        {
            sum += pow(n % 10, 2);
            n /= 10;
        }
        if (sum == i)
            cout << i << " ";
    }
    return 0;
}
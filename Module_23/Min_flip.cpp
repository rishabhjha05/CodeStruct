#include <iostream>
using namespace std;
int minFlips(int n, int m)
{
    int count = 0;
    n = n ^ m;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    int n, m;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of m : ";
    cin >> m;
    cout << "The minimum number of flip requird to convert " << n << " into " << m << " is : " << minFlips(n, m);
    return 0;
}
/*
    (9)  01001
    (19) 10011
*/
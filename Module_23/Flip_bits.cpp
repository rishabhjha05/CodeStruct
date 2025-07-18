#include <iostream>
using namespace std;
int Fliped(int n)
{
    int m = n, MaxPow;
    while (n > 0)
    {
        MaxPow = n;
        n = n & (n - 1);
    }
    MaxPow <<= 1;
    MaxPow -= 1;
    return MaxPow ^ m;
}
int main()
{
    int n, fliped;
    cout << "Enter the value of n : ";
    cin >> n;
    fliped = Fliped(n);
    cout << "The number representd by the fliped bits : " << fliped;
    return 0;
}
// 101(5) --> 100 --> 1000 --> 0111 -->  101^111 is 010(2)
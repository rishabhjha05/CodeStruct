/*
Find a to the power b to the power c;
NOTE the quetion asking for a^(b^c) not (a^b)^c
a = 2, b = 3, c = 2
Expected: 2^(3^2)=512
*/
#include <iostream>
using namespace std;
long long bitPow(long long base, long long exp)
{
    const long long MOD = 1e9 + 7;
    long long ApowB = 1;
    while (exp)
    {
        if (exp & 1)
            ApowB = (ApowB % MOD * base % MOD) % MOD;
        base = (base % MOD * base % MOD) % MOD;
        exp >>= 1;
    }
    return ApowB;
}
int main()
{
    long long a, b, c;
    cout << "Enter the value of a, b and c respectively with space : ";
    cin >> a >> b >> c;
    cout << "The value of a raised to power b raised to power c is : " << bitPow(a, bitPow(b, c));
    return 0;
}
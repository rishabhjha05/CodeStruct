/*
Find a to the power b to the power c to the power d
NOTE question is asking for a^(b^(c^d)) not ((a^b)^c)^d
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
    long long a, b, c, d;
    cout << "Enter the value of a,b,c and d respectively with space : ";
    cin >> a >> b >> c >> d;
    cout << "The value of a to power b to power c to power d is : " << bitPow(a, bitPow(b, bitPow(c, d)));
    return 0;
}
/*calculate factorial of first 10 natural number
modulo the result by 10^9 +7*/
#include <iostream>
using namespace std;
int main()
{
    const long long MOD = 1e9 + 7;
    long long fact = 1, i = 1;
    cout << "Factorial(1) = 1\n";
    for (int i = 2; i <= 10; i++)
    {
        cout << "Factorial(" << i << ") = " << (fact % MOD * i % MOD) % MOD << "\n";
        fact = (fact % MOD * i % MOD) % MOD;
    }
    return 0;
}
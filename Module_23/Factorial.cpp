#include <iostream>
#include <vector>
using namespace std;
void print(vector<long long> &fact)
{
    int MOD = 1000000000 + 7;
    int n = fact.size();
    for (int i = 2; i < n; i++)
        fact[i] = (fact[i - 1] % MOD * i % MOD) % MOD;
}
int main()
{
    int n, i = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    vector<long long> fact(n + 1, 1);
    cout << "The fcatorial of 1 to " << n << " is \n";
    print(fact);
    for (int ele : fact)
        cout << i++ << "! = " << ele << "\n";
    return 0;
}
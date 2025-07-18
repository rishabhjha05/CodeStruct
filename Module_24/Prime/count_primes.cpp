/*leetcode 204 seive vector method*/
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int countPrime(int n, vector<int> &primes)
{
    int count = 0;
    vector<bool> seive(n + 1, true);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (seive[i])
        {
            for (long long j = (long long)i * (long long)i; j < n; j += i)
                seive[j] = false;
        }
    }
    for (int i = 2; i < n; i++)
        if (seive[i])
        {
            primes.push_back(i);
            count++;
        }
    return count;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    vector<int> primes;
    cout << "The number of primes less then given number is : " << countPrime(n, primes);
    cout << "\nAnd those are : ";
    for (int ele : primes)
        cout << ele << " ";
    return 0;
}
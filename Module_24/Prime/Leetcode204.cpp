/*Leet code 204 brute force*/
#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int countPrime(int n, vector<int> &primes)
{
    int count = 0;
    for (int i = 2; i < n; i++)
        if (isPrime(i))
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
    cout << "The number of prime less than given number " << n << " is : " << countPrime(n, primes);
    if (primes.size() > 0)
    {
        cout << "\nAnd those are : ";
        for (int ele : primes)
            cout << ele << " ";
    }
    return 0;
}
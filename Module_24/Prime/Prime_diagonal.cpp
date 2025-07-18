/*leetcode2 2614*/
#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
using namespace std;
string suffix(int n)
{
    switch (n % 10)
    {
    case 1:
        return "st";
    case 2:
        return "nd";
    case 3:
        return "rd";
    default:
        return "th";
    }
}
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int diagonalPrime(vector<vector<int>> &nums)
{
    int n = nums.size(), i = 0, maxPrime = INT_MIN;
    while (i < n)
    {
        if (isPrime(nums[i][i]))
            maxPrime = max(maxPrime, nums[i][i]);
        if (isPrime(nums[i][n - i - 1]))
            maxPrime = max(maxPrime, nums[i][n - i - 1]);
        i++;
    }
    if (maxPrime > 0)
        return maxPrime;
    return 0;
}
int main()
{
    int n;
    cout << "Enter the size of the 2D vector : ";
    cin >> n;
    vector<vector<int>> vec(n);
    cout << "Enter all the vectors of the 2D vectors\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter all element the " << i + 1 << suffix(i + 1) << " vector of the 2D vector \n";
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the vector : ";
            cin >> vec[i][j];
        }
    }

    return 0;
}
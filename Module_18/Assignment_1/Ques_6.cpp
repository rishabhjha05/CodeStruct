/*Q6. You have n coins and you want to build a staircase with these coins. The staircase consists of k
rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build.*/
#include <iostream>
using namespace std;
int incomplete_row(int n)
{
    int low = 0, high = n;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2, coin_used = mid * (mid + 1) / 2;
        if (coin_used == n)
            return (int)mid;
        else if (n < coin_used)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return (int)high;
}
int main()
{
    int n;
    cout << "Enter the number of coins : ";
    cin >> n;
    cout << "The " << incomplete_row(n);
    return 0;
}
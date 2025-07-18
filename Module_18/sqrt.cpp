/*given a number find its square root if it is not
perfect square of any number return the lower bound 
of the square root of the number */
#include <iostream>
using namespace std;
int sqrt(int n)
{
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long sq = mid * mid;
        if (sq == n)
            return mid;
        else if (sq < n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return high;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The square root of the given number is : " << sqrt(n);
    return 0;
}
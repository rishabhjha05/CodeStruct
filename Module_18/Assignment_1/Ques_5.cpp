/*Q5. Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.*/
#include <iostream>
using namespace std;
bool perfact_sq(int n)
{
    int low = 0, high = n;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2, square = mid * mid;
        if (square == n)
            return true;
        else if (square < n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (!perfact_sq(n))
    {
        cout << "The given number is not a perfact square.";
        return -1;
    }
    cout << "The given number is a perfact square.";

    return 0;
}
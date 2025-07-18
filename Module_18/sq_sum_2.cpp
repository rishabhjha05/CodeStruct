/*Given a value of n make a function which returns true if there exist
two number a and b whose square sum upto n else return false*/
#include <iostream>
#include <cmath>
using namespace std;
bool is_square(int x)
{
    int n = sqrt(x);
    if (n * n == x)
        return true;
    else
        return false;
}
bool found(int n)
{
    int low = 0, high = n;
    while (low <= high)
    {
        if (is_square(low) && is_square(high))
            return true;
        else if (!is_square(high))
        {
            high = (int)sqrt(high) * (int)sqrt(high);
            low = n - high;
        }
        else
        {
            low = ((int)sqrt(low) + 1) * ((int)sqrt(low) + 1);
            high = n - low;
        }
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (!found(n))
        cout << "No, there do not exist any required number.";
    else
        cout << "Yes, there do exist the required number.";
    return 0;
}
/*Given a value of n make a function which returns true if there exist
two number a and b whose square sum upto n else return false*/
#include <iostream>
#include <cmath>
using namespace std;
bool found(int n)
{
    long long left = 0, right = sqrt(n);
    while (left <= right)
    {
        long long x = left * left + right * right;
        cout << left << right << endl;
        if (x == n)
            return true;
        else if (x < n)
            left++;
        else
            right--;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (!found(n))
        cout << "No, there doesn't exist any such number.";
    else
        cout << "Yes, there exist required numbers.";

    return 0;
}
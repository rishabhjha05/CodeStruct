/*Q3. Given a positive integer, return true if it is a power of 2.*/
#include <iostream>
using namespace std;
bool power_of_2(int n)
{
    cout << n << endl;
    if (n == 0)
        return false;
    else if (n == 1)
        return true;
    else if (n % 2 != 0)
        return false;
    else
        return power_of_2(n / 2);
}
int main()

{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (!power_of_2(n))
    {
        cout << "The given number is not a power of two.";
        return -1;
    }
    cout << "The given number is power of two.";
    return 0;
}
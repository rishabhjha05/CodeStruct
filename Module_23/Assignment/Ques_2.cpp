
#include <iostream>
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
}//0101-->1000
void isPow2(int n)
{
    int a = n & (n - 1);
    if (a == 0)
    {
        int i = 0;
        while ((n & (1 << i)) == 0)
            i++;
        cout << "YES " << n << " is " << i << suffix(i) << " a power of 2.";
    }
    else
        cout << "NO " << n << " is not a power of 2.";
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    isPow2(n);
    return 0;
}
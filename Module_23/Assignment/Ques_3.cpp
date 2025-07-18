
#include <iostream>
using namespace std;
int nearestPow2(int n)
{
    int idx = -1;
    for (int i = 0; i < 32; i++)
    {
        if ((n & (1 << i)) != 0)
            idx = i;
    }
    return 1 << idx + 1;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if ((n & (n - 1)) == 0)
        cout << "The number is itself power of 2.";
    else
        cout << "The nearest power of 2 is : " << nearestPow2(n);
    return 0;
}
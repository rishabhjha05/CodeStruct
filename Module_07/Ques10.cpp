#include <iostream>
using namespace std;
int main()
{
    int a, b, ans = 1;
    cout << "Enter the value of a and b respectively : ";
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
    }
    cout << "The value of a raised to power of b : " << ans;

    return 0;
}
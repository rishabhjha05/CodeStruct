#include <iostream>
#include <math.h>
using namespace std;
void findFactor1(int n)
{
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << i << " ";
}
void findFactor2(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
            cout << i << " " << n / i << " ";
}
void findFactor3(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
            cout << i << " ";
    for (int i = sqrt(n); i >= 0; i--)
        if (n % i == 0)
            cout << n / i << " ";
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    findFactor1(n);
    cout << "\n";
    findFactor2(n);
    cout << "\n";
    findFactor3(n);

    return 0;
}
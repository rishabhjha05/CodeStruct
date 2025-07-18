#include <iostream>
using namespace std;
int sol(int n, int k)
{
    if (k == 1)
        return 0;
    if (k % 2 == 0)
        return 1 - sol(n - 1, k / 2);
    else
        return sol(n - 1, k / 2 + 1);
}
int main()
{
    int n, k;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "The kth symbol for given values is : " << sol(n, k);
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, a = 3;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; a *= 4, i++)
    {
        cout << a << ",";
    }

    return 0;
}
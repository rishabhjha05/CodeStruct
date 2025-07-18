#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        cout << fact << endl;
    }

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main( ) {
// int n;
// cin >> n;
// int f = 1;
// for (int i = 1; i <= n; i++) {
// f *= i;
// cout << f << endl;
// }
// }
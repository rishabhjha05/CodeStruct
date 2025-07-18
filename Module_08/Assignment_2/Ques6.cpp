#include <iostream>
using namespace std;
int main()
{ // 2 * (n / 2 + 1) + 1
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    float nsp2 = (n - 2) * 2 + 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int k = 1; k <= nsp2; k++)
        {
            cout << " ";
        }
        nsp2 -= 2;
        cout << "*\n";
    }
    for (int i = 1; i < n; i++)
    {
        cout << " ";
    }
    cout << "*";

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     // Printing entire pattern except the bottommost star
//     for (int i = 0; i < n - 1; ++i)
//     {
//         for (int j = 0; j < i; ++j)
//         {
//             cout << " ";
//         }
//         cout << "*";
//         int m = 2 * (n - i - 1);
//         for (int j = 0; j < m - 1; ++j)
//         {
//             cout << " ";
//         }
//         cout << "*" << endl;
//     }
//     // Printing last star
//     for (int i = 0; i < n - 1; ++i)
//     {
//         cout << " ";
//     }
//     cout << "*";
// }
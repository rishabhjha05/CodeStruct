#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, j = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    char bin[50];

    while (n >= 1)
    {
        bin[i] = n % 2 + 48;
        n /= 2;
        i++;
    }
    while (j < i)
    {
        cout << bin[j];
        j++;
    }
    // int i = 48;
    // while (i <= 57)
    // {
    //     cout << char(i) << "\n";
    //     i++;
    // }

    return 0;
}
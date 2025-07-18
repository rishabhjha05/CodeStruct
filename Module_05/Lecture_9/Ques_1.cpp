#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the capital charecter : ";
    cin >> ch;
    int x = (int)ch;
    int y = x - 64;
    cout << "The number position of entered charecter is : " << y;
    return 0;
}
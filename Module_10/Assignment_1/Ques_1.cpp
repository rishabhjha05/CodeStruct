#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    int *ptra = &a, *ptrb = &b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    cout << (*ptra) * (*ptrb);
    return 0;
}
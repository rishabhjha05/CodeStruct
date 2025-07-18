#include <iostream>
using namespace std;
int main()
{
    int a, b, remainder;
    cout << "Enter the value of a and b : ";
    cin >> a >> b;
    remainder = a - b * (a / b);
    cout << "Remainder of a by b is : " << remainder << endl;
    cout << "Remainder of a by b using modulo operator is : " << a % b;
}
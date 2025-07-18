/*Make function which returns the a raise to power of b*/
#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, --b);
}
int main()
{
    int a, b;
    cout << "Enter the base value : ";
    cin >> a;
    cout << "Enter it's power : ";
    cin >> b;
    cout << "The value of a raise to power of b is : " << power(a, b);
    return 0;
}
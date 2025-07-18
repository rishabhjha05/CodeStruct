/*given two number find greatest common diviser between them recursively*/
#include <iostream>
using namespace std;
int GCD(int diviser, int dividend)
{
    int remainder = dividend % diviser;
    if (remainder == 0)
        return diviser;
    GCD(remainder, diviser);
}
int main()
{
    int a, b;
    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter second value : ";
    cin >> b;

    cout << "The greatest commmon diviser between them is : " << GCD(a, b);
    return 0;
}
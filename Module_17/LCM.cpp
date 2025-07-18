/*given two number find lowest common factor between them recursively*/
#include <iostream>
using namespace std;
int LCM(int a, int b)
{
    if (b % a == 0)
        return b;
    LCM(a, b + b);
}
int main()
{
    int a, b;
    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter second value : ";
    cin >> b;

    cout << "The greatest commmon diviser between them is : " << LCM(a, b);
    return 0;
}
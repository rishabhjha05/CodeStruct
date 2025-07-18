/*Time and space complexity for recurrsion function */
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
/*Time complexity for the given code will be O(2*b)-->O(b)
and space complexity for the given code will be O(b)*/
#include <iostream>
using namespace std;
void print_zigzag(int n)
{
    if (n == 0)
        return;
    cout << n;
    print_zigzag(n - 1);
    cout << n;
    print_zigzag(n - 1);
    cout << n;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    print_zigzag(n);
    return 0;
}
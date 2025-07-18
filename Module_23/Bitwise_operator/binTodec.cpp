#include <iostream>
using namespace std;
int binTodec(int bin)
{
    int dec = 0, i = 0;
    while (bin > 0)
    {
        dec += (bin % 10) * (1 << i);
        bin /= 10;
        i++;
    }
    return dec;
}
int main()
{
    int n;
    cout << "Enter the binary number : ";
    cin >> n;
    cout << "The decimal number reprented by the given binary number is : " << binTodec(n);
    return 0;
}
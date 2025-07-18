/*This code converts the given decimal input to a binary form*/
#include <iostream>
using namespace std;
string decTobin(int dec)
{
    string bin = "";
    while (dec > 0)
    {
        if (dec % 2 == 0)
            bin = "0" + bin;
        else
            bin = "1" + bin;
        dec /= 2;
    }
    return bin;
}
int main()
{
    int n;
    cout << "Enter the decimal number : ";
    cin >> n;
    cout << "The binary form of the given number is : " << decTobin(n);
    return 0;
}
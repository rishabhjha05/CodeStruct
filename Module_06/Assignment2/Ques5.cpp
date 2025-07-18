#include <iostream>
using namespace std;
int main()
{
    char ch1, ch2;
    cout << "Enter first charecter : ";
    cin >> ch1;
    cout << "Enter second charecter : ";
    cin >> ch2;
    int diff = ch2 - ch1;
    cout << "Difference of ascii value of second char to first is : " << diff;

    return 0;
}
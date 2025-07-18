#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout << "Enter any character : ";
    cin >> ch;
    int i = (int)ch;
    if ((65 <= i && i <= 90) || (97 <= i && i <= 122))
    {
        cout << "The entered charecter is a alphabet.";
    }
    else
        cout << "The entered charecter is not a alphabet.";

    return 0;
}
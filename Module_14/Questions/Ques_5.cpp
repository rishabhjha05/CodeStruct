#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter any string of even length : ";
    getline(cin, str);
    int n = str.size();
    if (n % 2 != 0)
    {
        cout << "The size of the entered string is invalid.";
        return 1;
    }
    cout << "The given string is : " << str << endl;
    cout << "The required string is : " << str.substr(n / 2);

    return 0;
}
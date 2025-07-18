#include <iostream>
#include <strings.h>
using namespace std;
int main()
{
    string str = "RISHABH"; // no need to give size//hover on rishabh youll find size 8 which includes null char \0
    cout << str << endl;
    cout << str[0] << endl; // can also be used as char array
    string str2;
    // cin >> str2; // but not for multi word string with space in it cuz space or enter ends the cin statement
    // cout << endl
    //      << str2 << endl;
    string str3;
    getline(cin, str3);
    cout << endl
         << str3 << endl;

    return 0;
}
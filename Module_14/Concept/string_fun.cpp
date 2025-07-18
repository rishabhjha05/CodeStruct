#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string str = "rishabh kumar jha";
    cout << str.size() << endl
         << str.length(); //.size() or .length() function ignore null char and only give size of usefull char
    string str2 = "RISHABH*";
    str2.push_back('J'); // can add only one char to the end of the string
    str2.push_back('H');
    str2.push_back('A');
    cout << endl
         << str2 << endl;
    str2.pop_back(); // will remove one char from the last of the string
    str2.pop_back();
    str2.pop_back();
    cout << str2 << endl;
    string str3 = "JHA";

    str2 = str2 + str3; // str2=str3+str2 will make str2 = JHARISHABH* we can also do str2=str2+"abc"
    cout << str2 << endl;
    reverse(str2.begin(), str2.end());
    cout << str2 << endl;
    reverse(str2.begin() + 3, str2.begin() + 8 + 1);
    cout << str2 << endl;
    return 0;
}
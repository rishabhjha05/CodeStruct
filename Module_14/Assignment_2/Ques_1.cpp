/*Q1. Input a string and concatenate with its reverse string and print it.*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout << "Enter a string : ";
    string str, str_rev, str_result;
    getline(cin, str);
    str_rev = str;
    reverse(str_rev.begin(), str_rev.end());
    str_result = str + str_rev;
    cout << "The entered string was : " << str << "\nThe final required string is : " << str_result;

    return 0;
}
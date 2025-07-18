/*make a function which tells if word is palindrome or not recursively*/
#include <iostream>
#include <string>
using namespace std;
bool palindrome(string str, int idx)
{
    if (idx > str.size() / 2)
        return true;
    if (str[idx] != str[str.size() - idx - 1])
        return false;
    else
        return palindrome(str, idx + 1);
}
int main()
{
    string str;
    cout << "Enter any string : ";
    getline(cin, str);
    if (!palindrome(str, 0))
    {
        cout << "The given string is not a palindrome.";
        return -1;
    }
    cout << "The given string is a palindrome.";

    return 0;
}
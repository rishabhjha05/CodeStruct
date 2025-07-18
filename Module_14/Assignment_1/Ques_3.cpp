/*Q3. Check whether the given string is palindrome or not.*/
#include <iostream>
using namespace std;
bool check(string str)
{
    int n = str.size(), i = 0, j = n - 1;
    while (i < j)
    {
        if (str[i] != str[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter any string : ";
    getline(cin, str);
    check(str);
    if (!check(str))
        cout << "The given string is not a palindrome.";
    else
        cout << "The given string is a palindrome.";
    return 0;
}
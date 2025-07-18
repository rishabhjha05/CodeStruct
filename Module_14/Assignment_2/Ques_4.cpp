/*Q4. Given an array of strings. Check whether they are anagram or not.*/
#include <iostream>
#include <algorithm>
using namespace std;
bool anagram(string str1, string str2)
{
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2)
        return true;
    return false;
}
int main()
{
    string str1, str2;
    cout << "Enter first string : ";
    getline(cin, str1);
    cout << "Enter second string : ";
    getline(cin, str2);
    if (!anagram(str1, str2))
        cout << "Given two strings are not valid anagram to each other.";
    else
        cout << "Given two strings are valid anagram to each other.";
    return 0;
}
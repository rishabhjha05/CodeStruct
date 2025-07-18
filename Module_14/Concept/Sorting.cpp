#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str, str1;
    cout << "Enter any string : ";
    getline(cin, str);
    cout << "The given string is : " << str << endl;
    sort(str.begin(), str.end()); // this function sort all char on the basis of their ascaii value in increasing order
    cout << "The sorted string is : " << str << endl;
    cout << "Enter another stirng : ";
    getline(cin, str1);
    int n = str.size();
    cout << "The given string is : " << str1 << endl;
    sort(str1.begin() + 1, str1.begin() + n - 1);
    cout << "The sorted string is : " << str1 << endl;

    return 0;
}
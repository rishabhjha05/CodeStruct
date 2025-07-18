/*Q1. Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
0-based indexing.*/
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter an  string : ";
    getline(cin, str);
    int n = str.size();
    for (int i = 0; i < n; i++)
        if (i % 2 != 0)
            str[i] = '#';
    cout << str;

    return 0;
}
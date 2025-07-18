#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i = 0;
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    while (str[i] != '\0')
    {
        if (i % 2 == 0)
            str[i] = 'a';
        i++;
    }
    cout << str << " is the required string.";

    return 0;
}
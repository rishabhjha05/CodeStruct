#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i = 0, count = 0;
    string str;
    cout << "Enter any string : ";
    getline(cin, str);
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;
        i++;
    }
    cout << count << " Vowels present in the given string.";
    return 0;
}
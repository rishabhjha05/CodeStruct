#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[7] = {'R', 'I', 'S', 'H', 'A', 'B', 'H'};
    for (int i = 0; i < 7; i++)
        cout << str1[i];
    cout << endl;
    char str2[8] = "RISHABH"; // we have to give size for a null character so that comp can is as end of the string
    for (int i = 0; i < 7; i++)
        cout << str1[i];
    cout << endl;
    char str3[] = "rishabh";
    cout << str3 << endl;
    char str4[] = "rish\0abh";
    cout << str4 << endl;

    return 0;
}
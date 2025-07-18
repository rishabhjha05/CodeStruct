/*Q5. Input a string of length less than 10 and convert it into integer without using builtin function.*/
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter any string of length less then 10 : ";
    getline(cin, str);
    int n = str.size();
    if (n >= 10)
        cout << "The given string is of invalid length : ";
    else
    {
        cout << "The given string is : " << str << endl;
        int i = 0, x = 0;
        while (i < n)
        {
            x *= 10;
            x += str[i] - 48;
            i++;
        }
        cout << "The integer of that string is : " << x;
    }
    return 0;
}
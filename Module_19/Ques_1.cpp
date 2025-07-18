/*you are given with a string and a limiting char sort the 
string made after removing all the char lesser than limiting 
char */
#include <iostream>
#include <string>
using namespace std;

string sort(string str)
{
    int i = str.size();
    while (i > 1)
    {
        int j = 0;
        bool sorted = true;
        while (j < i - 1)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                sorted = false;
            }
            j++;
        }
        if (sorted)
            break;
        i--;
    }
    return str;
}
int main()
{
    string str, str1 = "";
    cout << "Enter any string : ";
    getline(cin, str);
    char ch;
    cout << "Enter the limiting charactor : ";
    cin >> ch;
    for (int i = 0; i < str.size(); i++)
        if (str[i] >= ch)
            str1.push_back(str[i]);
    cout << "The entered string was : " << str;
    str1 = sort(str1);
    cout << "\nThe required string is : " << str1;
    return 0;
}
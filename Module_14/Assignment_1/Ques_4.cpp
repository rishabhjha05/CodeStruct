/*Q4. Input a string of even length and reverse the second half of the string.*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter any string of even length : ";
    getline(cin, str);
    int n = str.size();
    if (n % 2 != 0)
        cout << "The entered string is of invalid length.";
    else
    {
        cout << "The entered string was : " << str << endl;
        reverse(str.begin() + n / 2, str.end());
        cout << "The required string is : " << str;
    }
    return 0;
}
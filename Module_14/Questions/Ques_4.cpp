#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string of length greater than 5 : ";
    getline(cin, str);
    cout << "The entered string : " << str << endl;
    reverse(str.begin() + 1, str.begin() + 4 + 1);
    cout << "The required string : " << str;
    return 0;
}
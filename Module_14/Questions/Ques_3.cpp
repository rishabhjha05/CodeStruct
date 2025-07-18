#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{

    string str;
    getline(cin, str);
    reverse(str.begin(), str.begin() + str.size() / 2);
    cout << "The required string is : " << str;
    return 0;
}
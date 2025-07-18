#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter any sentence : ";
    getline(cin, str1);
    int x = stoi(str1); // string to integer range is -2^31 to 2^31-1
    cout << x << endl;

    cout << "Enter any sentence : ";
    getline(cin, str2);
    float y = stoll(str2); // string to long long have greater range
    cout << y << endl;

    return 0;
}
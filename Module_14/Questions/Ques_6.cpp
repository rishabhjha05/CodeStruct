#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of integer n : ";
    cin >> n;
    string str = to_string(n);
    cout << "There are " << str.size() << " digit in the given number.";
    return 0;
}
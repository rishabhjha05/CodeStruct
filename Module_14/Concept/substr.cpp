#include <iostream>
using namespace std;
int main()
{
    string str = "RISHABH";
    cout << str.substr(1) << endl;
    cout << str.substr(3) << endl;    // this will print the substring str from index 3 to end
    cout << str.substr(3, 3) << endl; // this will print the substring from index 3 with 3 element not till end
    return 0;
}
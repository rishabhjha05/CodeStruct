#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string str;
    cout << "Enter any sentence : ";
    getline(cin, str);
    stringstream ss(str);
    string temp;
    while (ss >> temp)
        cout << temp << endl;
    return 0; 
}
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string str;
    cout << "Enter any sentence : ";
    getline(cin, str);
    stringstream streamstr(str); // made a stringstream variable named streamstr which contains str
    string temp;                 // temperory string
    while (streamstr >> temp)    // jab tak streamstrgive value to temp
        cout << temp << endl;
    return 0;
}
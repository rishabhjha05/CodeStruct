/*Print only all the sub set of the given string*/
#include <iostream>
#include <string>
using namespace std;
void subset(string ans, string original)
{
    if (original == "")
    {
        cout << ans << endl;
        return;
    }
    subset(ans + original[0], original.substr(1));
    subset(ans, original.substr(1));
}
int main()
{
    string str;
    cout << "Enter any string :";
    getline(cin, str);
    subset("", str);
    return 0;
}
/*Print only all the sub set of the given string*/
#include <iostream>
#include <string>
using namespace std;
void subset(string ans, string original, int idx)
{
    if (idx == original.size())
    {
        cout << ans << endl;
        return;
    } 
    subset(ans + original[idx], original, idx + 1);
    subset(ans, original, idx + 1);
}
int main()
{
    string str;
    cout << "Enter any string :";
    getline(cin, str);
    subset("", str, 0);
    return 0;
}
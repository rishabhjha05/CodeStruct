/*Find all the permutations of an string given with all unique element*/
#include <iostream>
#include <string>
using namespace std;
void generate(string ans, string original)
{
    if (original.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < original.size(); i++)
        generate(ans + original[i], original.substr(0, i) + original.substr(i + 1));
}
int main()
{
    string str;
    cout << "Enter any string : ";
    getline(cin, str);
    generate("", str);
    return 0;
}
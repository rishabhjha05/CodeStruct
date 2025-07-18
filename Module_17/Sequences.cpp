/*Print all the sequencies of given length k*/
#include <iostream>
using namespace std;
void generate(string ans, string original, int idx, int k)
{
    if (idx == original.size())
    {
        if (ans.size() == k)
            cout << ans << endl;
        return;
    }
    if (ans.size() + original.size() - idx < k)//improve eficiency
        return;
    generate(ans + original[idx], original, idx + 1, k);
    generate(ans, original, idx + 1, k);
}
int main()
{
    int k;
    string str;
    cout << "Enter any string ";
    getline(cin, str);
    cout << "Enter the length of sequencies : ";
    cin >> k;
    generate("", str, 0, k);
}
/*Given a number n print all the possible binary string which do not
contains consecutive 1 */
#include <iostream>
#include <string>
using namespace std;
void generate(string ans, int n, bool flag)
{
    if (ans.size() == n)
    {
        cout << ans << endl;
        return;
    }
    generate(ans + '0', n, true);
    if (flag == true)
        generate(ans + '1', n, false);
}
int main()
{
    int n;
    cout << "Enter any value for n : ";
    cin >> n;
    generate("", n, true);
    return 0;
}
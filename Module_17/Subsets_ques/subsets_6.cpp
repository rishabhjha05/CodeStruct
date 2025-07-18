/*Print all the subset of the tring containing duplicate element*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void subsets(string ans, string original, int idx, bool flag)
{
    if (idx == original.size())
    {
        cout << ans << endl;
        return;
    }
    // else if (idx == original.size() - 1)
    // {
    //     if (flag == true)
    //         subsets(ans + original[idx], original, idx + 1, true);
    //     subsets(ans, original, idx + 1, true);
    //     return;
    // }
    char ch = original[idx], next_ch = original[idx + 1];
    if (ch == next_ch)
    {
        if (flag == true)
            subsets(ans + original[idx], original, idx + 1, true);
        subsets(ans, original, idx + 1, false);
    }
    else
    {
        if (flag == true)
            subsets(ans + original[idx], original, idx + 1, true);
        subsets(ans, original, idx + 1, true);
    }
}
int main()
{
    string str;
    cout << "Enter any string containing duplicate : ";
    getline(cin, str);
    sort(str.begin(), str.end());
    subsets("", str, 0, true);
}
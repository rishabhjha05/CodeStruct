#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string sufix(int i)
{
    if (i == 0)
        return "st";
    else if (i == 1)
        return "nd";
    else if (i == 2)
        return "rd";
    else
        return "th";
}
string longestCommonPrefix(vector<string> &strs)
{
    int n = strs.size(), i = 0;
    sort(strs.begin(), strs.end());
    string str1 = strs[0], str2 = strs[n - 1], res;
    while (i < min(str1.size(), str2.size()))
    {
        if (str1[i] == str2[i])
            res.push_back(str1[i]);
        else
            break;
        i++;
    }
    return res;
}
int main()
{
    int n, i = 0;

    cout << "Enter the no of string : ";
    cin >> n;
    vector<string> vec(n);
    while (i < n)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " string : ";
        cin >> vec[i];
        i++;
    }
    cout << "The longest common prefix in the given strings is : " << longestCommonPrefix(vec);
    return 0;
}
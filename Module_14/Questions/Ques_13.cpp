#include <iostream>
#include <vector>
using namespace std;
bool isIsomorphic(string s, string t)
{
    vector<int> v(150, 200);
    int n = s.size(), m = t.size();
    if (n != m)
        return false;
    else
    {
        for (int i = 0; i < n; i++)
        {
            int idx = (int)s[i];
            if (v[idx] == 200)
                v[idx] = s[i] - t[i];
            else if (v[idx] != (s[i] - t[i]))
                return false;
        }
        for (int j = 0; j < 150; j++)
            v[j] = 200;
        for (int k = 0; k < m; k++)
        {
            int idx = (int)t[k];
            if (v[idx] == 200)
                v[idx] = t[k] - s[k];
            else if (v[idx] != (t[k] - s[k]))
                return false;
        }
    }
    return true;
}
int main()
{
    string str1, str2;
    cout << "Enter the first string : ";
    getline(cin, str1);
    cout << "Enter the second string : ";
    getline(cin, str2);
    if (!isIsomorphic(str1, str2))
        cout << "The given two strings are not isomorphic.";
    else
        cout << "The given two strings are isomorphic.";
    return 0;
}
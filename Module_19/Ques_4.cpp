/*Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.
Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with;
and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i
will be content. Your goal is to maximize the number of your content children and output the maximum number.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int j = 0, i = 0, count = 0;
    while (i < g.size() && j < s.size())
    {
        if (s[j] < g[i])
            j++;
        else
        {
            count++;
            i++;
            j++;
        }
    }
    return count;
}
int main()
{
    int n, m;

    cout << "Give number of children : ";
    cin >> n;
    cout << "Enter the number of cookies : ";
    cin >> m;
    vector<int> greed_factor(n), cookies(m);

    for (int i = 0; i < n; i++)
    {
        cout << "Eneter the greed factor of " << i + 1 << "children : ";
        cin >> greed_factor[i];
    }
    for (int j = 0; j < m; j++)
    {
        cout << "Eneter the " << j + 1 << "th cookie size : ";
        cin >> cookies[j];
    }
    cout << findContentChildren(greed_factor, cookies);

    return 0;
}
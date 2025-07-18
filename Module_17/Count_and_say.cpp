#include <iostream>
#include <string>
using namespace std;
string sol(int n)
{
    if (n == 1)
        return "1";
    string str = sol(n - 1);
    string ans = "";
    int freq = 1, i;
    char ch = str[0];
    for (i = 1; i < str.size(); i++)
    {
        if (ch == str[i])
            freq++;
        else
        {
            ans += to_string(freq) + ch;
            freq = 1;
            ch = str[i];
        }
    }
    ans += to_string(freq) + ch;
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The answer for given value of n is : " << sol(n);
    return 0;
}
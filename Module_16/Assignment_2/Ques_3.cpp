/*Q3. A function countAndSay is defined as:
countAndSay(1) = “1”
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is
then converted into a different digit string.
So, if sample input is n = 4,
countAndSay(1) = 1
countAndSay(2) = “one 1” => 11
countAndSay(3) = “two 1” => 21
countAndSay(4) = “one 2 one 1” => 1211*/
#include <iostream>
#include <string>
using namespace std;
string ans;
string count_and_say(int n)
{
    if (n == 1)
        return "1";
    string str = count_and_say(n - 1), ans;
    int freq = 1;
    char ch = str[0];
    for (int i = 1; i < str.size(); i++)
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
    cout << count_and_say(n);
    return 0;
}

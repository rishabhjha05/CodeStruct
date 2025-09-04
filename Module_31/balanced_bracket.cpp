#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str)
{
    stack<char> st;
    for (char ch : str)
    {
        if (ch == '(')
            st.push('(');
        else if (st.size() != 0)
            st.pop();
        else
            return false;
    }
    if(st.size()!=0)
        return false;
    return true;
}
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    if (isValid(str))
        cout << "The given string has balanced bracket.";
    else
        cout << "The given string does not have balanced bracket.";
    return 0;
}
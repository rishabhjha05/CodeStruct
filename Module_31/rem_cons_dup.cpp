#include <iostream>
#include <stack>
using namespace std;
void rem_cons_dup(string &str)
{
    stack<char> st, temp;
    for (char ch : str)
        if (st.size() == 0 || st.top() != ch)
            st.push(ch);
    string s = "";
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() > 0)
    {
        s += temp.top();
        st.push(temp.top());
        temp.pop();
    }
    str=s;
}
int main()
{
    string str;
    cout << "Enter and string : ";
    getline(cin, str);
    cout << "The given string was : ";
    cout << str;
    rem_cons_dup(str);
    cout << "\nThe modified string is : ";
    cout << str;
    return 0;
}
#include <iostream>
#include <stack>
using namespace std;
string suffix(int n)
{
    switch (n % 10)
    {
    case 1:
        return "st";
    case 2:
        return "nd";
    case 3:
        return "rd";
    default:
        return "th";
    }
}
void pushAtbottom(stack<int> &st, int val)
{
    if (st.size() == 0)
    {
        st.push(val);
        return;
    }
    int last = st.top();
    st.pop();
    pushAtbottom(st, val);
    st.push(last);
}
void display(stack<int> &st)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> st;
    int n;
    cout << "Enter the size of the stack : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the stack : ";
        cin >> val;
        st.push(val);
    }
    int val;
    cout << "Enter the value to be pushed at bottom of the stack : ";
    cin >> val;
    cout << "The given stack was : ";
    display(st);
    pushAtbottom(st, val);
    cout << "The stack after pushing given value at the bottom : ";
    display(st);
    return 0;
}
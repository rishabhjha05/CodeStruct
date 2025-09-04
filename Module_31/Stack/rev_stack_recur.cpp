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
void rev_stack(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int last = st.top();
    st.pop();
    rev_stack(st);
    pushAtbottom(st, last);
    return;
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
    cout<<endl;
}
int main()
{
    int n;
    cout << "Enter the size of the stack : ";
    cin >> n;
    stack<int> st, temp;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of stack : ";
        cin >> val;
        st.push(val);
    }
    cout << "The stack before func called : ";
    display(st);
    rev_stack(st);
    cout << "The stack after func called : ";
    display(st);

    return 0;
}
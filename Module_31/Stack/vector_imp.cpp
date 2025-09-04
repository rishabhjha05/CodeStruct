// vector implimentation of stack
#include <iostream>
#include <vector>
using namespace std;
string suffix(int i)
{
    switch (i % 10)
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
class stack
{
public:
    int idx;
    vector<int> st;
    void push(int val)
    {
        idx++;
        st.push_back(val);
    }
    void pop()
    {
        if (idx == -1)
        {
            cout << "error, stack underflow\n";
            return;
        }
        st.pop_back();
    }
    int top()
    {
        if (idx == -1)
        {
            cout << "error, stack underflow\n";
            return -1;
        }
        return st[st.size()-1];
    }
    int size()
    {
        return st.size();
    }
};
void display(stack &st)
{
    stack temp;
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
    int n;
    cout << "Enter the size of the stack : ";
    cin >> n;
    stack st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the stack : ";
        cin >> val;
        st.push(val);
    }
    cout << "The given stack is : ";
    display(st);
    st.push(0); // this should give a overflow error
    st.pop();
    st.push(0); // this should work
    cout << "The given stack changed to : ";
    display(st);
    return 0;
}
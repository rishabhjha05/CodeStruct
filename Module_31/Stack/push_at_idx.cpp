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
void pushAtidx(stack<int> &st, int idx, int val)
{
    stack<int> temp;
    while (st.size() > idx)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
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
    int val, idx;
    cout << "Enter the index at which value to be pushed : ";
    cin >> idx;
    if(idx<0 || idx>=st.size())
    {
        cout<<"The given index is invalid";
        return -1;
    }
    cout << "Enter the value to be pushed at index " << idx << " of the stack : ";
    cin >> val;
    cout << "The given stack was : ";
    display(st);
    pushAtidx(st, idx, val);
    cout << "The stack after pushing given value at the index " << idx << " is : ";
    display(st);
    return 0;
}
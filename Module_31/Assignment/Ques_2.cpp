#include <iostream>
#include <stack>
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
void removeKth(stack<int> &st, int k)
{
    stack<int> temp;
    for (int i = 0; i < k; i++)
    {
        temp.push(st.top());
        st.pop();
    }
    temp.pop();
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
    int n, k;
    cout << "Enter the size of the stack : ";
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the stack : ";
        cin >> val;
        st.push(val);
    }
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "The stack was this before : ";
    display(st);
    removeKth(st, (k % st.size() == 0) ? st.size() : (k % st.size()));
    cout << "The stack after removing kth element from top : ";
    display(st);
    return 0;
}
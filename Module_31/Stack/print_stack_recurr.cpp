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
void display(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int temp = st.top();
    st.pop();
    display(st);
    cout << temp<<" ";
    st.push(temp);
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
    cout << "The given stack is : ";
    display(st);
    return 0;
}
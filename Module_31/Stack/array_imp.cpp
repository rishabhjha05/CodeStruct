// array implimentation of stack
#include <iostream>
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
    int idx, n;
    int *arr;
    stack(int size) : idx(-1), n(size)
    {
        arr = new int[n];
    }
    void push(int val)
    {
        if (idx == n - 1)
        {
            cout << "error, stack overflow\n";
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop()
    {
        if (idx == -1)
        {
            cout << "error, stack underflow\n";
            return;
        }
        idx--;
    }
    int top()
    {
        if (idx == -1)
        {
            cout << "error, stack underflow\n";
            return -1;
        }
        return arr[idx];
    }
    int size()
    {
        return idx + 1;
    }
};
void display(stack &st)
{
    stack temp(st.size());
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
    stack st(n);
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
    st.push(0);//this should work
    cout << "The given stack changed to : ";
    display(st);
    return 0;
}
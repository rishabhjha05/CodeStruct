// linked list implimentation of stack
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
class Node
{
public:
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};
class stack
{
public:
    int len;
    Node *head;
    stack() : len(0), head(NULL) {}
    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        len++;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "error, stack underflow";
            return;
        }
        head = head->next;
        len--;
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "error, stack underflow";
            return -1;
        }
        return head->val;
    }
    int size()
    {
        return len;
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
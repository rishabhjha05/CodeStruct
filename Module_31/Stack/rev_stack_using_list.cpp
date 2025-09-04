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
class Node
{
public:
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};
class linkedlist
{
public:
    Node *head, *tail;
    int size;
    linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }
    void addAttail(int val)
    {
        Node *temp = new Node(val);
        if (size > 0)
        {
            tail->next = temp;
            tail = tail->next;
        }
        else
            head = tail = temp;
        size++;
    }
    Node *getHead()
    {
        return head;
    }
};
void display(stack<int> st)
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
void rev_stack(stack<int> &st)
{
    linkedlist ll;
    while (st.size() > 0)
    {
        ll.addAttail(st.top());
        st.pop();
    }
    Node *temp = ll.getHead();
    while (temp)
    {
        st.push(temp->val);
        temp = temp->next;
    }
}
int main()
{
    int n;
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
    cout << "The stack before function is called : ";
    display(st);
    rev_stack(st);
    cout << "The stack after function is called : ";
    display(st);
    return 0;
}
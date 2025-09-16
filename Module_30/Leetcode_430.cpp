#include <iostream>
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
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode *child;
    ListNode(int val) : val(val), next(NULL), prev(NULL), child(NULL) {}
};
class doublylinkedlist
{
public:
    ListNode *head, *tail;
    int size;
    doublylinkedlist()
    {
        head = tail = NULL;
        size = 0;
    }
    void display()
    {
        ListNode *temp = head;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void addAtTail(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size > 0)
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        else
            head = tail = temp;
        size++;
    }
};
ListNode *flatten(ListNode *head)
{
    ListNode *temp = head;
    while (temp)
    {
        if (temp->child != NULL)
        {
            ListNode *a = temp->next;
            ListNode *c = temp->child;
            temp->child = NULL;
            c = flatten(c);
            temp->next = c;
            c->prev = temp;
            while (temp->next)
                temp = temp->next;
            temp->next = a;
            if (a)
                a->prev = temp;
        }
        temp = temp->next;
    }
}
int main()
{
    doublylinkedlist dll;
    int n;
    cout << "Enter the size of the list : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        dll.addAtTail(val);
    }

    return 0;
}
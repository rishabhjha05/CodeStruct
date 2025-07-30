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
    ListNode(int val) : val(val), next(NULL) {}
};
class linkedlist
{
public:
    ListNode *head, *tail;
    int size;
    linkedlist()
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
        return;
    }
    void addAttail(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size != 0)
        {
            tail->next = temp;
            tail = temp;
        }
        else
            head = tail = temp;
        size++;
    }
    ListNode *getHead() { return head; }
};
ListNode *reverseList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *prev = head, *curr = prev->next, *Next = curr->next;
    while (Next)
    {
        curr->next = prev;
        prev = curr;
        curr = Next;
        Next = Next->next;
    }
    curr->next = prev;
    head->next = NULL;
    head = curr;
}
ListNode *revreseBetween(ListNode *head, int left, int right)
{
    if (left == right || head->next == NULL)
        return head;
    ListNode *a = NULL, *b = NULL, *c = NULL, *d = NULL;
    ListNode *temp = head;
    int n = 0;
    while (temp)
    {
        if (n == left - 1)
            a = temp;
        if (n == left)
            b = temp;
        if (n == right)
            c = temp;
        if (n == right + 1)
            d = temp;
        n++;
        temp = temp->next;
    }
    if (a)
        a->next = NULL;
    c->next = NULL;
    c = reverseList(b);
    if (a)
        a->next = c;
    b->next = d;
    if (a = NULL)
        return c;
    return head;
}
int main()
{
    int n, k, l;
    cout << "Enter the size of list : ";
    cin >> n;
    linkedlist ll;
    cout << "Enter all the elements of the list \n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }
    cout << "Enter the starting index : ";
    cin >> k;
    cout << "Enter the ending index : ";
    cin >> l;
    cout << "The given list is : ";
    ll.display();
    cout << "The reversed list is : ";
    ListNode *temp = revreseBetween(ll.getHead(), k, l);
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
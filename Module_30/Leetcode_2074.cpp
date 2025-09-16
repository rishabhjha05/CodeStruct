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
class linknedlist
{
public:
    ListNode *head, *tail;
    int size;
    linknedlist()
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
    void addAttail(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size > 0)
        {
            tail->next = temp;
            tail = temp;
        }
        else
            head = tail = temp;
        size++;
    }
    ListNode *getHead()
    {
        return head;
    }
    void setHead(ListNode *head)
    {
        this->head = head;
    }
};
ListNode *reverseList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *prev = head;
    ListNode *curr = head->next;
    ListNode *Next = head->next->next;
    while (Next != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = Next;
        Next = Next->next;
    }
    curr->next = prev;
    head->next = NULL;
    head = curr;
    return head;
}

ListNode *reverseBetween(ListNode *head, int left, int right)
{
    if (left == right || head->next == NULL)
        return head;

    ListNode *a = NULL, *b = NULL, *c = NULL, *d = NULL;
    ListNode *temp = head;
    int n = 1;
    while (temp != NULL)
    {
        if (n == left - 1)
            a = temp;
        if (n == left)
            b = temp;
        if (n == right)
            c = temp;
        if (n == right + 1)
        {
            d = temp;
            break;
        }
        temp = temp->next;
        n++;
    }
    if (a != NULL)
        a->next = NULL;
    c->next = NULL;
    c = reverseList(b);
    if (a != NULL)
        a->next = c;
    b->next = d;
    if (a == NULL)
        return c;
    return head;
}
ListNode *reverseEvenLengthGroups(ListNode *head)
{
    ListNode *temp = head;
    int gap = 1;
    while (temp && temp->next)
    {
        int remLen = 0;
        ListNode *t = temp->next;
        for (int i = 1; t && i <= gap + 1; i++)
        {
            remLen++;
            t = t->next;
        }
        if (remLen < gap + 1)
            gap = remLen - 1;
        if (gap % 2 != 0)
            reverseBetween(temp, 2, 2 + gap);
        gap++;
        for (int i = 1; temp && i <= gap; i++)
            temp = temp->next;
    }
    return head;
}
int main()
{
    linknedlist ll;
    int n;
    cout << "Enter the size of the list : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }
    ll.setHead(reverseEvenLengthGroups(ll.getHead()));
    cout << "The list after the modification will be : ";
    ll.display();
    return 0;
}
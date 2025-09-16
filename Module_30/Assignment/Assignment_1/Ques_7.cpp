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
    int size;
    ListNode *head, *tail;
    linkedlist()
    {
        size = 0;
        head = tail = NULL;
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
        if (size != 0)
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
ListNode *rev(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *prev = head, *curr = head->next, *Next = curr->next;
    while (Next)
    {
        curr->next = prev;
        prev = curr;
        curr = Next;
        Next = Next->next;
    }
    curr->next = prev;
    head->next = NULL;
    return curr;
}
ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *prev = head, *Next = head, *pp = NULL;
    bool found = false;
    while (Next)
    {
        for (int i = 1; i < k; i++)
            if (Next)
                Next = Next->next;
        if (Next)
        {
            ListNode *Next2 = Next->next;
            if (!found)
                head = Next, found = true;
            Next->next = NULL;
            Next = prev;
            prev = rev(prev);
            if (pp)
                pp->next = prev;
            pp = Next;
            prev = Next2;
            Next->next = Next2;
            Next = Next2;
        }
    }
    return head;
}
int main()
{
    int n, k;
    cout << "Enter the size of the list you want : ";
    cin >> n;
    linkedlist ll;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "The given list was : ";
    ll.display();
    ll.setHead(reverseKGroup(ll.getHead(), k));
    cout << "The modified list is : ";
    ll.display();
    return 0;
}
// leetcode 328
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
    void addAtend(int val)
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
ListNode *oddEvenList(ListNode *head)
{
    ListNode *odd = new ListNode(-1), *even = new ListNode(-1);
    ListNode *temp = head, *t1 = odd, *t2 = even;
    int i = 0;
    while (temp)
    {
        if (i % 2 == 0)
        {
            t1->next = temp;
            t1 = t1->next;
        }
        else
        {
            t2->next = temp;
            t2 = t2->next;
        }
        temp = temp->next;
        i++;
    }
    t1->next = even->next;
    t2->next = NULL;
    return odd->next;
}
int main()
{
    linkedlist ll;
    int n;
    cout << "Enter the size of the list : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAtend(val);
    }
    cout << "The list before the given modification was : ";
    ll.display();
    ll.setHead(oddEvenList(ll.getHead()));
    cout << "The given list after the modification is : ";
    ll.display();
    return 0;
}
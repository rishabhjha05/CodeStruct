#include <iostream>
#include <math.h>
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
ListNode *rev(ListNode *head)
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
    return curr;
}
int getDecimalValue(ListNode *head)
{
    head = rev(head);
    int i = 0, dec = 0;
    ListNode *temp = head;
    while (temp)
    {
        dec += temp->val * pow(2, i);
        i++;
        temp = temp->next;
    }
    return dec;
}
int main()
{
    int n;
    cout << "Enter the size of the list : ";
    cin >> n;
    linkedlist ll;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAtend(val);
    }
    cout << "The binary to decimal representation of the given list is : " << getDecimalValue(ll.getHead());
    return 0;
}
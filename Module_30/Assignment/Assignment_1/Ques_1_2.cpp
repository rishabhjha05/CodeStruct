// leetcode 82
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
    int size = 0;
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
};
ListNode *deleteDuplicates(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *head2 = new ListNode(-1);
    ListNode *temp = head, *temp2 = head2;
    ListNode *prev = head, *curr = prev->next, *Next = curr->next;
    if (head->val != head->next->val)
    {
        temp2->next = head;
        temp2 = temp2->next;
    }
    while (Next)
    {
        if (curr->val != prev->val && curr->val != Next->val)
        {
            temp2->next = curr;
            temp2 = temp2->next;
        }
        prev = prev->next;
        curr = curr->next;
        Next = Next->next;
    }
    if (prev->val != curr->val)
    {
        temp2->next = curr;
        temp2 = temp2->next;
    }
    temp2->next = NULL;
    return head2->next;
}
int main()
{
    linkedlist ll;
    int n;
    cout << "Enter the size of the linked list : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAtend(val);
    }
    cout << "The given list was : ";
    ll.display();
    deleteDuplicates(ll.getHead());
    cout << "The list after the modification is : ";
    ll.display();
    return 0;
}
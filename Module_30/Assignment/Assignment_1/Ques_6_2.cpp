//modified the list leetcode 2130
#include <iostream>
#include <vector>
#include <limits.h>
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
int pairSum(ListNode *head)
{
    ListNode *slow=head,*fast=head;
    while(fast && fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    ListNode *head2=slow->next,*t1=head,*t2;
    slow->next=NULL;
    head2=rev(head2);
    t2=head2;
    int mx=INT_MIN;
    while(t1){
        mx=max(mx,t1->val+t2->val);
        t1=t1->next;
        t2=t2->next;
    }
    return mx;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    linkedlist ll;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAtend(val);
    }
    cout << "The given list is : ";
    ll.display();
    cout << "The maximum twin sum for the given list is : ";
    cout << pairSum(ll.getHead());
    return 0;
}
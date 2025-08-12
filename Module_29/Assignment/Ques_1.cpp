/*Leetcode
3# You are given the head of a linked list. Delete the middle node, and return the head of the
modified linked
list. [Leetcode 2095]*/
#include <iostream>
#include <vector>
using namespace std;
string suffix(int n)
{
    if (n % 10 == 0 || (n % 100 >= 11 && n % 100 <= 13))
        return "th";
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
ListNode *deleteMiddle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prevS;
    while (fast->next && fast->next->next)
    {
        prevS = slow;
        fast = fast->next->next;
        slow = slow->next;
    }
    prevS->next = slow->next;
    return head;
}
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
        if (size)
        {
            tail->next = temp;
            tail = temp;
        }
        else
            head = tail = temp;
        size++;
    }
    ListNode *getHead() { return head; }
    void dltMid()
    {
        head = deleteMiddle(head);
    }
};
int main()
{

    int n;
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
    cout << "The given list is : ";
    ll.display();
    ll.dltMid();
    ll.display();
    return 0;
}

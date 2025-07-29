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
ListNode *merge(ListNode *temp1, ListNode *temp2)
{
    ListNode *head = new ListNode(-1);
    ListNode *temp = head;
    while (temp1 && temp2)
    {
        if (temp1->val < temp2->val)
        {
            temp->next = temp1;
            temp1 = temp1->next;
        }
        else
        {
            temp->next = temp2;
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    while (temp1)
    {
        temp->next = temp1;
        temp1 = temp1->next;
        temp = temp->next;
    }
    while (temp2)
    {
        temp->next = temp2;
        temp2 = temp2->next;
        temp = temp->next;
    }
    return head->next;
}
ListNode *sortList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *slow = head, *fast = head;
    while (fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode *head2 = slow->next;
    slow->next = NULL;
    head = sortList(head);
    head2 = sortList(head2);
    return merge(head, head2);
}
int main()
{
    int n;
    cout << "Enter the size of the list : ";
    cin >> n;
    linkedlist ll;
    cout << "Enter all the list elements \n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }

    cout << "The given list is : ";
    ll.display();
    ListNode *head = ll.getHead();
    head = sortList(head);
    ListNode *temp = head;
    cout << "The sorted list is : ";
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
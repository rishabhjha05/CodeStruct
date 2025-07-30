#include <iostream>
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
    return head;
}
ListNode *reorderList(ListNode *head)
{
    ListNode *slow = head, *fast = head;
    while (fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode *head2 = slow->next;
    slow->next = NULL;
    head2 = reverseList(head2);
    ListNode *temp1 = head, *temp2 = head2;
    ListNode *head3 = new ListNode(-1), *temp = head3;
    while (temp1)
    {
        temp->next = temp1;
        temp1 = temp1->next;
        temp = temp->next;
        temp->next = temp2;
        if (temp2 == NULL)
            break;
        temp2 = temp2->next;
        temp = temp->next;
    }
    return head3->next;
}
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
    cout << "The reordered list is : ";
    ListNode *temp = reorderList(ll.getHead());
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
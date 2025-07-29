#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
ListNode *detectCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    bool found = false;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        ListNode *temp = head;
        while (temp != NULL)
        {
            if (temp == slow)
                return temp;
            temp = temp->next;
            slow = slow->next;
        }
    }
    return NULL;
}
int main()
{
    ListNode *a = new ListNode(2);
    ListNode *b = new ListNode(1);
    ListNode *c = new ListNode(5);
    ListNode *d = new ListNode(3);
    ListNode *e = new ListNode(7);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = c;
    ListNode *pt = detectCycle(a);
    if (pt != NULL)
        cout << "The value on node where cycle starts is : " << pt->val;
    else
        cout << "The given list does not contain any cycle.";
    return 0;
}
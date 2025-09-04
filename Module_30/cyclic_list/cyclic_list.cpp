#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
class cyclicList
{
public:
    ListNode *head, *tail;
    int size;
    cyclicList()
    {
        head = tail = NULL;
        size = 0;
    }
    void display()
    {
        ListNode *temp = head;
        while (temp->next != head)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << temp->val;
        cout << endl;
    }
    void addAttail(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size > 0)
        {
            tail->next = temp;
            tail = temp;
            tail->next = head;
        }
        else
        {
            head = tail = temp;
            tail->next = head;
        }
        size++;
    }
    void addAthead(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size > 0)
        {
            temp->next = head;
            head = temp;
            tail->next = temp;
        }
        else
        {
            head = tail = temp;
            tail->next = head;
        }
        size++;
    }
};
int main()
{
    cyclicList cl;
    cl.addAthead(1);
    cl.addAttail(3);
    cl.addAthead(2);
    cl.addAttail(4);
    cl.display();
    return 0;
}
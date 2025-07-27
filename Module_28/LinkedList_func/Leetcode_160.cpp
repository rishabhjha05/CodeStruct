#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
int length(ListNode *head)
{
    ListNode *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
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
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
        return;
    }
    void addAtHead(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size != 0)
        {
            temp->next = head;
            head = temp;
        }
        else
            head = tail = temp;
        size++;
        return;
    }
    void addAtTail(int val)
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
        return;
    }
    void insert(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "error, invalid argument";
        else if (idx == 0)
            addAtHead(val);
        else if (idx == size)
            addAtTail(val);
        else
        {
            ListNode *temp = head;
            ListNode *temp2 = new ListNode(val);
            for (int i = 1; i < idx; i++)
                temp = temp->next;
            temp2->next = temp->next;
            temp->next = temp2;
        }
        size++;
        return;
    }
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    int sizeA = length(headA), sizeB = length(headB);
    if (sizeA > sizeB)
    {
        ListNode *tempA = headA, *tempB = headB;
        int n = sizeA - sizeB;
        for (int i = 1; i <= n; i++)
            tempA = tempA->next;
        while (tempA != tempB)
        {
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
    }
    else
    {

        ListNode *tempA = headA, *tempB = headB;
        int n = sizeB - sizeA;
        for (int i = 1; i <= n; i++)
            tempB = tempB->next;
        while (tempA != tempB)
        {

            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
    }
    return NULL;
};
int main()
{

    return 0;
}
#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int val) : val(val), next(NULL), prev(NULL) {}
};
class DoublyLinkedList
{
public:
    ListNode *head, *tail;
    int size;
    DoublyLinkedList()
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
    void dispaly_rev()
    {
        ListNode *temp = tail;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
    void addAtHead(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size > 0)
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        else
            head = tail = temp;
        size++;
    }
    void addAtTail(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size > 0)
        {
            tail->next = temp;
            temp->prev = tail;
            tail = tail->next;
        }
        else
            head = tail = temp;
        size++;
    }
    void insertAt(int idx, int val)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "error, invalid arguement sent.";
            return;
        }
        ListNode *temp = new ListNode(val), *temp2;
        if (idx < size / 2)
        {
            temp2 = head;
            for (int i = 1; i < idx; i++)
                temp2 = temp2->next;
        }
        else
        {
            temp2 = tail;
            for (int i = 1; i <= size - idx; i++)
                temp2 = temp2->prev;
        }
        temp->next = temp2->next;
        temp2->next->prev = temp;
        temp->prev = temp2;
        temp2->next = temp;
    }
    void dltHead()
    {
        if (size < 1)
            cout << "The given list empty.";
        else
            head = head->next;
        size--;
    }
    void dltTail()
    {
        if (size < 1)
            cout << "The given list empty.";
        else
            tail = tail->prev;
        size--;
    }
    void dltIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "error, invalid arguement sent.";
            return;
        }
        if (idx <= size / 2)
        {
            ListNode *temp = head;
            for (int i = 1; i < idx; i++)
                temp = temp->next;
            temp->next = temp->next->next;
        }
        else
        {
            ListNode *temp = tail;
            for (int i = 1; i <= size - idx; i++)
                temp = temp->prev;
        }
        size--;
    }
    int getHead()
    {
        return head->val;
    }
    int getTail()
    {
        return tail->val;
    }
    int getIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "error, invalid arguement sent.";
            return -1;
        }
        ListNode *temp;
        if (idx <= size / 2)
        {
            temp = head;
            for (int i = 1; i <= idx; i++)
                temp = temp->next;
        }
        else
        {
            temp = tail;
            for (int i = 1; i < size - idx; i++)
                temp = temp->prev;
        }
        return temp->val;
    }
};
int main()
{
    DoublyLinkedList dll;
    dll.addAtHead(1);
    dll.addAtTail(3);
    dll.display();
    return 0;
}
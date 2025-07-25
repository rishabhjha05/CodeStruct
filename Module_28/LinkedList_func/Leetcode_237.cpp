#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
void deleteNode(ListNode *Node)
{
    Node->val = Node->next->val;
    Node->next = Node->next->next;
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
    void deleteIdx(int idx)
    {
        ListNode *temp = head;
        for (int i = 1; i < idx; i++)
            temp = temp->next;
        return deleteNode(temp);
    }
};
int main()
{
    linkedlist ll;
    ll.addAtHead(30);
    ll.addAtHead(10);
    ll.display();
    ll.insert(1, 20);
    ll.display();
    ll.addAtTail(12);
    ll.display();
    ll.deleteIdx(3);
    cout << "Linked list after deleting the given node is : ";
    ll.display();
    return 0;
}
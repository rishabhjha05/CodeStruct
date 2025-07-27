/*
void traverse()
    {
        Node *head2 = head;
        while (head2 and head2->next)
        {
            cout << head2->val << " ";
            head2 = head2->next->next;
        }
    }
for linked list 1->2->3->4->5
we will get 1 3 not 5 cause the next of it is NULL
*/

#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};
class linkedlist
{
public:
    int size;
    Node *head, *tail;
    linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
        return;
    }
    void addAthead(int val)
    {
        Node *temp = new Node(val);
        if (size != 0)
        {
            temp->next = head;
            head = temp;
        }
        else
            head = tail = temp;
        size++;
    }
    void addAttail(int val)
    {
        Node *temp = new Node(val);
        if (size != 0)
        {
            tail->next = temp;
            tail = tail->next;
        }
        else
            head = tail = temp;
        size++;
    }
    void addIdx(int idx, int val)
    {
        Node *temp = new Node(val);
        if (idx < 0 || idx > size)
        {
            cout << "error, given argument is invalid";
            return;
        }
        else if (idx == 0)
            addAthead(val);
        else if (idx == size)
            addAttail(val);
        else
        {
            Node *temp2 = head;
            for (int i = 1; i < idx; i++)
                temp2 = temp2->next;
            temp->next = temp2->next;
            temp2->next = temp;
        }
        size++;
    }
    void traverse()
    {
        Node *head2 = head;
        while (head2 and head2->next)
        {
            cout << head2->val << " ";
            head2 = head2->next->next;
        }
    }
};

int main()
{
    linkedlist ll;
    ll.addAthead(2);
    ll.addAthead(1);
    ll.display();
    ll.addAttail(3);
    ll.display();
    ll.addIdx(3, 4);
    ll.addIdx(4, 5);
    ll.display();
    ll.traverse();
    return 0;
}
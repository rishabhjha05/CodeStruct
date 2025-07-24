#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        Node::val = val;
        Node::next = NULL;
    }
};
class linkedlist
{
public:
    Node *head, *tail;
    int size = 0;
    linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }
    void addAtHead(int val)
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
};

int main()
{
    linkedlist ll;
    ll.addAtHead(10);
    ll.display();
    ll.addAtHead(20);
    ll.display();
    ll.addAtHead(30);
    ll.display();
    ll.addAtHead(40);
    ll.display();
    return 0;
}
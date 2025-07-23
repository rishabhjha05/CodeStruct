/*In this code we used recursion to print the element in a
given linked list*/
#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        node::val = val;
        node::next = NULL;
    }
};
void display(node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    head = head->next;
    display(head);
}
int main()
{
    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    node *d = new node(40);
    node *e = new node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    return 0;
}
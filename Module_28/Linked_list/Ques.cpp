/*What will the display function do
Sol : This function will print elements of the linked list in reverse order
*/
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
void display(Node *head)
{
    if (head == NULL)
        return;
    display(head->next);
    cout << head->val << " ";
}
// this function will print elements of the linked list in reverse order
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    return 0;
}
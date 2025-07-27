/*this is the method to add at the end when we don't know the tail*/
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
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    return;
}
void addAtTail(Node *head, int val)
{
    Node *temp = new Node(val);
    while (head->next != NULL)
        head = head->next;
    head->next = temp;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(30);
    Node *c = new Node(40);
    a->next = b;
    b->next = c;
    display(a);
    addAtTail(a, 50);
    display(a);
    return 0;
}
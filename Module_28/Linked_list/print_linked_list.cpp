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
        (*this).next = NULL;
    }
};
void displayNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return;
}
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // Node temp = a;
    // while (true)
    // {
    //     cout << temp.val << " ";
    //     if (temp.next == NULL)
    //         break;
    //     temp = *(temp.next);
    // }
    displayNode(&a);
    return 0;
}
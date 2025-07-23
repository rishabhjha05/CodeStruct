/*
-> Problem with array was that first it use contiguous memory allocation
   which leads to difficulty in allocation of memory when lot of memory bits
   already had been used
-> The size of an array is limited
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
      (*this).next = NULL;
   }
};
int main()
{
   Node a(10);
   Node b(20);
   Node c(30);
   Node d(40);
   // making the link between nodes
   a.next = &b;
   b.next = &c;
   c.next = &d;
   cout << a.val << " " << (a.next)->val << " " << ((*a.next).next)->val << " " << (((a.next)->next)->next)->val;
   return 0;
}
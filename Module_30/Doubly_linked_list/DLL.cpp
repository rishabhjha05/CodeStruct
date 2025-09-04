#include <iostream>
using namespace std;

string suffix(int n)
{
    switch (n % 10)
    {
    case 1:
        return "st";
    case 2:
        return "nd";
    case 3:
        return "rd";
    default:
        return "th";
    }
}
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};
class doublylinkedlist
{
public:
    ListNode *head;
    ListNode *tail;
    int size;
    doublylinkedlist()
    {
        head = tail = NULL;
        size = 0;
    }
    void addAtend(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size != 0)
        {
            tail->next = temp;
            temp->prev = tail;
            tail = tail->next;
            size++;
        }
        else
        {
            head = tail = temp;
            size++;
        }
    }
    ListNode *getTail()
    {
        return tail;
    }
    ListNode *getHead()
    {
        return head;
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
    void rev_display()
    {
        ListNode *temp = tail;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};
int main()
{
    int n;
    doublylinkedlist dll;
    cout << "Enter the size of the dll : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the dll : ";
        cin >> val;
        dll.addAtend(val);
    }
    cout << "The given doubly linked list is : ";
    dll.display();
    cout << "The reverse of given list is : ";
    dll.rev_display();
    return 0;
}
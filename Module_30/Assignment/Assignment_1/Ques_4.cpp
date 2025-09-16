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
    ListNode(int val) : val(val), next(NULL) {}
};
class linkedlist
{
public:
    int size;
    ListNode *head, *tail;
    linkedlist()
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
    void addAtend(int val)
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
    }
    ListNode *getHead()
    {
        return head;
    }
    void setHead(ListNode *head)
    {
        this->head = head;
    }
};
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *temp1 = l1, *temp2 = l2;
    ListNode *head = new ListNode(-1);
    ListNode *temp = head;
    int carry = 0;
    while (temp1 && temp2)
    {
        int sum = temp1->val + temp2->val + carry;
        carry = sum / 10;
        ListNode *node = new ListNode(sum % 10);
        temp->next = node;
        temp = temp->next;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while (temp1)
    {
        int sum = temp1->val + carry;
        carry = sum / 10;
        ListNode *node = new ListNode(sum % 10);
        temp->next = node;
        temp = temp->next;
        temp1 = temp1->next;
    }
    while (temp2)
    {
        int sum = temp2->val + carry;
        carry = sum / 10;
        ListNode *node = new ListNode(sum % 10);
        temp->next = node;
        temp = temp->next;
        temp2 = temp2->next;
    }
    if (carry)
    {
        ListNode *node = new ListNode(carry);
        temp->next = node;
        temp = temp->next;
    }
    temp->next = NULL;
    return head->next;
}
void fill(linkedlist &ll, int n)
{
    cout << "Enter the list element \n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAtend(val);
    }
}
int main()
{
    int n, m;
    linkedlist ll, ll1, ll2;
    cout << "Enter the size of the first list : ";
    cin >> n;
    fill(ll1, n);
    cout << "Enter the size of the second list : ";
    cin >> m;
    fill(ll2, m);
    cout << "The given two list are : \n";
    ll1.display();
    ll2.display();
    cout << "The sum of the given list is : ";
    ll.setHead(addTwoNumbers(ll1.getHead(), ll2.getHead()));
    ll.display();
    return 0;
}
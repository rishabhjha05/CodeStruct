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
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
        return;
    }
    void addAttail(int val)
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
    ListNode *getHead() { return head; }
};
ListNode *getNode(ListNode *head, int n)
{
    ListNode *temp = head;
    for (int i = 1; i <= n; i++)
        temp = temp->next;
    return temp;
}
ListNode *reverseList(ListNode *head)
{
    int size = 0;
    ListNode *temp = head;
    while (temp)
    {
        temp = temp->next;
        size++;
    }
    int i = 0, j = size - 1;
    while (i < j)
    {
        ListNode *left = getNode(head, i);
        ListNode *right = getNode(head, j);
        int temp = left->val;
        left->val = right->val;
        right->val = temp;
        i++;
        j--;
    }
    return head;
}
int main()
{
    int n;
    cout << "Enter the size of list : ";
    cin >> n;
    linkedlist ll;
    cout << "Enter all the elements of the list \n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }
    cout << "The given list is : ";
    ll.display();
    cout << "The reverse list is : ";
    ListNode *temp = reverseList(ll.getHead());
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
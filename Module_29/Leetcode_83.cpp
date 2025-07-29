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
ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *temp = head;
    while (temp && temp->next)
    {
        if (temp->val == temp->next->val)
            temp->next = temp->next->next;
        else
            temp = temp->next;
    }
    return head;
}
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
        return;
    }
    void addAthead(int val)
    {
        ListNode *temp = new ListNode(val);
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
    void addAtidx(int idx, int val)
    {
        ListNode *temp = new ListNode(val);
        if (idx < 0 || idx > size)
        {
            cout << "error, invalid arguement sent";
            return;
        }
        else if (idx == 0)
            addAthead(val);
        else if (idx = size)
            addAttail(val);
        else
        {
            ListNode *temp2 = head;
            for (int i = 1; i < idx; i++)
                temp2 = temp2->next;
            temp->next = temp2->next;
            temp2->next = temp;
        }
    }
    void deletedup()
    {
        head = deleteDuplicates(head);
        ListNode *temp = head;
        while (temp->next)
            temp = temp->next;
        tail = temp;
    }
};
int main()
{
    linkedlist ll;
    int n;
    cout << "Enter the size of the list : ";
    cin >> n;
    cout << "Enter the element of list in sorted order \n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }
    cout << "The list was intially this : ";
    ll.display();
    ll.deletedup();
    cout << "The modified list is this : ";
    ll.display();

    return 0;
}
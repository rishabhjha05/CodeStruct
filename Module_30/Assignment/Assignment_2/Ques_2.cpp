#include <iostream>
using namespace std;
string suffix(int i)
{
    switch (i % 10)
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
        size = 0;
        head = tail = NULL;
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
    ListNode *getHead()
    {
        return head;
    }
    void setHead(ListNode *head)
    {
        this->head = head;
    }
};
ListNode *mergeNodes(ListNode *head)
{
    ListNode *pt = head;
    ListNode *head2 = new ListNode(-1);
    ListNode *temp = head2;
    int sum;
    while (pt)
    {
        while (pt->val)
        {
            sum += pt->val;
            pt = pt->next;
        }
        if (sum)
        {
            ListNode *node = new ListNode(sum);
            temp->next = node;
            temp = temp->next;
        }
        pt = pt->next;
        sum = 0;
    }
    return head2->next;
}
int main()
{
    int n;
    cout << "Enter the size of the list : ";
    cin >> n;
    linkedlist ll;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }
    cout << "The given list was : ";
    ll.display();
    ll.setHead(mergeNodes(ll.getHead()));
    cout << "The modified list is : ";
    ll.display();
    return 0;
}
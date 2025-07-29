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

ListNode *partition(ListNode *head, int x)
{
    ListNode *head1 = new ListNode(-1), *head2 = new ListNode(-1);
    ListNode *temp1 = head1, *temp2 = head2, *temp = head;
    while (temp)
    {
        if (temp->val < x)
        {
            temp1->next = temp;
            temp1 = temp1->next;
            temp = temp->next;
        }
        else
        {

            temp2->next = temp;
            temp2 = temp2->next;
            temp = temp->next;
        }
    }
    temp1->next = head2->next;
    temp2->next = NULL;
    return head1->next;
}
int main()
{
    int n, k;
    cout << "Enter the size of list : ";
    cin >> n;
    linkedlist ll;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }
    cout << "Enter the value of k : ";
    cin >> k;
    ListNode *head = ll.getHead();
    ListNode *head2 = partition(head, k);
    cout << "The modified list will be : ";
    ListNode *temp = head2;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
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

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *temp1 = list1;
    ListNode *temp2 = list2;
    ListNode *temp3 = new ListNode(-1);
    ListNode *head = temp3;
    while (temp1 && temp2)
    {
        if (temp1->val > temp2->val)
        {
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        else
        {
            temp3->next = temp1;
            temp1 = temp1->next;
        }
        temp3 = temp3->next;
    }
    while (temp1)
    {
        temp3->next = temp1;
        temp1 = temp1->next;
        temp3 = temp3->next;
    }
    while (temp2)
    {
        temp3->next = temp2;
        temp2 = temp2->next;
        temp3 = temp3->next;
    }
    return head->next;
}

class linkedlink
{
public:
    int size;
    ListNode *head, *tail;
    linkedlink()
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
            tail = tail->next;
        }
        else
            head = tail = temp;
        size++;
    }
    ListNode *getHead() { return head; }
};
int main()
{
    linkedlink ll1, ll2;
    int n, m;
    cout << "Enter the size of first list : ";
    cin >> n;
    cout << "Enter all the elements of first list \n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll1.addAttail(val);
    }
    cout << "Enter the size of second list : ";
    cin >> m;
    cout << "Enter all the elements of second list \n";
    for (int i = 0; i < m; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll2.addAttail(val);
    }
    cout << "First list was : ";
    ll1.display();
    cout << "Second list was : ";
    ll2.display();
    ListNode *head1 = ll1.getHead(), *head2 = ll2.getHead();
    ListNode *head = mergeTwoLists(head1, head2);
    cout << "The merged list of given two list will be : ";
    ListNode *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
    return 0;
}
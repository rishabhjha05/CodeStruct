/*wf You are given two linked lists: list1 and list2 of sizes n and m respectively.
Remove list1 's nodes from the
ath node to the bth node, and put list2 in their place.
[Leetcode 1669]*/
#include <iostream>
#include <vector>
using namespace std;
string suffix(int n)
{
    if (n % 10 == 0 || (n % 100 >= 11 && n % 100 <= 13))
        return "th";
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
        if (size)
        {
            tail->next = temp;
            tail = temp;
        }
        else
            head = tail = temp;
        size++;
    }
    ListNode *getHead() { return head; }
    void setHead(ListNode *Head)
    {
        head = Head;
    }
};
ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
{
    int n = 0;
    ListNode *temp = list1, *pt1, *pt2;
    while (temp)
    {
        if (n == a - 1)
        {
            pt1 = temp;
        }
        if (n == b + 1)
        {
            pt2 = temp;
            break;
        }
        temp = temp->next;
        n++;
    }
    temp = list2;
    pt1->next = list2;
    while (temp->next)
        temp = temp->next;
    temp->next = pt2;
    return list1;
}
int main()
{

    int a, b, n;
    cout << "Enter the size of first list : ";
    cin >> n;
    linkedlist ll, ll1, ll2;
    cout << "Enter all the elements of the first list \n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the first list : ";
        cin >> val;
        ll1.addAttail(val);
    }
    cout << "Enter the size of first list : ";
    cin >> n;
    cout << "Enter all the elements of the second list \n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the second list : ";
        cin >> val;
        ll2.addAttail(val);
    }
    cout << "Enter the value of a and b respectively : ";
    cin >> a >> b;
    cout << "The given two lists are : \n";
    ll1.display();
    ll2.display();
    cout << "The modified linked list is : ";
    ll.setHead(mergeInBetween(ll1.getHead(), a, b, ll2.getHead()));
    ll.display();
    return 0;
}

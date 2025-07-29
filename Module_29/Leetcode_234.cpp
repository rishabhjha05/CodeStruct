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
ListNode *reverseList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *prev = head, *curr = head->next, *Next = head->next->next;
    while (Next)
    {
        curr->next = prev;
        prev = curr;
        curr = Next;
        Next = Next->next;
    }
    curr->next = prev;
    head->next = NULL;
    head = curr;
    return head;
}
bool isPlaindrome(ListNode *head)
{
    ListNode *head2 = new ListNode(-1);
    ListNode *temp = head, *temp2 = head2;
    while (temp)
    {
        ListNode *Node = new ListNode(temp->val);
        temp2->next = Node;
        temp2 = temp2->next;
        temp = temp->next;
    }
    ListNode *revHead = reverseList(head2);

    temp = head, temp2 = revHead;
    while (temp)
    {
        if (temp->val != temp2->val)
            return false;
        temp = temp->next;
        temp2 = temp2->next;
    }
    return true;
}
int main()
{
    linkedlist ll;
    int n;
    cout << "Enter the size of list : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }
    cout << "The given list is : ";
    ll.display();
    if (isPlaindrome(ll.getHead()))
        cout << "The given list is a palindrome.";
    else
        cout << "The given list is not a palindrome.";
    return 0;
}
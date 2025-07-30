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
ListNode *getIdx(ListNode *head, int idx)
{
    ListNode *temp = head;
    for (int i = 1; i <= idx; i++)
        temp = temp->next;
    return temp;
}
bool isPlaindrome(ListNode *head)
{
    ListNode *temp = head;
    int size = 0;
    while (temp)
    {
        temp = temp->next;
        size++;
    }

    int i = 0, j = size - 1;
    while (i < j)
    {
        ListNode *left = getIdx(head, i);
        ListNode *right = getIdx(head, j);
        if (left->val != right->val)
            return false;
        i++, j--;
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
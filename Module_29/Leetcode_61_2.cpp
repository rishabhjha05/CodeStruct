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
ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL || head->next == NULL || k == 0)
        return head;
    ListNode *slow = head, *fast = head, *temp = head;
    int size = 0;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    k %= size;
    for (int i = 1; i <= k; i++)
        fast = fast->next;
    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = head;
    head = slow->next;
    slow->next = NULL;
    return head;
}
class linkedlist
{
public:
    int size;
    ListNode *head, *tail;
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
        return;
    }
    void rotate(int k)
    {
        head = rotateRight(head, k);
        ListNode *temp = head;
        while (temp->next)
            temp = temp->next;
        tail = temp;
    }
};
int main()
{

    linkedlist ll;
    int n, k;
    cout << "Enter the size of the list : ";
    cin >> n;
    cout << "Enter the elements of the list \n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "The list was intially this : ";
    ll.display();
    ll.rotate(k);
    cout << "The modified list is this : ";
    ll.display();

    return 0;
}
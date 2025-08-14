#include <iostream>
#include <vector>
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
ListNode *getNode(ListNode *head, int idx)
{
    ListNode *temp = head;
    for (int i = 0; i < idx; i++)
        temp = temp->next;
    return temp;
}
ListNode *swapNodes(ListNode *head, int k)
{
    ListNode *temp = head;
    int size = 0;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    ListNode *left = getNode(head, k - 1);
    ListNode *right = getNode(head, size - k);
    int tem = left->val;
    left->val = right->val;
    right->val = tem;
    return head;
}
class LinkedList
{
public:
    int size;
    ListNode *head;
    ListNode *tail;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void setAttail(int val)
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
    void swap(int k)
    {
        if (k < 1 || k > size)
            cout << "error, invalid arguement sent.";
        else
            head = swapNodes(head, k);
    }
};

int main()
{
    int n, k;
    cout << "Enter the size of the list : ";
    cin >> n;
    LinkedList ll;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.setAttail(val);
    }
    cout << "Enter the value of  k : ";
    cin >> k;
    cout << "The given list is : ";
    ll.display();
    ll.swap(k);
    cout<<"The modified list is : ";
    ll.display();
    return 0;
}
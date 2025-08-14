/*Q4. Given the head of a linked list and an integer val , remove all the nodes of the linked list that
has Node.val == val , and return the new head. */
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
ListNode *removeElements(ListNode *head, int val)
{
    ListNode*temp=head;
    while(temp->next){
        if(temp->next->val==val)
            temp->next=temp->next->next;
        else
            temp=temp->next;
    }
    return head;
}
class LinkedList
{
public:
    ListNode *head, *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void display()
    {
        ListNode *temp = head;
        while (temp)
        {
            cout << temp->val<<" ";
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
            tail = tail->next;
        }
        else
            head = tail = temp;
        size++;
    }
    void dlt(int val)
    {
        head = removeElements(head, val);
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
        ll.addAttail(val);
    }
    cout << "Enter the value to be removed : ";
    cin >> k;
    cout << "The given linked list is : ";
    ll.display();
    ll.dlt(k);
    cout << "The modified list is : ";
    ll.display();

    return 0;
}
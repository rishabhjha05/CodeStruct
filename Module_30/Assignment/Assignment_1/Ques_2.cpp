//leetcode 147
#include <iostream>
#include <vector>
#include <algorithm>
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
    int size = 0;
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
    }
    void addAtend(int val)
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
    void setHead(ListNode* head)
    {
        this->head=head;
    }
};
ListNode *insertionSortList(ListNode *head)
{
    vector<int> vec;
    ListNode *temp = head;
    while (temp)
    {
        vec.push_back(temp->val);
        temp = temp->next;
    }
    sort(vec.begin(), vec.end());
    ListNode *head2 = new ListNode(-1);
    temp = head2;
    for (int ele : vec)
    {
        ListNode *node = new ListNode(ele);
        temp->next = node;
        temp = temp->next;
        cout<<"hi\n";
    }
    return head2->next;
}
int main()
{

    linkedlist ll;
    int n;
    cout << "Enter the size of the linked list : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAtend(val);
    }
    cout << "The given list was : ";
    ll.display();
    ll.setHead(insertionSortList(ll.getHead()));
    cout << "The sorted list is : ";
    ll.display();
    return 0;
}
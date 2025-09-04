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
class linkedlist
{
public:
    int size;
    ListNode *head, *tail;
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
    }
    void addAtTail(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size > 0)
        {
            tail->next = temp;
            tail = temp;
        }
        else
            head = tail = temp;
        size++;
    }
};
vector<ListNode *> splitListToParts(ListNode *head, int k)
{
    vector<ListNode *> vec;
    ListNode *temp = head;
    int size = 0;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    int n = size / k, rmd = size % k;
    temp = head;
    while (temp)
    {
        ListNode *Node = new ListNode(-1);
        ListNode *temp2 = Node;
        for (int i = 0; i < n + (rmd != 0) ? 1 : 0; i++)
        {
            temp2->next = temp;
            temp2 = temp2->next;
            temp = temp->next;
        }
        if (rmd > 0)
            rmd--;
        temp2->next = NULL;
        vec.push_back(Node->next);
    }
    while (vec.size() < k)
        vec.push_back(NULL);
    return vec;
}
int main()
{
    linkedlist ll;
    int n, k;
    cout << "Enter the size of the list : ";
    cin >> n;
    cout << "Enter the elements of the list\n";
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAtTail(val);
    }
    cout << "Enter the value of k : ";
    cin >> k;
    return 0;
}
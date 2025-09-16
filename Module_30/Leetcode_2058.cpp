#include <iostream>
#include <vector>
#include <limits.h>
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
    ListNode *getHead()
    {
        return head;
    }
};
vector<int> nodesBetweenCriticalPoints(ListNode *head)
{
    vector<int> idx;
    int size = 0;
    ListNode *temp = head;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    temp = head;
    for (int i = 1; i < size - 1; i++)
    {
        int val = temp->next->val;
        if (val > temp->val && val > temp->next->next->val)
            idx.push_back(i);
        else if (val < temp->val && val < temp->next->next->val)
            idx.push_back(i);
        temp = temp->next;
    }
    vector<int> ans(2, -1);
    if (idx.size() < 2)
        return ans;
    else
    {
        int maxdis = idx[idx.size() - 1] - idx[0];
        int mindis = INT_MAX;
        for (int i = 0; i < idx.size() - 1; i++)
        {
            int x = idx[i + 1] - idx[i];
            mindis = min(mindis, x);
        }
        ans[0] = mindis;
        ans[1] = maxdis;
    }
    return ans;
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
    vector<int> vec = nodesBetweenCriticalPoints(ll.getHead());
    cout << "The minimum distance between any two critical points are : " << vec[0];
    cout << "The maximum distance between any two critical points are : " << vec[1];
    return 0;
}
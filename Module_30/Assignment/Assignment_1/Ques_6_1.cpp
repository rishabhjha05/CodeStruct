//not modified the list leetcode 2130
#include <iostream>
#include <vector>
#include <limits.h>
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
    void setHead(ListNode *head)
    {
        this->head = head;
    }
};
int pairSum(ListNode *head)
{
    vector<int> vec;
    ListNode* temp=head;
    while(temp){
        vec.push_back(temp->val);
        temp=temp->next;
    }
    int mx=INT_MIN,i=0,j=vec.size()-1;
    while(i<j)
        mx=max(mx,vec[i++]+vec[j--]);
    return mx;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    linkedlist ll;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAtend(val);
    }
    cout << "The given list is : ";
    ll.display();
    cout << "The maximum twin sum for the given list is : ";
    cout<<pairSum(ll.getHead());
    return 0;
}
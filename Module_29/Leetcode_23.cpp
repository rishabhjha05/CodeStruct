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
        return;
    }
    void addAttail(int val)
    {
        ListNode *temp = new ListNode(val);
        if (size != 0)
        {
            tail->next = temp;
            tail = tail->next;
        }
        else
            head = tail = temp;
        size++;
    }
    ListNode *getHead() { return head; }
};
ListNode *merge(ListNode *head1, ListNode *head2)
{
    ListNode *temp1 = head1;
    ListNode *temp2 = head2;
    ListNode *temp = new ListNode(-1);
    ListNode *head = temp;
    while (temp1 && temp2)
    {
        if (temp1->val < temp2->val)
        {
            temp->next = temp1;
            temp1 = temp1->next;
        }
        else
        {
            temp->next = temp2;
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    while (temp1)
    {
        temp->next = temp1;
        temp1 = temp1->next;
        temp = temp->next;
    }
    while (temp2)
    {
        temp->next = temp2;
        temp2 = temp2->next;
        temp = temp->next;
    }
    return head->next;
}
ListNode *mergeKlist(vector<ListNode *> &lists)
{
    if (lists.size() == 0)
        return NULL;
    while (lists.size() != 1)
    {
        ListNode *head1, *head2;
        head1 = lists[0];
        lists.erase(lists.begin());
        head2 = lists[0];
        lists.erase(lists.begin());
        lists.push_back(merge(head1, head2));
    }
    return lists[0];
}
int main()
{
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<ListNode *> vec(n);
    for (int i = 0; i < n; i++)
    {
        linkedlist *temp = new linkedlist;
        int size;
        cout << "Enter the size of " << i + 1 << suffix(i + 1) << " list : ";
        cin >> size;
        cout << "Enter all the elements of " << i + 1 << suffix(i + 1) << " list \n";
        for (int j = 0; j < size; j++)
        {
            int val;
            cout << "Enter the " << j + 1 << suffix(j + 1) << " element of the list : ";
            cin >> val;
            temp->addAttail(val);
        }
        vec[i] = temp->getHead();
        delete temp;
    }
    cout << "The given lists were \n";
    for (int i = 0; i < n; i++)
    {
        ListNode *temp = vec[i];
        cout << i + 1 << suffix(i + 1) << " List was : ";
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    cout << "The merged list is : ";
    ListNode *temp = mergeKlist(vec);
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
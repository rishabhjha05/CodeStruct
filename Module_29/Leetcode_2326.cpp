#include <iostream>
#include <vector>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
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
            tail = tail->next;
        }
        else
            head = tail = temp;
        size++;
        return;
    }
    ListNode *getheadAdd()
    {
        return head;
    }
};
vector<vector<int>> fill_matrix(int m, int n, ListNode *head)
{
    ListNode *temp = head;
    vector<vector<int>> sol(m, vector<int>(n, -1));
    int minrow = 0, maxrow = m - 1, mincol = 0, maxcol = n - 1;
    while (minrow <= maxrow && mincol <= maxcol)
    {
        for (int j = mincol; j <= maxcol && temp; j++)
        {
            sol[minrow][j] = temp->val;
            temp = temp->next;
        }
        minrow++;
        for (int i = minrow; i <= maxrow && temp; i++)
        {
            sol[i][maxcol] = temp->val;
            temp = temp->next;
        }
        maxcol--;
        for (int j = maxcol; j >= mincol && temp; j--)
        {
            sol[maxrow][j] = temp->val;
            temp = temp->next;
        }
        maxrow--;
        for (int i = maxrow; i >= minrow && temp; i--)
        {
            sol[i][mincol] = temp->val;
            temp = temp->next;
        }
        mincol++;
        if (temp == NULL)
            return sol;
    }
    return sol;
}
int main()
{
    linkedlist ll;

    int n, m, k;
    cout << "Enter the size of the list : ";
    cin >> k;
    cout << "Enter the elements of the list \n";
    for (int i = 0; i < k; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of the list : ";
        cin >> val;
        ll.addAttail(val);
    }
    cout << "Enter the number of the rows : ";
    cin >> m;
    cout << "Enter the number of the column : ";
    cin >> n;
    cout << "The given list is : ";
    ll.display();
    ListNode *head = ll.getheadAdd();
    vector<vector<int>> sol = fill_matrix(m, n, head);
    cout << "\nThe matrix will be \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }

    return 0;
}
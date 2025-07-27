#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};
class linkedlist
{
public:
    int size;
    Node *head, *tail;
    linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
        return;
    }
    void inserthead(int val)
    {
        Node *temp = new Node(val);
        if (size != 0)
        {
            temp->next = head;
            head = temp;
        }
        else
            head = tail = temp;
        size++;
    }
    void inserttail(int val)
    {
        Node *temp = new Node(val);
        if (size != 0)
        {
            tail->next = temp;
            tail = tail->next;
        }
        else
            head = tail = temp;
        size++;
    }
    void insertIdx(int idx, int val)
    {
        Node *temp = new Node(val);
        if (idx < 0 || idx > size)
        {
            cout << "error, invalid argument sent.";
            return;
        }
        else if (idx == 0)
            inserthead(val);
        else if (idx == size)
            inserttail(val);
        else
        {
            Node *temp2 = head;
            for (int i = 1; i < idx; i++)
                temp2 = temp2->next;
            temp->next = temp2->next;
            temp2->next = temp;
        }
        size++;
    }
    void deletehead() { head = head->next, size--; }
    void deletetail()
    {
        Node *temp = head;
        while (temp->next != tail)
            temp = temp->next;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteIdx(int idx)
    {
        if (idx < 0 || idx > size)
        {
            cout << "error, invalid arguement sent.";
            return;
        }
        else if (idx == 0)
            deletehead();
        else if (idx == size)
            deletetail();
        else
        {
            Node *temp = head;
            for (int i = 1; i < idx; i++)
                temp = temp->next;
            temp->next = temp->next->next;
        }
    }
    int getIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "error, invalid arguement sent.";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx; i++)
                temp = temp->next;
            return temp->val;
        }
    }
};
int main()
{
    linkedlist ll;
    return 0;
}
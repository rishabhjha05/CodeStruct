#include <iostream>
#include <stack>
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
void rev_stack(stack<int>& st){
    stack<int> temp1,temp2;
    while (st.size() > 0)
    {
        temp1.push(st.top());
        st.pop();
    }
    while (temp1.size() > 0)
    {
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(temp2.size()>0){
        
        st.push(temp2.top());
        temp2.pop();
    }
    return; 
}
void display(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    int n;
    cout << "Enter the size of the stack : ";
    cin >> n;
    stack<int> st,temp;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << suffix(i + 1) << " element of stack : ";
        cin >> val;
        st.push(val);
    }
    cout<<"The stack before func called : ";
    display(st);
    rev_stack(st);
    cout<<"The stack after func called : ";
    display(st);


    return 0;
}
/*stack work on LIFO last in first out */
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stack;
    cout << stack.size() << endl;
    stack.push(4); // it add the given value at top most position of the stack
    cout << stack.size() << endl;
    stack.push(5);
    cout << stack.size() << endl;
    stack.push(6);
    cout << stack.size() << endl;
    int val = stack.top(); // it return the value of top most element of the stack
    cout << stack.size() << endl;
    stack.pop(); // this removes the top most element of the stack
    cout << stack.size() << endl;
    return 0;
}

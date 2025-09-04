#include <iostream>
#include <stack>
using namespace std;
void fun(int n)
{
    stack<int> s;
    while (n > 0)
    {
        s.push(n % 2);
        n = n / 2;
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The binary representaion of " << n << " is : ";
    fun(n);
    return 0;
}
/*
(A) Prints binary representation of n in reverse order+
(B) Prints binary representation of n+
(C) Print the value of Log n+
(D) Print the value of Log n in reverse order

answer
(B) Prints binary representation of n+
*/
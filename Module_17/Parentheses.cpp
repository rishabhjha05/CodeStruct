/*Given a number make function which return the vector of all possible combination of
parentheses*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> sol;
void parentheses(string ans, int op, int cp, int n)
{
    if (op == n && cp == n)
    {
        sol.push_back(ans);
        return;
    }
    if (op < n)
        parentheses(ans + '(', op + 1, cp, n);
    if (op > cp)
        parentheses(ans + ')', op, cp + 1, n);
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    parentheses("", 0, 0, n);
    for (int i = 0; i < sol.size(); i++)
        cout << sol[i] << " , ";

    return 0;
}
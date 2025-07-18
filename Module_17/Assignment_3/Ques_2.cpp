/*Q2. Print all the increasing sequences of length k from first n natural numbers.*/
#include <iostream>
#include <vector>
using namespace std;
vector<string> sol;
void sequences(string ans, int n, int k, int idx)
{
    if (idx == n + 1)
    {
        if (ans.size() == k)
            sol.push_back(ans);
        return;
    }
    sequences(ans, n, k, idx + 1);
    ans += to_string(idx);
    sequences(ans, n, k, idx + 1);
}
int main()
{
    int n, k;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of k : ";
    cin >> k;
    sequences("", n, k, 1);
    for (int i = 0; i < sol.size(); i++)
        cout << sol[i] << endl;

    return 0;
}
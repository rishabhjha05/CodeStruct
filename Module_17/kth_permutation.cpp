#include <iostream>
#include <string>
using namespace std;
string ans;
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}
void kth_permutation(string str, int k)
{
    if (str.size()==1)
    {
        ans += str[0];
        return;
    }
    int fact = factorial(str.size() - 1), idx;
    if (k % 2 == 0)
        idx = k / fact + 1;
    else
        idx = k / fact;
    ans += str[idx];
    string left_string = str.substr(0, idx);
    string right_string = str.substr(idx + 1);
    str = left_string + right_string;
    kth_permutation(str, k - idx * fact);
}
int main()
{
    int n, k;
    string str;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        str += to_string(i);
    cout << "Enter the value of k : ";
    cin >> k;
    kth_permutation(str, k);
    cout << "The kth permutaion sequence for the given value of n is : " << ans;
}
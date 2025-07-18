/*Print from 1 to n using extra parameter */
#include <iostream>
using namespace std;
void print(int n, int i)
{
    if (n == 0)
        return;
    cout << i++ << " ";
    print(n - 1, i);
}
int main()
{
    int n, i = 1;
    cout << "Enter the value of n : ";
    cin >> n;
    print(n, i);
    return 0;
}
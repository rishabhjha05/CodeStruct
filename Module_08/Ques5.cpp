#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 65; j < 65 + i; j++)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;
void function(int a, int b)
{
    for (int i = min(a, b); i <= max(a, b); i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }

    return;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b respectively : ";
    cin >> a >> b;
    cout << "All the odd number in between the given value of a and b are :\n";
    function(a, b);

    return 0;
}
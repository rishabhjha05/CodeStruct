#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of row : ";
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        int k = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k += 2;
        }
        cout << endl;
    }

    return 0;
}
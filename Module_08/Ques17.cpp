#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int min = 1, max = n * 2 - 1;
    for (int i = min; i <= max; i++)
    {
        for (int j = min; j <= max; j++)
        {
            if (j == min || j == max || i == min || i == max)
                cout << n << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
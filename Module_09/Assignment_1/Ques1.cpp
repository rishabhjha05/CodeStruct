#include <iostream>
using namespace std;
void square(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << i * i << "\n";
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Square of n natural number is : \n";
    square(n);

    return 0;
}
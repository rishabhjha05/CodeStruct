/*Q4. Calculate the time complexity for the following code snippet where k is some constant (k<<n).*/
#include <iostream>
using namespace std;
int main()
{
    int c = 0, n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        c++;
    }
    /*
    Time complexity for the given code is :
    O(n)
    as the loop runs for exactly n times
    */
}
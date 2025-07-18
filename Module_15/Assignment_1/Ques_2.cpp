#include <iostream>
using namespace std;

int main()
{
    int n, c = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = n; i > 1; i /= i)
    {
        c++;
    }
    /*
    Time complexity for the given code is
    O(1)
    as code will only run for value of i equal to n
    space complexity for the given code is
    O(1)
    as no extra space is used
    */
    return 0;
}
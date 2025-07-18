/*Calculate the time complexity for the following code snippet.*/
#include <iostream>
using namespace std;
int main()
{
    int c = 0, n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = n; i > 0; i /= 2)
    {
        c++;
    }
    /*
    time complexity is O(logn) as n can be divided
    by 2 upto 1 for logn time
    */
    return 0;
}
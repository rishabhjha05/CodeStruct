/*Calculate the time complexity for the following code snippet where k is some constant (k<<n).*/
#include <iostream>
using namespace std;
int main()
{
    int c = 0, n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            c++;
        }
    }
    /*
    Time complexity for the code is :
    i=0 j={0} 1 iteration
    i=1 j={0,1} 2 iteration
    i=2 j={0,1,2} 3 iteration
    .     .                      .
    .     .                      .
    .     .                      .
    i=n-1 j{0,1,2,3,.....,n-1}   n iteration

    total number of iteration is
    1+2+3+4......+n
    it's a ap
    sum of n term of ap is n*(n+1)/2
    (n^2)/2+n/2 hence the time complexity for the given code will be
    O((n^2)/2+n/2)--> O((n^2)/2)--> O(n^2)
    */
    return 0;
}
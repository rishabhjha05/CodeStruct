/*Q2. Calculate the time complexity for the following code snippet.*/
#include <iostream>
using namespace std;
int main()
{
    int c = 0, n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j *= 2)
        {
            c++;
        }
    }
    /*
    The outer loop runs for n times always

    the inner loop will run logn with base 2 time irrespective of outer loop
    for n=10
    j={1,2,4,8}={2^0,2^1,2^2,2^3}
    for n=40
    j={1,2,4,8,16,32}={2^0,2^1,2^2,2^3,2^4,2^5}
    for n=100
    j={1,2,4,8,16,32,64}={2^0,2^1,2^2,2^3,2^4,2^5,2^6}
    here inner loop iterate for x+1 time always
    where 2^x=n
    hence x=log n with base 2

    hence total number of iteration is n*logn
    hence time complexity for the given code is :
    O(n*logn)
    */
    return 0;
}
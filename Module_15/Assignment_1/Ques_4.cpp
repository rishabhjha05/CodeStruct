/*Q4. Calculate the time complexity for the following code snippet where k is some constant (k<<n).*/
#include <iostream>
using namespace std;
int main()
{
    int c = 0, n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i < n; i *= 2)
    {
        c++;
    }
    /*
    for n=40;
    i=1 : 1<40 : c=1 : i=2 (2^1);
    i=2 : 2<40 : c=2 : i=4 (2^2);
    i=8 : 8<40 : c=3 : i=16 (2^3);
    i=16 : 16<40 : c=4 : i=32 (2^4);
    i=32 : 32<40 : c=5 : i=64 (2^5);
    i= {1,2^1,2^2,2^3......2^x}
    where x is number of iteration hence loop will run
    untill 2^x<n and will stop when it equate hence
    2^x=n taking log with base 2 both side
    x*log2=logn log2 with base 2 is 1
    x=logn with base n
    hence time complexity for the given code is :
    O(log n)

    */
}
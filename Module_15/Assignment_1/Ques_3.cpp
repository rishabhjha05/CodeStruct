/*Calculate the time complexity for the following code snippet where k is some constant (k<<n).*/
#include <iostream>
using namespace std;

int main()
{
    int c = 0, n, k;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of k : ";
    cin >> k;
    for (int i = 0; i < n; i += k)
    {
        c++;
    }
    /*
    Time complexity for the given code is
    O(n)
    as the loop will iterate for n/k times
    let n=7 and k=2
    i=0 0<6 c=1
    i=2 2<6 c=2
    i=4 4<6 c=3
    i=6 6=6 loop stop
    hence O(n/k)-->O(n)
    */
    return 0;
}
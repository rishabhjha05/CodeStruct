#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the shift factor : ";
    cin >> i;

    /*
    for n=5 and i=2
    The 5 left shift by 2 is   0101 --> 01010 --> 010100 (20)
    The 5 right shift by 2 is  0101 -->  0010 -->   0001 (1)
    */
    cout << "The value of " << n << " left shift by " << i << " is : " << (n << i);
    cout << "\nThe vlaue of " << n << "right shift by " << i << " is : " << (n >> i);
    return 0;
}
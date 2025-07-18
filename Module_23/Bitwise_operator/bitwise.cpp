/*
following are the bitwise operator
AND : &
OR : |
XOR : ^
Bitwise NOT : ~
*/
#include <iostream>
using namespace std;
int main()
{
       int a, b;
       cout << "Enter two number a and b : ";
       cin >> a;
       cin >> b;
       /*
       Example a=4(0100) b=14(1110)
       a&b is 0100
              1110
       a&b =  0100 = 4;

       a|b is 0100
              1110
       a|b =  1110 = 14;

       a^b is 0100
              1110
       a^b =  1010 = 10;

       ~4  is 00000000000000000000000000000100
              11111111111111111111111111111011 =-5;
              which can't be stored in int data type so
              when the value exceed the int range the value repeats
              Computers don't store numbers with just the bits that are “used.”
              Signed integers use a fixed number of bits (commonly 8, 16, 32, or 64).
              And they use two's complement to represent negative numbers.
              So ~4 doesn’t just flip the 3 digits you see (100); it flips all 8 bits (or 32/64), like:

              AND Table

              A  |  B  |  RESULT
              1  |  1  |    1
              0  |  1  |    0
              1  |  0  |    0
              0  |  0  |    0

              OR Table

              A  |  B  |  RESULT
              1  |  1  |    1
              0  |  1  |    1
              1  |  0  |    1
              0  |  0  |    0

              XOR Table

              A  |  B  |  RESULT
              1  |  1  |    0
              0  |  1  |    1
              1  |  0  |    1
              0  |  0  |    0

              NOT Table

              A  |  RESULT
              1  |    0
              0  |    1
              
       */
       int c = a & b;
       cout << "The value of a AND b is : " << c;
       c = a | b;
       cout << "\nThe value of a OR b is : " << c;
       c = a ^ b;
       cout << "\nThe value of a XOR b is : " << c;
       c = ~a;
       cout << "\nThe value of a NOT is : " << c;
       return 0;
}

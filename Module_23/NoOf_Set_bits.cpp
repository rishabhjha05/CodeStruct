#include <iostream>
using namespace std;
int NumOfSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The number of set bits in the given number is : " << NumOfSetBits(n);
    return 0;
}
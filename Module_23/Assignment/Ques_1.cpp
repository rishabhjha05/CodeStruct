/*Q1. Given an integer n, find the largest and smallest power of two that is set in that integer.*/
#include <iostream>
using namespace std;
void find(int n, int &largest, int &smallest)
{
    for (int i = 0; i < 32; i++)
    {
        if (n & (1 << i))
        {
            smallest = i;
            break;
        }
    }
    for (int i = 31; i >= 0; i--)
    {
        if (n & (1 << i))
        {
            largest = i;
            break;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int largest = -1, smallest = -1;
    find(n, largest, smallest);
    cout << "The largest power of 2 for given number " << n << " is : " << largest;
    cout << "\nThe smallest power of 2 for given number " << n << " is : " << smallest;

    return 0;
}
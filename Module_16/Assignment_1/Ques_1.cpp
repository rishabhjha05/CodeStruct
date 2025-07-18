/*Q1. Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
recursion.*/
#include <iostream>
using namespace std;
int solution(int a, int b, int sum)
{
    if (a == b + 1)
        return sum;
    if (a % 2 != 0)
        return solution(a + 1, b, sum + a);
    return solution(a + 1, b, sum);
}
int main()
{
    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    cout << "The sum of all odd number between a and b both inclusive is : " << solution(a, b, 0);
    return 0;
}
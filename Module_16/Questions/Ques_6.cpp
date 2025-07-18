/*Make a function to calculate nth fibonacci number using recursion*/
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The nth fibonacci number is : " << fibonacci(n);
    return 0;
}
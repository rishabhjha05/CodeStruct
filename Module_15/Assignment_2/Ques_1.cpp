/*Q1. Calculate the time complexity for the following code snippet.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j * j < n; j++)
        {
            cout << "PhysicsWallah";
        }
    }
    /*
    the outer loop will run for n time constantly
    where as the inner loop will run untill j^2 aproximately equal to
    n hence j^2=n which tells that inner loop will run for sqrt(n) times
    hence total number of iteration is n*n^(1/2)
    which gives time complexity equal to
    O(n^1.5);
    */
    return 0;
}
/*
O(n)
O(n^2)
O(n^3)
O(logn)
O(2^n)
O(1)//constant time complexity
*/
#include <iostream>
using namespace std;
void fun(int n)
{
    for (int i = 0; i < n; i += 2)
    {
        cout << "PhysicsWallah";
    }
    /*
    tough for this function loop iterating ony for n/2 times but
    time compelxity will not be O(n/2)
    there is convention that if time complextiy is O(kn)
    then we will ignore k and this is called upper bound time complexity
    and hence for this function time complexity is O(n)

    O(kn)-->O(n)
    O(n+k)-->O(n)
    O(n-k)-->O(n)
    O(kn+k2)-->O(kn)-->O(n)
    O(kn-k2)-->O(kn)-->O(n)
    O(n^2+n)-->O(n^2)
    O(kn^m+n^m-1_n^m-2)-->O(n^m)//but dont do anything with m if m is fraction

    */
}
void fun2(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Hello";
    }
    for (int i = 0; i < m; i++)
    {
        cout << "Hello";
    }
    /*
    time complexity for this function will be O(n+m)
    */
}
void fun3(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Hello";
        }
    }

    /*
    time complexity for this function will be O(n*m)
    */
}
void fun4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "Hello";
        }
    }

    /*
    for input n=4
    i=1 j{1} 1operation
    i=2 j{1,2} 2operation
    i=3 j{1,2,3} 3operation
    i=4 j{1,2,3,4} 4operation
    total operation = 1+2+3+4.....+n which is equal to n*(n+1)/2
    hence Time complexity is O((n^2)/2+1/2)-->O((n^2)/2)-->O(n^2);
    */
}
void fun5(int n,int k)
{
    for (int i = 0; i < n; i*=k)
    {
        cout << "Hello";
    }

    /*
    let say n=9 ank k=2;k can't be 1;
    i=1 : 1 1<9
    i=k : 2 2<9
    i=k^2 : 4 4<9
    i=k^3 : 8 8<9
    i=k^4 : 16 16!<9
    there happen x+1 operation 
    so loop will break when k^x exceeds n hence
    k^x>n approx k^x=n the loop will run where x is number of operation
    taking log to the base k both side we get 
    x=log n to the base k
    hence time complexity for the given function will be 
    O(logk n+1)-->O(logk n)
    order of time complexity 
    O(1)>O(logk n)>O(n)>O(n^2)>O(n^3);
    */
}
void fun6(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Hello";
        }
    }
/*
Time complexity for this function is O(n*m)
as there is n iteration of outer loop and there
is m iteration for each iteration of outer loop hence 
total number of iteration are n*m
*/
    
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "PhysicsWallah\n";
    }
    /*Time complexity for this code is O(n)
    as loop iterates for n times */
    return 0;
}